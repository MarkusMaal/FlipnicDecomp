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

// Function: entry_00106bac
// Address: 0x106bac - 0x106bdc
void entry_00106bac_0x106bac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106bac_0x106bac");
#endif

    ctx->pc = 0x106bacu;

    // 0x106bac: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x106BACu;
    {
        const bool branch_taken_0x106bac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106BACu;
        // 0x106bb0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106bac) {
            ctx->pc = 0x106BE0u;
            return;
        }
    }
    ctx->pc = 0x106BB4u;
    // 0x106bb4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x106bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x106bb8: 0x24429770  addiu       $v0, $v0, -0x6890
    ctx->pc = 0x106bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940528));
    // 0x106bbc: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x106BBCu;
    {
        const bool branch_taken_0x106bbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106BBCu;
        // 0x106bc0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106bbc) {
            ctx->pc = 0x106BDCu;
            return;
        }
    }
    ctx->pc = 0x106BC4u;
    // 0x106bc4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x106bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x106bc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106bcc: 0x24427f90  addiu       $v0, $v0, 0x7F90
    ctx->pc = 0x106bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32656));
    // 0x106bd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x106bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106bd4: 0xc0418c0  jal         func_106300
    ctx->pc = 0x106BD4u;
    SET_GPR_U32(ctx, 31, 0x106BDCu);
    ctx->pc = 0x106BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106BD4u;
    // 0x106bd8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106300u, 0x106BD4u, 0x106BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106BDCu;
}
