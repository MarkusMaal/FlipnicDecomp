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

// Function: FUN_00106d90
// Address: 0x106d90 - 0x106e3c
void FUN_00106d90_0x106d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00106d90_0x106d90");
#endif

    switch (ctx->pc) {
        case 0x106ddcu: goto label_106ddc;
        case 0x106e0cu: goto label_106e0c;
        case 0x106e24u: goto label_106e24;
        default: break;
    }

    ctx->pc = 0x106d90u;

    // 0x106d90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x106d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x106d94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x106d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x106d98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x106d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x106d9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x106d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x106da0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x106da0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106da4: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x106DA4u;
    {
        const bool branch_taken_0x106da4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106DA4u;
        // 0x106da8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106da4) {
            ctx->pc = 0x106E24u;
            goto label_106e24;
        }
    }
    ctx->pc = 0x106DACu;
    // 0x106dac: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x106dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x106db0: 0x24427f30  addiu       $v0, $v0, 0x7F30
    ctx->pc = 0x106db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32560));
    // 0x106db4: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x106DB4u;
    {
        const bool branch_taken_0x106db4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106DB4u;
        // 0x106db8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106db4) {
            ctx->pc = 0x106E0Cu;
            goto label_106e0c;
        }
    }
    ctx->pc = 0x106DBCu;
    // 0x106dbc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x106dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x106dc0: 0x24429a70  addiu       $v0, $v0, -0x6590
    ctx->pc = 0x106dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941296));
    // 0x106dc4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x106dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x106dc8: 0x8e240228  lw          $a0, 0x228($s1)
    ctx->pc = 0x106dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
    // 0x106dcc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x106DCCu;
    {
        const bool branch_taken_0x106dcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x106dcc) {
            ctx->pc = 0x106DDCu;
            goto label_106ddc;
        }
    }
    ctx->pc = 0x106DD4u;
    // 0x106dd4: 0xc04018c  jal         func_100630
    ctx->pc = 0x106DD4u;
    SET_GPR_U32(ctx, 31, 0x106DDCu);
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x106DD4u, 0x106DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106DDCu;
label_106ddc:
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
            goto label_106e10;
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
            goto label_106e0c;
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
label_106e0c:
    // 0x106e0c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x106e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_106e10:
    // 0x106e10: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x106e10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x106e14: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x106E14u;
    {
        const bool branch_taken_0x106e14 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x106E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E14u;
        // 0x106e18: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106e14) {
            ctx->pc = 0x106E28u;
            goto label_106e28;
        }
    }
    ctx->pc = 0x106E1Cu;
    // 0x106e1c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x106E1Cu;
    SET_GPR_U32(ctx, 31, 0x106E24u);
    ctx->pc = 0x106E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106E1Cu;
    // 0x106e20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x106E1Cu, 0x106E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106E24u;
label_106e24:
    // 0x106e24: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x106e24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_106e28:
    // 0x106e28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x106e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106e2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x106e2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106e30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x106e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106e34: 0x3e00008  jr          $ra
    ctx->pc = 0x106E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E34u;
        // 0x106e38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106E3Cu;
}
