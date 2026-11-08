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

// Function: FUN_001d1e40
// Address: 0x1d1e40 - 0x1d1f64
void FUN_001d1e40_0x1d1e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d1e40_0x1d1e40");
#endif

    switch (ctx->pc) {
        case 0x1d1e88u: goto label_1d1e88;
        case 0x1d1ea0u: goto label_1d1ea0;
        case 0x1d1ee4u: goto label_1d1ee4;
        case 0x1d1f0cu: goto label_1d1f0c;
        case 0x1d1f1cu: goto label_1d1f1c;
        default: break;
    }

    ctx->pc = 0x1d1e40u;

    // 0x1d1e40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d1e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d1e44: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d1e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d1e48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d1e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d1e4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d1e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d1e50: 0x8022fe50  lb          $v0, -0x1B0($at)
    ctx->pc = 0x1d1e50u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FE50u));
    // 0x1d1e54: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D1E54u;
    {
        const bool branch_taken_0x1d1e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1E54u;
        // 0x1d1e58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1e54) {
            ctx->pc = 0x1D1E70u;
            goto label_1d1e70;
        }
    }
    ctx->pc = 0x1D1E5Cu;
    // 0x1d1e5c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d1e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d1e60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1e64: 0xac20fe48  sw          $zero, -0x1B8($at)
    ctx->pc = 0x1d1e64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36FE48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FE48u, _value); } while (0);
    // 0x1d1e68: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d1e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d1e6c: 0xa022fe50  sb          $v0, -0x1B0($at)
    ctx->pc = 0x1d1e6cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FE50u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FE50u, _value); } while (0);
label_1d1e70:
    // 0x1d1e70: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D1E70u;
    {
        const bool branch_taken_0x1d1e70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1e70) {
            ctx->pc = 0x1D1E90u;
            goto label_1d1e90;
        }
    }
    ctx->pc = 0x1D1E78u;
    // 0x1d1e78: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1d1e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1d1e7c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d1e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1e80: 0xc080702  jal         func_201C08
    ctx->pc = 0x1D1E80u;
    SET_GPR_U32(ctx, 31, 0x1D1E88u);
    ctx->pc = 0x1D1E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1E80u;
    // 0x1d1e84: 0x2484fe00  addiu       $a0, $a0, -0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1D1E80u, 0x1D1E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1E88u;
label_1d1e88:
    // 0x1d1e88: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d1e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d1e8c: 0xac20fe40  sw          $zero, -0x1C0($at)
    ctx->pc = 0x1d1e8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36FE40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FE40u, _value); } while (0);
label_1d1e90:
    // 0x1d1e90: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d1e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d1e94: 0x8c25fe40  lw          $a1, -0x1C0($at)
    ctx->pc = 0x1d1e94u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x36FE40u));
    // 0x1d1e98: 0xc074b7c  jal         func_1D2DF0
    ctx->pc = 0x1D1E98u;
    SET_GPR_U32(ctx, 31, 0x1D1EA0u);
    ctx->pc = 0x1D1E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1E98u;
    // 0x1d1e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2DF0u, 0x1D1E98u, 0x1D1EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1EA0u;
label_1d1ea0:
    // 0x1d1ea0: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1D1EA0u;
    {
        const bool branch_taken_0x1d1ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1ea0) {
            ctx->pc = 0x1D1F54u;
            goto label_1d1f54;
        }
    }
    ctx->pc = 0x1D1EA8u;
    // 0x1d1ea8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d1ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d1eac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d1eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d1eb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d1eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1eb4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d1eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1d1eb8: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1d1eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1d1ebc: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1d1ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1d1ec0: 0x8c24fe40  lw          $a0, -0x1C0($at)
    ctx->pc = 0x1d1ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966848)));
    // 0x1d1ec4: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D1EC4u;
    {
        const bool branch_taken_0x1d1ec4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d1ec4) {
            ctx->pc = 0x1D1F2Cu;
            goto label_1d1f2c;
        }
    }
    ctx->pc = 0x1D1ECCu;
    // 0x1d1ecc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1ECCu;
    {
        const bool branch_taken_0x1d1ecc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1ecc) {
            ctx->pc = 0x1D1EDCu;
            goto label_1d1edc;
        }
    }
    ctx->pc = 0x1D1ED4u;
    // 0x1d1ed4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1D1ED4u;
    {
        const bool branch_taken_0x1d1ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1ED4u;
        // 0x1d1ed8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ed4) {
            ctx->pc = 0x1D1F58u;
            goto label_1d1f58;
        }
    }
    ctx->pc = 0x1D1EDCu;
label_1d1edc:
    // 0x1d1edc: 0xc0749d0  jal         func_1D2740
    ctx->pc = 0x1D1EDCu;
    SET_GPR_U32(ctx, 31, 0x1D1EE4u);
    ctx->pc = 0x1D1EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1EDCu;
    // 0x1d1ee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2740u, 0x1D1EDCu, 0x1D1EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1EE4u;
label_1d1ee4:
    // 0x1d1ee4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D1EE4u;
    {
        const bool branch_taken_0x1d1ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1EE4u;
        // 0x1d1ee8: 0x3c060037  lui         $a2, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1ee4) {
            ctx->pc = 0x1D1F54u;
            goto label_1d1f54;
        }
    }
    ctx->pc = 0x1D1EECu;
    // 0x1d1eec: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1d1eecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
    // 0x1d1ef0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d1ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ef4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ef8: 0x24c6fe00  addiu       $a2, $a2, -0x200
    ctx->pc = 0x1d1ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966784));
    // 0x1d1efc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d1efcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1f00: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1d1f00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1f04: 0xc07e39c  jal         func_1F8E70
    ctx->pc = 0x1D1F04u;
    SET_GPR_U32(ctx, 31, 0x1D1F0Cu);
    ctx->pc = 0x1D1F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1F04u;
    // 0x1d1f08: 0x2529fdc0  addiu       $t1, $t1, -0x240 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8E70u, 0x1D1F04u, 0x1D1F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1F0Cu;
label_1d1f0c:
    // 0x1d1f0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1f10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d1f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1f14: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D1F14u;
    SET_GPR_U32(ctx, 31, 0x1D1F1Cu);
    ctx->pc = 0x1D1F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1F14u;
    // 0x1d1f18: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D1F14u, 0x1D1F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1F1Cu;
label_1d1f1c:
    // 0x1d1f1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d1f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1f20: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d1f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d1f24: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D1F24u;
    {
        const bool branch_taken_0x1d1f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F24u;
        // 0x1d1f28: 0xac23fe40  sw          $v1, -0x1C0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966848), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f24) {
            ctx->pc = 0x1D1F54u;
            goto label_1d1f54;
        }
    }
    ctx->pc = 0x1D1F2Cu;
label_1d1f2c:
    // 0x1d1f2c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1d1f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d1f30: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d1f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d1f34: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d1f34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d1f38: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d1f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d1f3c: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x1d1f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
    // 0x1d1f40: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1d1f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d1f44: 0x8e0400f4  lw          $a0, 0xF4($s0)
    ctx->pc = 0x1d1f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x1d1f48: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d1f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d1f4c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d1f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d1f50: 0xac640024  sw          $a0, 0x24($v1)
    ctx->pc = 0x1d1f50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 4));
label_1d1f54:
    // 0x1d1f54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d1f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1f58:
    // 0x1d1f58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1f58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F5Cu;
        // 0x1d1f60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1F64u;
}
