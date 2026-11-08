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

// Function: entry_00101ee0
// Address: 0x101ee0 - 0x101f08
void entry_00101ee0_0x101ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101ee0_0x101ee0");
#endif

    switch (ctx->pc) {
        case 0x101f04u: goto label_101f04;
        default: break;
    }

    ctx->pc = 0x101ee0u;

    // 0x101ee0: 0x262203b0  addiu       $v0, $s1, 0x3B0
    ctx->pc = 0x101ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 944));
    // 0x101ee4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x101EE4u;
    {
        const bool branch_taken_0x101ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101EE4u;
        // 0x101ee8: 0x26240310  addiu       $a0, $s1, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ee4) {
            ctx->pc = 0x101F08u;
            return;
        }
    }
    ctx->pc = 0x101EECu;
    // 0x101eec: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x101eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x101ef0: 0x262403c0  addiu       $a0, $s1, 0x3C0
    ctx->pc = 0x101ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 960));
    // 0x101ef4: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x101ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
    // 0x101ef8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x101ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x101efc: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x101EFCu;
    SET_GPR_U32(ctx, 31, 0x101F04u);
    ctx->pc = 0x101F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101EFCu;
    // 0x101f00: 0xae2203b4  sw          $v0, 0x3B4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 948), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x101EFCu, 0x101F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F04u;
label_101f04:
    // 0x101f04: 0x26240310  addiu       $a0, $s1, 0x310
    ctx->pc = 0x101f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    ctx->pc = 0x101f08u;
}
