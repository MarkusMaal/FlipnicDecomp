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

// Function: FUN_001d2c00
// Address: 0x1d2c00 - 0x1d2df0
void FUN_001d2c00_0x1d2c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d2c00_0x1d2c00");
#endif

    switch (ctx->pc) {
        case 0x1d2c34u: goto label_1d2c34;
        case 0x1d2c5cu: goto label_1d2c5c;
        case 0x1d2d20u: goto label_1d2d20;
        case 0x1d2d30u: goto label_1d2d30;
        case 0x1d2d5cu: goto label_1d2d5c;
        case 0x1d2d6cu: goto label_1d2d6c;
        case 0x1d2d8cu: goto label_1d2d8c;
        case 0x1d2d9cu: goto label_1d2d9c;
        default: break;
    }

    ctx->pc = 0x1d2c00u;

    // 0x1d2c00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d2c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d2c04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d2c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d2c08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d2c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d2c0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d2c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d2c10: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1d2c10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2c14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d2c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d2c18: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1d2c18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2c1c: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1D2C1Cu;
    {
        const bool branch_taken_0x1d2c1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2C1Cu;
        // 0x1d2c20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2c1c) {
            ctx->pc = 0x1D2C4Cu;
            goto label_1d2c4c;
        }
    }
    ctx->pc = 0x1D2C24u;
    // 0x1d2c24: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1d2c24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1d2c28: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d2c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2c2c: 0xc080702  jal         func_201C08
    ctx->pc = 0x1D2C2Cu;
    SET_GPR_U32(ctx, 31, 0x1D2C34u);
    ctx->pc = 0x1D2C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2C2Cu;
    // 0x1d2c30: 0x24840350  addiu       $a0, $a0, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1D2C2Cu, 0x1D2C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2C34u;
label_1d2c34:
    // 0x1d2c34: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2c38: 0xac320390  sw          $s2, 0x390($at)
    ctx->pc = 0x1d2c38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x370390u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x370390u, _value); } while (0);
    // 0x1d2c3c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2c40: 0xac310398  sw          $s1, 0x398($at)
    ctx->pc = 0x1d2c40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x370398u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x370398u, _value); } while (0);
    // 0x1d2c44: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2c48: 0xac2003a0  sw          $zero, 0x3A0($at)
    ctx->pc = 0x1d2c48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3703A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3703A0u, _value); } while (0);
label_1d2c4c:
    // 0x1d2c4c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2c50: 0x8c2503a0  lw          $a1, 0x3A0($at)
    ctx->pc = 0x1d2c50u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3703A0u));
    // 0x1d2c54: 0xc074b7c  jal         func_1D2DF0
    ctx->pc = 0x1D2C54u;
    SET_GPR_U32(ctx, 31, 0x1D2C5Cu);
    ctx->pc = 0x1D2C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2C54u;
    // 0x1d2c58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2DF0u, 0x1D2C54u, 0x1D2C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2C5Cu;
label_1d2c5c:
    // 0x1d2c5c: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x1D2C5Cu;
    {
        const bool branch_taken_0x1d2c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2C5Cu;
        // 0x1d2c60: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2c5c) {
            ctx->pc = 0x1D2DD8u;
            goto label_1d2dd8;
        }
    }
    ctx->pc = 0x1D2C64u;
    // 0x1d2c64: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1d2c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d2c68: 0x8c2703a0  lw          $a3, 0x3A0($at)
    ctx->pc = 0x1d2c68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 928)));
    // 0x1d2c6c: 0x10e60051  beq         $a3, $a2, . + 4 + (0x51 << 2)
    ctx->pc = 0x1D2C6Cu;
    {
        const bool branch_taken_0x1d2c6c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x1D2C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2C6Cu;
        // 0x1d2c70: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2c6c) {
            ctx->pc = 0x1D2DB4u;
            goto label_1d2db4;
        }
    }
    ctx->pc = 0x1D2C74u;
    // 0x1d2c74: 0x10e30043  beq         $a3, $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x1D2C74u;
    {
        const bool branch_taken_0x1d2c74 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D2C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2C74u;
        // 0x1d2c78: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2c74) {
            ctx->pc = 0x1D2D84u;
            goto label_1d2d84;
        }
    }
    ctx->pc = 0x1D2C7Cu;
    // 0x1d2c7c: 0x10e50032  beq         $a3, $a1, . + 4 + (0x32 << 2)
    ctx->pc = 0x1D2C7Cu;
    {
        const bool branch_taken_0x1d2c7c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x1D2C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2C7Cu;
        // 0x1d2c80: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2c7c) {
            ctx->pc = 0x1D2D48u;
            goto label_1d2d48;
        }
    }
    ctx->pc = 0x1D2C84u;
    // 0x1d2c84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d2c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2c88: 0x10e4001f  beq         $a3, $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1D2C88u;
    {
        const bool branch_taken_0x1d2c88 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x1d2c88) {
            ctx->pc = 0x1D2D08u;
            goto label_1d2d08;
        }
    }
    ctx->pc = 0x1D2C90u;
    // 0x1d2c90: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2C90u;
    {
        const bool branch_taken_0x1d2c90 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2c90) {
            ctx->pc = 0x1D2CA0u;
            goto label_1d2ca0;
        }
    }
    ctx->pc = 0x1D2C98u;
    // 0x1d2c98: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1D2C98u;
    {
        const bool branch_taken_0x1d2c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2C98u;
        // 0x1d2c9c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2c98) {
            ctx->pc = 0x1D2DDCu;
            goto label_1d2ddc;
        }
    }
    ctx->pc = 0x1D2CA0u;
