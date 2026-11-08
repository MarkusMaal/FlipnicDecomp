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

// Function: entry_0014eaac
// Address: 0x14eaac - 0x14eae0
void entry_0014eaac_0x14eaac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014eaac_0x14eaac");
#endif

    switch (ctx->pc) {
        case 0x14eab8u: goto label_14eab8;
        case 0x14ead8u: goto label_14ead8;
        default: break;
    }

    ctx->pc = 0x14eaacu;

    // 0x14eaac: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x14eaacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14eab0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x14EAB0u;
    SET_GPR_U32(ctx, 31, 0x14EAB8u);
    ctx->pc = 0x14EAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EAB0u;
    // 0x14eab4: 0x26740008  addiu       $s4, $s3, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x14EAB0u, 0x14EAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EAB8u;
label_14eab8:
    // 0x14eab8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x14eab8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eabc: 0x16a00008  bnez        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x14EABCu;
    {
        const bool branch_taken_0x14eabc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EABCu;
        // 0x14eac0: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eabc) {
            ctx->pc = 0x14EAE0u;
            return;
        }
    }
    ctx->pc = 0x14EAC4u;
    // 0x14eac4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14eac4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14eac8: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14eac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x14eacc: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14eaccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14ead0: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14EAD0u;
    SET_GPR_U32(ctx, 31, 0x14EAD8u);
    ctx->pc = 0x14EAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EAD0u;
    // 0x14ead4: 0x24a5f2c0  addiu       $a1, $a1, -0xD40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14EAD0u, 0x14EAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EAD8u;
label_14ead8:
    // 0x14ead8: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14EAD8u;
    SET_GPR_U32(ctx, 31, 0x14EAE0u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14EAD8u, 0x14EAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EAE0u;
}
