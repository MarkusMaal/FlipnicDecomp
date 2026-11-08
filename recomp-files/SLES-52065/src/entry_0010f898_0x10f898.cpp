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

// Function: entry_0010f898
// Address: 0x10f898 - 0x10f8d0
void entry_0010f898_0x10f898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f898_0x10f898");
#endif

    switch (ctx->pc) {
        case 0x10f8acu: goto label_10f8ac;
        case 0x10f8ccu: goto label_10f8cc;
        default: break;
    }

    ctx->pc = 0x10f898u;

label_10f898:
    // 0x10f898: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x10f898u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10f89c:
    // 0x10f89c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10f8a0:
    // 0x10f8a0: 0x8f39010c  lw          $t9, 0x10C($t9)
    ctx->pc = 0x10f8a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 268)));
label_10f8a4:
    // 0x10f8a4: 0x320f809  jalr        $t9
label_10f8a8:
    if (ctx->pc == 0x10F8A8u) {
        ctx->pc = 0x10F8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8A4u;
        // 0x10f8a8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F8ACu;
        goto label_10f8ac;
    }
    ctx->pc = 0x10F8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10F8ACu);
        ctx->pc = 0x10F8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8A4u;
        // 0x10f8a8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F8A4u, 0x10F8ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F8ACu;
label_10f8ac:
    // 0x10f8ac: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x10f8acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_10f8b0:
    // 0x10f8b0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x10f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_10f8b4:
    // 0x10f8b4: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x10f8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_10f8b8:
    // 0x10f8b8: 0x24420290  addiu       $v0, $v0, 0x290
    ctx->pc = 0x10f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 656));
label_10f8bc:
    // 0x10f8bc: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x10f8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10f8c0:
    // 0x10f8c0: 0x8f3900c8  lw          $t9, 0xC8($t9)
    ctx->pc = 0x10f8c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 200)));
label_10f8c4:
    // 0x10f8c4: 0x320f809  jalr        $t9
label_10f8c8:
    if (ctx->pc == 0x10F8C8u) {
        ctx->pc = 0x10F8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8C4u;
        // 0x10f8c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F8CCu;
        goto label_10f8cc;
    }
    ctx->pc = 0x10F8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10F8CCu);
        ctx->pc = 0x10F8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8C4u;
        // 0x10f8c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F8C4u, 0x10F8CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10F8CCu;
label_10f8cc:
    // 0x10f8cc: 0xae400228  sw          $zero, 0x228($s2)
    ctx->pc = 0x10f8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 552), GPR_U32(ctx, 0));
    ctx->pc = 0x10f8d0u;
}