label_1d2ca0:
    // 0x1d2ca0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1d2ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d2ca4: 0x10650007  beq         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D2CA4u;
    {
        const bool branch_taken_0x1d2ca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1d2ca4) {
            ctx->pc = 0x1D2CC4u;
            goto label_1d2cc4;
        }
    }
    ctx->pc = 0x1D2CACu;
    // 0x1d2cac: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1d2cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d2cb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d2cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2cb4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d2cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2cb8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d2cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d2cbc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D2CBCu;
    {
        const bool branch_taken_0x1d2cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2CBCu;
        // 0x1d2cc0: 0xac660020  sw          $a2, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2cbc) {
            ctx->pc = 0x1D2CECu;
            goto label_1d2cec;
        }
    }
    ctx->pc = 0x1D2CC4u;
label_1d2cc4:
    // 0x1d2cc4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1d2cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1d2cc8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D2CC8u;
    {
        const bool branch_taken_0x1d2cc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2cc8) {
            ctx->pc = 0x1D2CE8u;
            goto label_1d2ce8;
        }
    }
    ctx->pc = 0x1D2CD0u;
    // 0x1d2cd0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1d2cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d2cd4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d2cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2cd8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d2cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2cdc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d2cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d2ce0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D2CE0u;
    {
        const bool branch_taken_0x1d2ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2CE0u;
        // 0x1d2ce4: 0xac660020  sw          $a2, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ce0) {
            ctx->pc = 0x1D2CECu;
            goto label_1d2cec;
        }
    }
    ctx->pc = 0x1D2CE8u;
label_1d2ce8:
    // 0x1d2ce8: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1d2ce8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1d2cec:
    // 0x1d2cec: 0x1080003a  beqz        $a0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1D2CECu;
    {
        const bool branch_taken_0x1d2cec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2CECu;
        // 0x1d2cf0: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2cec) {
            ctx->pc = 0x1D2DD8u;
            goto label_1d2dd8;
        }
    }
    ctx->pc = 0x1D2CF4u;
    // 0x1d2cf4: 0x8c2303a0  lw          $v1, 0x3A0($at)
    ctx->pc = 0x1d2cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 928)));
    // 0x1d2cf8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2cfc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2d00: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1D2D00u;
    {
        const bool branch_taken_0x1d2d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D00u;
        // 0x1d2d04: 0xac2303a0  sw          $v1, 0x3A0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 928), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2d00) {
            ctx->pc = 0x1D2DD8u;
            goto label_1d2dd8;
        }
    }
    ctx->pc = 0x1D2D08u;
label_1d2d08:
    // 0x1d2d08: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1d2d08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1d2d0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d2d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2d10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d2d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2d14: 0x24c60350  addiu       $a2, $a2, 0x350
    ctx->pc = 0x1d2d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 848));
    // 0x1d2d18: 0xc07e132  jal         func_1F84C8
    ctx->pc = 0x1D2D18u;
    SET_GPR_U32(ctx, 31, 0x1D2D20u);
    ctx->pc = 0x1D2D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2D18u;
    // 0x1d2d1c: 0x24070202  addiu       $a3, $zero, 0x202 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F84C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F84C8u, 0x1D2D18u, 0x1D2D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2D20u;
