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

// Function: FUN_00117d60
// Address: 0x117d60 - 0x117e4c
void FUN_00117d60_0x117d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00117d60_0x117d60");
#endif

    switch (ctx->pc) {
        case 0x117d90u: goto label_117d90;
        case 0x117dacu: goto label_117dac;
        case 0x117dccu: goto label_117dcc;
        case 0x117ddcu: goto label_117ddc;
        case 0x117df0u: goto label_117df0;
        case 0x117e38u: goto label_117e38;
        default: break;
    }

    ctx->pc = 0x117d60u;

    // 0x117d60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x117d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x117d64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x117d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x117d68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x117d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x117d6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x117d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x117d70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x117d70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d74: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x117D74u;
    {
        const bool branch_taken_0x117d74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x117D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D74u;
        // 0x117d78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d74) {
            ctx->pc = 0x117DB4u;
            goto label_117db4;
        }
    }
    ctx->pc = 0x117D7Cu;
    // 0x117d7c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x117d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x117d80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x117d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d84: 0x2484e5a8  addiu       $a0, $a0, -0x1A58
    ctx->pc = 0x117d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960552));
    // 0x117d88: 0xc080796  jal         func_201E58
    ctx->pc = 0x117D88u;
    SET_GPR_U32(ctx, 31, 0x117D90u);
    ctx->pc = 0x117D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117D88u;
    // 0x117d8c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201E58u, 0x117D88u, 0x117D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117D90u;
label_117d90:
    // 0x117d90: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x117D90u;
    {
        const bool branch_taken_0x117d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117d90) {
            ctx->pc = 0x117DBCu;
            goto label_117dbc;
        }
    }
    ctx->pc = 0x117D98u;
    // 0x117d98: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x117d98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x117d9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x117d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117da0: 0x2484e5b0  addiu       $a0, $a0, -0x1A50
    ctx->pc = 0x117da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960560));
    // 0x117da4: 0xc080796  jal         func_201E58
    ctx->pc = 0x117DA4u;
    SET_GPR_U32(ctx, 31, 0x117DACu);
    ctx->pc = 0x117DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117DA4u;
    // 0x117da8: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201E58u, 0x117DA4u, 0x117DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117DACu;
label_117dac:
    // 0x117dac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x117DACu;
    {
        const bool branch_taken_0x117dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117dac) {
            ctx->pc = 0x117DBCu;
            goto label_117dbc;
        }
    }
    ctx->pc = 0x117DB4u;
label_117db4:
    // 0x117db4: 0x3c110022  lui         $s1, 0x22
    ctx->pc = 0x117db4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
    // 0x117db8: 0x2631e5b8  addiu       $s1, $s1, -0x1A48
    ctx->pc = 0x117db8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294960568));
label_117dbc:
    // 0x117dbc: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x117dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x117dc0: 0x24050160  addiu       $a1, $zero, 0x160
    ctx->pc = 0x117dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x117dc4: 0xc07efaa  jal         func_1FBEA8
    ctx->pc = 0x117DC4u;
    SET_GPR_U32(ctx, 31, 0x117DCCu);
    ctx->pc = 0x117DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117DC4u;
    // 0x117dc8: 0x2484d980  addiu       $a0, $a0, -0x2680 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBEA8u, 0x117DC4u, 0x117DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117DCCu;
label_117dcc:
    // 0x117dcc: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x117dccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x117dd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x117dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117dd4: 0xc080702  jal         func_201C08
    ctx->pc = 0x117DD4u;
    SET_GPR_U32(ctx, 31, 0x117DDCu);
    ctx->pc = 0x117DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117DD4u;
    // 0x117dd8: 0x2484d980  addiu       $a0, $a0, -0x2680 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x117DD4u, 0x117DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117DDCu;
label_117ddc:
    // 0x117ddc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x117ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117de0: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x117de0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x117de4: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x117de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x117de8: 0x2484d980  addiu       $a0, $a0, -0x2680
    ctx->pc = 0x117de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957440));
    // 0x117dec: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x117decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_117df0:
    // 0x117df0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x117df0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117df4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x117DF4u;
    {
        const bool branch_taken_0x117df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117df4) {
            ctx->pc = 0x117E28u;
            goto label_117e28;
        }
    }
    ctx->pc = 0x117DFCu;
    // 0x117dfc: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x117DFCu;
    {
        const bool branch_taken_0x117dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x117dfc) {
            ctx->pc = 0x117E18u;
            goto label_117e18;
        }
    }
    ctx->pc = 0x117E04u;
    // 0x117e04: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x117e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x117e08: 0x2442d981  addiu       $v0, $v0, -0x267F
    ctx->pc = 0x117e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957441));
    // 0x117e0c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x117e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x117e10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x117E10u;
    {
        const bool branch_taken_0x117e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E10u;
        // 0x117e14: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e10) {
            ctx->pc = 0x117E28u;
            goto label_117e28;
        }
    }
    ctx->pc = 0x117E18u;
label_117e18:
    // 0x117e18: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x117e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x117e1c: 0x28a203ff  slti        $v0, $a1, 0x3FF
    ctx->pc = 0x117e1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1023) ? 1 : 0);
    // 0x117e20: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x117E20u;
    {
        const bool branch_taken_0x117e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E20u;
        // 0x117e24: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117e20) {
            ctx->pc = 0x117DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117df0;
        }
    }
    ctx->pc = 0x117E28u;
label_117e28:
    // 0x117e28: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x117e28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x117e2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x117e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117e30: 0xc080664  jal         func_201990
    ctx->pc = 0x117E30u;
    SET_GPR_U32(ctx, 31, 0x117E38u);
    ctx->pc = 0x117E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117E30u;
    // 0x117e34: 0x2484d980  addiu       $a0, $a0, -0x2680 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x117E30u, 0x117E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117E38u;
label_117e38:
    // 0x117e38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x117e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117e3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x117e3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117e40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x117e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117e44: 0x3e00008  jr          $ra
    ctx->pc = 0x117E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117E44u;
        // 0x117e48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117E4Cu;
}
