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

// Function: entry_00197284
// Address: 0x197284 - 0x1972e0
void entry_00197284_0x197284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197284_0x197284");
#endif

    switch (ctx->pc) {
        case 0x1972a8u: goto label_1972a8;
        case 0x1972b4u: goto label_1972b4;
        case 0x1972d0u: goto label_1972d0;
        default: break;
    }

    ctx->pc = 0x197284u;

label_197284:
    // 0x197284: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x197284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_197288:
    // 0x197288: 0x8e230674  lw          $v1, 0x674($s1)
    ctx->pc = 0x197288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1652)));
label_19728c:
    // 0x19728c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19728cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_197290:
    // 0x197290: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x197290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_197294:
    // 0x197294: 0x8c532cd8  lw          $s3, 0x2CD8($v0)
    ctx->pc = 0x197294u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_197298:
    // 0x197298: 0x8e790008  lw          $t9, 0x8($s3)
    ctx->pc = 0x197298u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_19729c:
    // 0x19729c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x19729cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1972a0:
    // 0x1972a0: 0x320f809  jalr        $t9
label_1972a4:
    if (ctx->pc == 0x1972A4u) {
        ctx->pc = 0x1972A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972A0u;
        // 0x1972a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1972A8u;
        goto label_1972a8;
    }
    ctx->pc = 0x1972A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1972A8u);
        ctx->pc = 0x1972A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972A0u;
        // 0x1972a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1972A0u, 0x1972A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1972A8u;
label_1972a8:
    // 0x1972a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1972a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1972ac:
    // 0x1972ac: 0xc05ee1c  jal         func_17B870
label_1972b0:
    if (ctx->pc == 0x1972B0u) {
        ctx->pc = 0x1972B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972ACu;
        // 0x1972b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1972B4u;
        goto label_1972b4;
    }
    ctx->pc = 0x1972ACu;
    SET_GPR_U32(ctx, 31, 0x1972B4u);
    ctx->pc = 0x1972B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1972ACu;
    // 0x1972b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B870u, 0x1972ACu, 0x1972B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1972B4u;
label_1972b4:
    // 0x1972b4: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x1972b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1972b8:
    // 0x1972b8: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1972b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1972bc:
    // 0x1972bc: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x1972bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1972c0:
    // 0x1972c0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1972c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1972c4:
    // 0x1972c4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1972c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1972c8:
    // 0x1972c8: 0x320f809  jalr        $t9
label_1972cc:
    if (ctx->pc == 0x1972CCu) {
        ctx->pc = 0x1972CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972C8u;
        // 0x1972cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1972D0u;
        goto label_1972d0;
    }
    ctx->pc = 0x1972C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1972D0u);
        ctx->pc = 0x1972CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1972C8u;
        // 0x1972cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1972C8u, 0x1972D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1972D0u;
label_1972d0:
    // 0x1972d0: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1972d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1972d4:
    // 0x1972d4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1972d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1972d8:
    // 0x1972d8: 0xae22068c  sw          $v0, 0x68C($s1)
    ctx->pc = 0x1972d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1676), GPR_U32(ctx, 2));
label_1972dc:
    // 0x1972dc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1972dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x1972e0u;
}
