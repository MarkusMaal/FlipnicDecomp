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

// Function: entry_00198ad4
// Address: 0x198ad4 - 0x198afc
void entry_00198ad4_0x198ad4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198ad4_0x198ad4");
#endif

    ctx->pc = 0x198ad4u;

    // 0x198ad4: 0x0  nop
    ctx->pc = 0x198ad4u;
    // NOP
    // 0x198ad8: 0x8ea40664  lw          $a0, 0x664($s5)
    ctx->pc = 0x198ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
    // 0x198adc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x198adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x198ae0: 0x8c860064  lw          $a2, 0x64($a0)
    ctx->pc = 0x198ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x198ae4: 0x8c850068  lw          $a1, 0x68($a0)
    ctx->pc = 0x198ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x198ae8: 0x10c30004  beq         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x198AE8u;
    {
        const bool branch_taken_0x198ae8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x198AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198AE8u;
        // 0x198aec: 0x24910040  addiu       $s1, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198ae8) {
            ctx->pc = 0x198AFCu;
            return;
        }
    }
    ctx->pc = 0x198AF0u;
    // 0x198af0: 0x8c870034  lw          $a3, 0x34($a0)
    ctx->pc = 0x198af0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x198af4: 0xc064b08  jal         func_192C20
    ctx->pc = 0x198AF4u;
    SET_GPR_U32(ctx, 31, 0x198AFCu);
    ctx->pc = 0x198AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198AF4u;
    // 0x198af8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192C20u, 0x198AF4u, 0x198AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198AFCu;
}