label_1d2d20:
    // 0x1d2d20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2d24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d2d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2d28: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D2D28u;
    SET_GPR_U32(ctx, 31, 0x1D2D30u);
    ctx->pc = 0x1D2D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2D28u;
    // 0x1d2d2c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D2D28u, 0x1D2D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2D30u;
label_1d2d30:
    // 0x1d2d30: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2d34: 0x8c2303a0  lw          $v1, 0x3A0($at)
    ctx->pc = 0x1d2d34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3703A0u));
    // 0x1d2d38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2d3c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2d40: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1D2D40u;
    {
        const bool branch_taken_0x1d2d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D40u;
        // 0x1d2d44: 0xac2303a0  sw          $v1, 0x3A0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 928), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2d40) {
            ctx->pc = 0x1D2DD8u;
            goto label_1d2dd8;
        }
    }
    ctx->pc = 0x1D2D48u;
label_1d2d48:
    // 0x1d2d48: 0x8c250390  lw          $a1, 0x390($at)
    ctx->pc = 0x1d2d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 912)));
    // 0x1d2d4c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2d50: 0x8c260398  lw          $a2, 0x398($at)
    ctx->pc = 0x1d2d50u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x370398u));
    // 0x1d2d54: 0xc07e258  jal         func_1F8960
    ctx->pc = 0x1D2D54u;
    SET_GPR_U32(ctx, 31, 0x1D2D5Cu);
    ctx->pc = 0x1D2D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2D54u;
    // 0x1d2d58: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8960u, 0x1D2D54u, 0x1D2D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2D5Cu;
label_1d2d5c:
    // 0x1d2d5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2d60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d2d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2d64: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D2D64u;
    SET_GPR_U32(ctx, 31, 0x1D2D6Cu);
    ctx->pc = 0x1D2D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2D64u;
    // 0x1d2d68: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D2D64u, 0x1D2D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2D6Cu;
label_1d2d6c:
    // 0x1d2d6c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2d70: 0x8c2303a0  lw          $v1, 0x3A0($at)
    ctx->pc = 0x1d2d70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3703A0u));
    // 0x1d2d74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2d78: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2d7c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1D2D7Cu;
    {
        const bool branch_taken_0x1d2d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D7Cu;
        // 0x1d2d80: 0xac2303a0  sw          $v1, 0x3A0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 928), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2d7c) {
            ctx->pc = 0x1D2DD8u;
            goto label_1d2dd8;
        }
    }
    ctx->pc = 0x1D2D84u;
label_1d2d84:
    // 0x1d2d84: 0xc07e18a  jal         func_1F8628
    ctx->pc = 0x1D2D84u;
    SET_GPR_U32(ctx, 31, 0x1D2D8Cu);
    ctx->pc = 0x1D2D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2D84u;
    // 0x1d2d88: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8628u, 0x1D2D84u, 0x1D2D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2D8Cu;
label_1d2d8c:
    // 0x1d2d8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2d90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d2d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2d94: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D2D94u;
    SET_GPR_U32(ctx, 31, 0x1D2D9Cu);
    ctx->pc = 0x1D2D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2D94u;
    // 0x1d2d98: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D2D94u, 0x1D2D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2D9Cu;
label_1d2d9c:
    // 0x1d2d9c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2da0: 0x8c2303a0  lw          $v1, 0x3A0($at)
    ctx->pc = 0x1d2da0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3703A0u));
    // 0x1d2da4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2da8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2dac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D2DACu;
    {
        const bool branch_taken_0x1d2dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2DACu;
        // 0x1d2db0: 0xac2303a0  sw          $v1, 0x3A0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 928), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2dac) {
            ctx->pc = 0x1D2DD8u;
            goto label_1d2dd8;
        }
    }
    ctx->pc = 0x1D2DB4u;
label_1d2db4:
    // 0x1d2db4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1d2db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d2db8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d2db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d2dbc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d2dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2dc0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d2dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d2dc4: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x1d2dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
    // 0x1d2dc8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1d2dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d2dcc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d2dccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2dd0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d2dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d2dd4: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x1d2dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
label_1d2dd8:
    // 0x1d2dd8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d2dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1d2ddc:
    // 0x1d2ddc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d2ddcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d2de0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d2de0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2de4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d2de4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2de8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2DE8u;
        // 0x1d2dec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2DF0u;
}
