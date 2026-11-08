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

// Function: entry_00106ddc
// Address: 0x106ddc - 0x106e0c
void entry_00106ddc_0x106ddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106ddc_0x106ddc");
#endif

    ctx->pc = 0x106ddcu;

    // 0x106ddc: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x106DDCu;
    {
        const bool branch_taken_0x106ddc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106DDCu;
        // 0x106de0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106ddc) {
            ctx->pc = 0x106E10u;
            return;
        }
    }
    ctx->pc = 0x106DE4u;
    // 0x106de4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x106de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x106de8: 0x24429770  addiu       $v0, $v0, -0x6890
    ctx->pc = 0x106de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940528));
    // 0x106dec: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x106DECu;
    {
        const bool branch_taken_0x106dec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106DECu;
        // 0x106df0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106dec) {
            ctx->pc = 0x106E0Cu;
            return;
        }
    }
    ctx->pc = 0x106DF4u;
    // 0x106df4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x106df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x106df8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106dfc: 0x24427f90  addiu       $v0, $v0, 0x7F90
    ctx->pc = 0x106dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32656));
    // 0x106e00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x106e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106e04: 0xc0418c0  jal         func_106300
    ctx->pc = 0x106E04u;
    SET_GPR_U32(ctx, 31, 0x106E0Cu);
    ctx->pc = 0x106E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106E04u;
    // 0x106e08: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106300u, 0x106E04u, 0x106E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106E0Cu;
}
