#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00197184
// Address: 0x197184 - 0x1971c8
void entry_00197184_0x197184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197184_0x197184");
#endif

    switch (ctx->pc) {
        case 0x1971a8u: goto label_1971a8;
        case 0x1971b4u: goto label_1971b4;
        default: break;
    }

    ctx->pc = 0x197184u;

label_197184:
    // 0x197184: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x197184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_197188:
    // 0x197188: 0x8e630674  lw          $v1, 0x674($s3)
    ctx->pc = 0x197188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1652)));
label_19718c:
    // 0x19718c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19718cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_197190:
    // 0x197190: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x197190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_197194:
    // 0x197194: 0x8c512cd8  lw          $s1, 0x2CD8($v0)
    ctx->pc = 0x197194u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_197198:
    // 0x197198: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x197198u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_19719c:
    // 0x19719c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x19719cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1971a0:
    // 0x1971a0: 0x320f809  jalr        $t9
label_1971a4:
    if (ctx->pc == 0x1971A4u) {
        ctx->pc = 0x1971A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971A0u;
        // 0x1971a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1971A8u;
        goto label_1971a8;
    }
    ctx->pc = 0x1971A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1971A8u);
        ctx->pc = 0x1971A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971A0u;
        // 0x1971a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1971A0u, 0x1971A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1971A8u;
label_1971a8:
    // 0x1971a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1971a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1971ac:
    // 0x1971ac: 0xc05ee1c  jal         func_17B870
label_1971b0:
    if (ctx->pc == 0x1971B0u) {
        ctx->pc = 0x1971B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971ACu;
        // 0x1971b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1971B4u;
        goto label_1971b4;
    }
    ctx->pc = 0x1971ACu;
    SET_GPR_U32(ctx, 31, 0x1971B4u);
    ctx->pc = 0x1971B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1971ACu;
    // 0x1971b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B870u, 0x1971ACu, 0x1971B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1971B4u;
label_1971b4:
    // 0x1971b4: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x1971b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
label_1971b8:
    // 0x1971b8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1971b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1971bc:
    // 0x1971bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1971bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1971c0:
    // 0x1971c0: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1971c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1971c4:
    // 0x1971c4: 0xae620680  sw          $v0, 0x680($s3)
    ctx->pc = 0x1971c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1664), GPR_U32(ctx, 2));
    ctx->pc = 0x1971c8u;
}
