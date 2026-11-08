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

// Function: entry_001060ec
// Address: 0x1060ec - 0x10612c
void entry_001060ec_0x1060ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001060ec_0x1060ec");
#endif

    ctx->pc = 0x1060ecu;

    // 0x1060ec: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1060ECu;
    {
        const bool branch_taken_0x1060ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1060F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1060ECu;
        // 0x1060f0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1060ec) {
            ctx->pc = 0x106130u;
            return;
        }
    }
    ctx->pc = 0x1060F4u;
    // 0x1060f4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1060f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1060f8: 0x24429770  addiu       $v0, $v0, -0x6890
    ctx->pc = 0x1060f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940528));
    // 0x1060fc: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1060FCu;
    {
        const bool branch_taken_0x1060fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1060FCu;
        // 0x106100: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1060fc) {
            ctx->pc = 0x10612Cu;
            return;
        }
    }
    ctx->pc = 0x106104u;
    // 0x106104: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x106104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x106108: 0x24427f90  addiu       $v0, $v0, 0x7F90
    ctx->pc = 0x106108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32656));
    // 0x10610c: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10610Cu;
    {
        const bool branch_taken_0x10610c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10610Cu;
        // 0x106110: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10610c) {
            ctx->pc = 0x10612Cu;
            return;
        }
    }
    ctx->pc = 0x106114u;
    // 0x106114: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x106114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x106118: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10611c: 0x244297d0  addiu       $v0, $v0, -0x6830
    ctx->pc = 0x10611cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940624));
    // 0x106120: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x106120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106124: 0xc0416c8  jal         func_105B20
    ctx->pc = 0x106124u;
    SET_GPR_U32(ctx, 31, 0x10612Cu);
    ctx->pc = 0x106128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106124u;
    // 0x106128: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B20u, 0x106124u, 0x10612Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10612Cu;
}
