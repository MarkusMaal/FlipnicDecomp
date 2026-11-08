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

// Function: entry_00122db8
// Address: 0x122db8 - 0x122e04
void entry_00122db8_0x122db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122db8_0x122db8");
#endif

    switch (ctx->pc) {
        case 0x122ddcu: goto label_122ddc;
        case 0x122dfcu: goto label_122dfc;
        default: break;
    }

    ctx->pc = 0x122db8u;

    // 0x122db8: 0x30a30003  andi        $v1, $a1, 0x3
    ctx->pc = 0x122db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x122dbc: 0x838023  subu        $s0, $a0, $v1
    ctx->pc = 0x122dbcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x122dc0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x122dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x122dc4: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x122dc4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x122dc8: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x122DC8u;
    {
        const bool branch_taken_0x122dc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x122DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122DC8u;
        // 0x122dcc: 0x70082b  sltu        $at, $v1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122dc8) {
            ctx->pc = 0x122E2Cu;
            return;
        }
    }
    ctx->pc = 0x122DD0u;
    // 0x122dd0: 0x8e32000c  lw          $s2, 0xC($s1)
    ctx->pc = 0x122dd0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x122dd4: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x122DD4u;
    SET_GPR_U32(ctx, 31, 0x122DDCu);
    ctx->pc = 0x122DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122DD4u;
    // 0x122dd8: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x122DD4u, 0x122DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122DDCu;
label_122ddc:
    // 0x122ddc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x122ddcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122de0: 0x16a00008  bnez        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x122DE0u;
    {
        const bool branch_taken_0x122de0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x122DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122DE0u;
        // 0x122de4: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122de0) {
            ctx->pc = 0x122E04u;
            return;
        }
    }
    ctx->pc = 0x122DE8u;
    // 0x122de8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x122de8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x122dec: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x122decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x122df0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x122df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x122df4: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x122DF4u;
    SET_GPR_U32(ctx, 31, 0x122DFCu);
    ctx->pc = 0x122DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122DF4u;
    // 0x122df8: 0x24a5e9d0  addiu       $a1, $a1, -0x1630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x122DF4u, 0x122DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122DFCu;
label_122dfc:
    // 0x122dfc: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x122DFCu;
    SET_GPR_U32(ctx, 31, 0x122E04u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x122DFCu, 0x122E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122E04u;
}
