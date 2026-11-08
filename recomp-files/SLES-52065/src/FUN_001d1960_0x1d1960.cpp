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

// Function: FUN_001d1960
// Address: 0x1d1960 - 0x1d1a2c
void FUN_001d1960_0x1d1960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d1960_0x1d1960");
#endif

    ctx->pc = 0x1d1960u;

    // 0x1d1960: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1d1960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d1964: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1d1964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d1968: 0x10a3000f  beq         $a1, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1D1968u;
    {
        const bool branch_taken_0x1d1968 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D196Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1968u;
        // 0x1d196c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1968) {
            ctx->pc = 0x1D19A8u;
            goto label_1d19a8;
        }
    }
    ctx->pc = 0x1D1970u;
    // 0x1d1970: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1D1970u;
    {
        const bool branch_taken_0x1d1970 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d1970) {
            ctx->pc = 0x1D19A8u;
            goto label_1d19a8;
        }
    }
    ctx->pc = 0x1D1978u;
    // 0x1d1978: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1d1978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d197c: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D197Cu;
    {
        const bool branch_taken_0x1d197c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D1980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D197Cu;
        // 0x1d1980: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d197c) {
            ctx->pc = 0x1D19A8u;
            goto label_1d19a8;
        }
    }
    ctx->pc = 0x1D1984u;
    // 0x1d1984: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1984u;
    {
        const bool branch_taken_0x1d1984 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d1984) {
            ctx->pc = 0x1D19A8u;
            goto label_1d19a8;
        }
    }
    ctx->pc = 0x1D198Cu;
    // 0x1d198c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1d198cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1d1990: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D1990u;
    {
        const bool branch_taken_0x1d1990 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D1994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1990u;
        // 0x1d1994: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1990) {
            ctx->pc = 0x1D19A8u;
            goto label_1d19a8;
        }
    }
    ctx->pc = 0x1D1998u;
    // 0x1d1998: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1998u;
    {
        const bool branch_taken_0x1d1998 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d1998) {
            ctx->pc = 0x1D19A8u;
            goto label_1d19a8;
        }
    }
    ctx->pc = 0x1D19A0u;
    // 0x1d19a0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D19A0u;
    {
        const bool branch_taken_0x1d19a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D19A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19A0u;
        // 0x1d19a4: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d19a0) {
            ctx->pc = 0x1D19D0u;
            goto label_1d19d0;
        }
    }
    ctx->pc = 0x1D19A8u;
label_1d19a8:
    // 0x1d19a8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1d19a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d19ac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d19acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d19b0: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1d19b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d19b4: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x1d19b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1d19b8: 0x60082a  slt         $at, $v1, $zero
    ctx->pc = 0x1d19b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1d19bc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D19BCu;
    {
        const bool branch_taken_0x1d19bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D19C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19BCu;
        // 0x1d19c0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d19bc) {
            ctx->pc = 0x1D19CCu;
            goto label_1d19cc;
        }
    }
    ctx->pc = 0x1D19C4u;
    // 0x1d19c4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1D19C4u;
    {
        const bool branch_taken_0x1d19c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D19C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19C4u;
        // 0x1d19c8: 0xaca30020  sw          $v1, 0x20($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d19c4) {
            ctx->pc = 0x1D1A24u;
            goto label_1d1a24;
        }
    }
    ctx->pc = 0x1D19CCu;
label_1d19cc:
    // 0x1d19cc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1d19ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1d19d0:
    // 0x1d19d0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d19d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d19d4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d19d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d19d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d19d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d19dc: 0xac650020  sw          $a1, 0x20($v1)
    ctx->pc = 0x1d19dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 5));
    // 0x1d19e0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1d19e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d19e4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d19e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d19e8: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1d19e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d19ec: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x1d19ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1d19f0: 0x20630008  addi        $v1, $v1, 0x8
    ctx->pc = 0x1d19f0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)8, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x1d19f4: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x1d19f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1d19f8: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1D19F8u;
    {
        const bool branch_taken_0x1d19f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d19f8) {
            ctx->pc = 0x1D1A24u;
            goto label_1d1a24;
        }
    }
    ctx->pc = 0x1D1A00u;
    // 0x1d1a00: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1d1a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1d1a04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d1a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d1a08: 0x248434d0  addiu       $a0, $a0, 0x34D0
    ctx->pc = 0x1d1a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13520));
    // 0x1d1a0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d1a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d1a10: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d1a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d1a14: 0x600008  jr          $v1
    ctx->pc = 0x1D1A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D1A1Cu: goto label_1d1a1c;
            case 0x1D1A24u: goto label_1d1a24;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1A14u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D1A1Cu;
label_1d1a1c:
    // 0x1d1a1c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d1a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d1a20: 0xaca30020  sw          $v1, 0x20($a1)
    ctx->pc = 0x1d1a20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
label_1d1a24:
    // 0x1d1a24: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1A2Cu;
}
