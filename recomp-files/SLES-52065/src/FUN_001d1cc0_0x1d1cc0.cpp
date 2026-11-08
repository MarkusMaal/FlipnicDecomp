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

// Function: FUN_001d1cc0
// Address: 0x1d1cc0 - 0x1d1de8
void FUN_001d1cc0_0x1d1cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d1cc0_0x1d1cc0");
#endif

    switch (ctx->pc) {
        case 0x1d1d08u: goto label_1d1d08;
        case 0x1d1d20u: goto label_1d1d20;
        case 0x1d1d64u: goto label_1d1d64;
        case 0x1d1d8cu: goto label_1d1d8c;
        case 0x1d1d9cu: goto label_1d1d9c;
        default: break;
    }

    ctx->pc = 0x1d1cc0u;

    // 0x1d1cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d1cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d1cc4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d1cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d1cc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d1cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d1ccc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d1cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d1cd0: 0x8022fd90  lb          $v0, -0x270($at)
    ctx->pc = 0x1d1cd0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FD90u));
    // 0x1d1cd4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D1CD4u;
    {
        const bool branch_taken_0x1d1cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1CD4u;
        // 0x1d1cd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1cd4) {
            ctx->pc = 0x1D1CF0u;
            goto label_1d1cf0;
        }
    }
    ctx->pc = 0x1D1CDCu;
    // 0x1d1cdc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d1cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d1ce0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1ce4: 0xac20fd88  sw          $zero, -0x278($at)
    ctx->pc = 0x1d1ce4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36FD88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FD88u, _value); } while (0);
    // 0x1d1ce8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d1ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d1cec: 0xa022fd90  sb          $v0, -0x270($at)
    ctx->pc = 0x1d1cecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FD90u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FD90u, _value); } while (0);
label_1d1cf0:
    // 0x1d1cf0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D1CF0u;
    {
        const bool branch_taken_0x1d1cf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1cf0) {
            ctx->pc = 0x1D1D10u;
            goto label_1d1d10;
        }
    }
    ctx->pc = 0x1D1CF8u;
    // 0x1d1cf8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1d1cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1d1cfc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d1cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1d00: 0xc080702  jal         func_201C08
    ctx->pc = 0x1D1D00u;
    SET_GPR_U32(ctx, 31, 0x1D1D08u);
    ctx->pc = 0x1D1D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1D00u;
    // 0x1d1d04: 0x2484fd40  addiu       $a0, $a0, -0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1D1D00u, 0x1D1D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1D08u;
label_1d1d08:
    // 0x1d1d08: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d1d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d1d0c: 0xac20fd80  sw          $zero, -0x280($at)
    ctx->pc = 0x1d1d0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36FD80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FD80u, _value); } while (0);
label_1d1d10:
    // 0x1d1d10: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d1d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d1d14: 0x8c25fd80  lw          $a1, -0x280($at)
    ctx->pc = 0x1d1d14u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x36FD80u));
    // 0x1d1d18: 0xc074b7c  jal         func_1D2DF0
    ctx->pc = 0x1D1D18u;
    SET_GPR_U32(ctx, 31, 0x1D1D20u);
    ctx->pc = 0x1D1D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1D18u;
    // 0x1d1d1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2DF0u, 0x1D1D18u, 0x1D1D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1D20u;
label_1d1d20:
    // 0x1d1d20: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1D1D20u;
    {
        const bool branch_taken_0x1d1d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1d20) {
            ctx->pc = 0x1D1DD8u;
            goto label_1d1dd8;
        }
    }
    ctx->pc = 0x1D1D28u;
    // 0x1d1d28: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d1d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d1d2c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d1d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d1d30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d1d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1d34: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d1d34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1d1d38: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1d1d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1d1d3c: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1d1d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1d1d40: 0x8c24fd80  lw          $a0, -0x280($at)
    ctx->pc = 0x1d1d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966656)));
    // 0x1d1d44: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D1D44u;
    {
        const bool branch_taken_0x1d1d44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d1d44) {
            ctx->pc = 0x1D1DACu;
            goto label_1d1dac;
        }
    }
    ctx->pc = 0x1D1D4Cu;
    // 0x1d1d4c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1D4Cu;
    {
        const bool branch_taken_0x1d1d4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1d4c) {
            ctx->pc = 0x1D1D5Cu;
            goto label_1d1d5c;
        }
    }
    ctx->pc = 0x1D1D54u;
    // 0x1d1d54: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1D1D54u;
    {
        const bool branch_taken_0x1d1d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D54u;
        // 0x1d1d58: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d54) {
            ctx->pc = 0x1D1DDCu;
            goto label_1d1ddc;
        }
    }
    ctx->pc = 0x1D1D5Cu;
label_1d1d5c:
    // 0x1d1d5c: 0xc0749d0  jal         func_1D2740
    ctx->pc = 0x1D1D5Cu;
    SET_GPR_U32(ctx, 31, 0x1D1D64u);
    ctx->pc = 0x1D1D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1D5Cu;
    // 0x1d1d60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2740u, 0x1D1D5Cu, 0x1D1D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1D64u;
label_1d1d64:
    // 0x1d1d64: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D1D64u;
    {
        const bool branch_taken_0x1d1d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1D64u;
        // 0x1d1d68: 0x3c060037  lui         $a2, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1d64) {
            ctx->pc = 0x1D1DD8u;
            goto label_1d1dd8;
        }
    }
    ctx->pc = 0x1D1D6Cu;
    // 0x1d1d6c: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1d1d6cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
    // 0x1d1d70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d1d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1d74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1d78: 0x24c6fd40  addiu       $a2, $a2, -0x2C0
    ctx->pc = 0x1d1d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966592));
    // 0x1d1d7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d1d7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1d80: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d1d80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1d84: 0xc07e39c  jal         func_1F8E70
    ctx->pc = 0x1D1D84u;
    SET_GPR_U32(ctx, 31, 0x1D1D8Cu);
    ctx->pc = 0x1D1D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1D84u;
    // 0x1d1d88: 0x2529fd00  addiu       $t1, $t1, -0x300 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8E70u, 0x1D1D84u, 0x1D1D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1D8Cu;
label_1d1d8c:
    // 0x1d1d8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1d90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d1d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1d94: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D1D94u;
    SET_GPR_U32(ctx, 31, 0x1D1D9Cu);
    ctx->pc = 0x1D1D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1D94u;
    // 0x1d1d98: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D1D94u, 0x1D1D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1D9Cu;
label_1d1d9c:
    // 0x1d1d9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d1d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1da0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d1da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d1da4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1D1DA4u;
    {
        const bool branch_taken_0x1d1da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1DA4u;
        // 0x1d1da8: 0xac23fd80  sw          $v1, -0x280($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966656), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1da4) {
            ctx->pc = 0x1D1DD8u;
            goto label_1d1dd8;
        }
    }
    ctx->pc = 0x1D1DACu;
label_1d1dac:
    // 0x1d1dac: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1d1dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d1db0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d1db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d1db4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d1db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d1db8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d1db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d1dbc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d1dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d1dc0: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x1d1dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
    // 0x1d1dc4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1d1dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d1dc8: 0x8c24fd10  lw          $a0, -0x2F0($at)
    ctx->pc = 0x1d1dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966544)));
    // 0x1d1dcc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d1dccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d1dd0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d1dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d1dd4: 0xac640024  sw          $a0, 0x24($v1)
    ctx->pc = 0x1d1dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 4));
label_1d1dd8:
    // 0x1d1dd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d1dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1ddc:
    // 0x1d1ddc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1ddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1de0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1DE0u;
        // 0x1d1de4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1DE8u;
}
