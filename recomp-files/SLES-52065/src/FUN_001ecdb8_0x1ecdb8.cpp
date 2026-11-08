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

// Function: FUN_001ecdb8
// Address: 0x1ecdb8 - 0x1ece68
void FUN_001ecdb8_0x1ecdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ecdb8_0x1ecdb8");
#endif

    switch (ctx->pc) {
        case 0x1ecdf8u: goto label_1ecdf8;
        default: break;
    }

    ctx->pc = 0x1ecdb8u;

    // 0x1ecdb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ecdb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ecdbc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ecdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ecdc0: 0x3c110022  lui         $s1, 0x22
    ctx->pc = 0x1ecdc0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)34 << 16));
    // 0x1ecdc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ecdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ecdc8: 0x8e25a3c0  lw          $a1, -0x5C40($s1)
    ctx->pc = 0x1ecdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x21A3C0u));
    // 0x1ecdcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ecdccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecdd0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ecdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ecdd4: 0x28a2007e  slti        $v0, $a1, 0x7E
    ctx->pc = 0x1ecdd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)126) ? 1 : 0);
    // 0x1ecdd8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ECDD8u;
    {
        const bool branch_taken_0x1ecdd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECDD8u;
        // 0x1ecddc: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecdd8) {
            ctx->pc = 0x1ECE00u;
            goto label_1ece00;
        }
    }
    ctx->pc = 0x1ECDE0u;
    // 0x1ecde0: 0x3c120039  lui         $s2, 0x39
    ctx->pc = 0x1ecde0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)57 << 16));
    // 0x1ecde4: 0xae20a3c0  sw          $zero, -0x5C40($s1)
    ctx->pc = 0x1ecde4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294943680), GPR_U32(ctx, 0));
    // 0x1ecde8: 0x2642c680  addiu       $v0, $s2, -0x3980
    ctx->pc = 0x1ecde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952576));
    // 0x1ecdec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ecdecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecdf0: 0xc07b20e  jal         func_1EC838
    ctx->pc = 0x1ECDF0u;
    SET_GPR_U32(ctx, 31, 0x1ECDF8u);
    ctx->pc = 0x1ECDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECDF0u;
    // 0x1ecdf4: 0xa040007f  sb          $zero, 0x7F($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 127), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC838u, 0x1ECDF0u, 0x1ECDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECDF8u;
label_1ecdf8:
    // 0x1ecdf8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ECDF8u;
    {
        const bool branch_taken_0x1ecdf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECDF8u;
        // 0x1ecdfc: 0x8e25a3c0  lw          $a1, -0x5C40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecdf8) {
            ctx->pc = 0x1ECE04u;
            goto label_1ece04;
        }
    }
    ctx->pc = 0x1ECE00u;
label_1ece00:
    // 0x1ece00: 0x3c120039  lui         $s2, 0x39
    ctx->pc = 0x1ece00u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)57 << 16));
label_1ece04:
    // 0x1ece04: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1ece04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ece08: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1ECE08u;
    {
        const bool branch_taken_0x1ece08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ECE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECE08u;
        // 0x1ece0c: 0x2642c680  addiu       $v0, $s2, -0x3980 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ece08) {
            ctx->pc = 0x1ECE40u;
            goto label_1ece40;
        }
    }
    ctx->pc = 0x1ECE10u;
    // 0x1ece10: 0x2644c680  addiu       $a0, $s2, -0x3980
    ctx->pc = 0x1ece10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952576));
    // 0x1ece14: 0xae20a3c0  sw          $zero, -0x5C40($s1)
    ctx->pc = 0x1ece14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294943680), GPR_U32(ctx, 0));
    // 0x1ece18: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1ece18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1ece1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ece1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ece20: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x1ece20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x1ece24: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ece24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ece28: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ece28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ece2c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ece2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ece30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ece30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ece34: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1ece34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ece38: 0x807b20e  j           func_1EC838
    ctx->pc = 0x1ECE38u;
    ctx->pc = 0x1ECE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECE38u;
    // 0x1ece3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC838u;
    FUN_001ec838_0x1ec838(rdram, ctx, runtime); return;
    ctx->pc = 0x1ECE40u;
label_1ece40:
    // 0x1ece40: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1ece40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ece44: 0xae23a3c0  sw          $v1, -0x5C40($s1)
    ctx->pc = 0x1ece44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294943680), GPR_U32(ctx, 3));
    // 0x1ece48: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1ece48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1ece4c: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x1ece4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x1ece50: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ece50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ece54: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ece54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ece58: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ece58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ece5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ece5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ece60: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECE60u;
        // 0x1ece64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECE68u;
}
