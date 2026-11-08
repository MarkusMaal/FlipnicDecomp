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

// Function: FUN_001d2960
// Address: 0x1d2960 - 0x1d2b44
void FUN_001d2960_0x1d2960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d2960_0x1d2960");
#endif

    switch (ctx->pc) {
        case 0x1d2994u: goto label_1d2994;
        case 0x1d29bcu: goto label_1d29bc;
        case 0x1d2a74u: goto label_1d2a74;
        case 0x1d2a84u: goto label_1d2a84;
        case 0x1d2ab0u: goto label_1d2ab0;
        case 0x1d2ac0u: goto label_1d2ac0;
        case 0x1d2ae0u: goto label_1d2ae0;
        case 0x1d2af0u: goto label_1d2af0;
        default: break;
    }

    ctx->pc = 0x1d2960u;

    // 0x1d2960: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d2960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d2964: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d2964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d2968: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d2968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d296c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d296cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d2970: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1d2970u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2974: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d2974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d2978: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1d2978u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d297c: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1D297Cu;
    {
        const bool branch_taken_0x1d297c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D297Cu;
        // 0x1d2980: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d297c) {
            ctx->pc = 0x1D29ACu;
            goto label_1d29ac;
        }
    }
    ctx->pc = 0x1D2984u;
    // 0x1d2984: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1d2984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1d2988: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d2988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d298c: 0xc080702  jal         func_201C08
    ctx->pc = 0x1D298Cu;
    SET_GPR_U32(ctx, 31, 0x1D2994u);
    ctx->pc = 0x1D2990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D298Cu;
    // 0x1d2990: 0x248402f0  addiu       $a0, $a0, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1D298Cu, 0x1D2994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2994u;
label_1d2994:
    // 0x1d2994: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2998: 0xac320330  sw          $s2, 0x330($at)
    ctx->pc = 0x1d2998u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x370330u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x370330u, _value); } while (0);
    // 0x1d299c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d299cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d29a0: 0xac310338  sw          $s1, 0x338($at)
    ctx->pc = 0x1d29a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x370338u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x370338u, _value); } while (0);
    // 0x1d29a4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d29a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d29a8: 0xac200340  sw          $zero, 0x340($at)
    ctx->pc = 0x1d29a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x370340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x370340u, _value); } while (0);
label_1d29ac:
    // 0x1d29ac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d29acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d29b0: 0x8c250340  lw          $a1, 0x340($at)
    ctx->pc = 0x1d29b0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x370340u));
    // 0x1d29b4: 0xc074b7c  jal         func_1D2DF0
    ctx->pc = 0x1D29B4u;
    SET_GPR_U32(ctx, 31, 0x1D29BCu);
    ctx->pc = 0x1D29B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29B4u;
    // 0x1d29b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2DF0u, 0x1D29B4u, 0x1D29BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D29BCu;
label_1d29bc:
    // 0x1d29bc: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x1D29BCu;
    {
        const bool branch_taken_0x1d29bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D29C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29BCu;
        // 0x1d29c0: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29bc) {
            ctx->pc = 0x1D2B2Cu;
            goto label_1d2b2c;
        }
    }
    ctx->pc = 0x1D29C4u;
    // 0x1d29c4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d29c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d29c8: 0x8c260340  lw          $a2, 0x340($at)
    ctx->pc = 0x1d29c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 832)));
    // 0x1d29cc: 0x10c5004e  beq         $a2, $a1, . + 4 + (0x4E << 2)
    ctx->pc = 0x1D29CCu;
    {
        const bool branch_taken_0x1d29cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x1D29D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29CCu;
        // 0x1d29d0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29cc) {
            ctx->pc = 0x1D2B08u;
            goto label_1d2b08;
        }
    }
    ctx->pc = 0x1D29D4u;
    // 0x1d29d4: 0x10c30040  beq         $a2, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x1D29D4u;
    {
        const bool branch_taken_0x1d29d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D29D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29D4u;
        // 0x1d29d8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29d4) {
            ctx->pc = 0x1D2AD8u;
            goto label_1d2ad8;
        }
    }
    ctx->pc = 0x1D29DCu;
    // 0x1d29dc: 0x10c4002f  beq         $a2, $a0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1D29DCu;
    {
        const bool branch_taken_0x1d29dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x1D29E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29DCu;
        // 0x1d29e0: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29dc) {
            ctx->pc = 0x1D2A9Cu;
            goto label_1d2a9c;
        }
    }
    ctx->pc = 0x1D29E4u;
    // 0x1d29e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d29e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d29e8: 0x10c7001d  beq         $a2, $a3, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D29E8u;
    {
        const bool branch_taken_0x1d29e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x1d29e8) {
            ctx->pc = 0x1D2A60u;
            goto label_1d2a60;
        }
    }
    ctx->pc = 0x1D29F0u;
    // 0x1d29f0: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D29F0u;
    {
        const bool branch_taken_0x1d29f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d29f0) {
            ctx->pc = 0x1D2A00u;
            goto label_1d2a00;
        }
    }
    ctx->pc = 0x1D29F8u;
    // 0x1d29f8: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1D29F8u;
    {
        const bool branch_taken_0x1d29f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D29FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29F8u;
        // 0x1d29fc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29f8) {
            ctx->pc = 0x1D2B30u;
            goto label_1d2b30;
        }
    }
    ctx->pc = 0x1D2A00u;
label_1d2a00:
    // 0x1d2a00: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1d2a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d2a04: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D2A04u;
    {
        const bool branch_taken_0x1d2a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1d2a04) {
            ctx->pc = 0x1D2A24u;
            goto label_1d2a24;
        }
    }
    ctx->pc = 0x1D2A0Cu;
    // 0x1d2a0c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1d2a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d2a10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d2a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a14: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d2a14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2a18: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d2a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d2a1c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D2A1Cu;
    {
        const bool branch_taken_0x1d2a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A1Cu;
        // 0x1d2a20: 0xac650020  sw          $a1, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a1c) {
            ctx->pc = 0x1D2A44u;
            goto label_1d2a44;
        }
    }
    ctx->pc = 0x1D2A24u;
label_1d2a24:
    // 0x1d2a24: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1d2a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1d2a28: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D2A28u;
    {
        const bool branch_taken_0x1d2a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A28u;
        // 0x1d2a2c: 0x30e400ff  andi        $a0, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a28) {
            ctx->pc = 0x1D2A44u;
            goto label_1d2a44;
        }
    }
    ctx->pc = 0x1D2A30u;
    // 0x1d2a30: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1d2a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d2a34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d2a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a38: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d2a38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2a3c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d2a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d2a40: 0xac650020  sw          $a1, 0x20($v1)
    ctx->pc = 0x1d2a40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 5));
label_1d2a44:
    // 0x1d2a44: 0x10800039  beqz        $a0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1D2A44u;
    {
        const bool branch_taken_0x1d2a44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A44u;
        // 0x1d2a48: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a44) {
            ctx->pc = 0x1D2B2Cu;
            goto label_1d2b2c;
        }
    }
    ctx->pc = 0x1D2A4Cu;
    // 0x1d2a4c: 0x8c230340  lw          $v1, 0x340($at)
    ctx->pc = 0x1d2a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 832)));
    // 0x1d2a50: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2a54: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2a58: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1D2A58u;
    {
        const bool branch_taken_0x1d2a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A58u;
        // 0x1d2a5c: 0xac230340  sw          $v1, 0x340($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 832), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a58) {
            ctx->pc = 0x1D2B2Cu;
            goto label_1d2b2c;
        }
    }
    ctx->pc = 0x1D2A60u;
label_1d2a60:
    // 0x1d2a60: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1d2a60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1d2a64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d2a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d2a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a6c: 0xc07e132  jal         func_1F84C8
    ctx->pc = 0x1D2A6Cu;
    SET_GPR_U32(ctx, 31, 0x1D2A74u);
    ctx->pc = 0x1D2A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2A6Cu;
    // 0x1d2a70: 0x24c602f0  addiu       $a2, $a2, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F84C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F84C8u, 0x1D2A6Cu, 0x1D2A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2A74u;
label_1d2a74:
    // 0x1d2a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d2a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a7c: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D2A7Cu;
    SET_GPR_U32(ctx, 31, 0x1D2A84u);
    ctx->pc = 0x1D2A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2A7Cu;
    // 0x1d2a80: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D2A7Cu, 0x1D2A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2A84u;
label_1d2a84:
    // 0x1d2a84: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2a88: 0x8c230340  lw          $v1, 0x340($at)
    ctx->pc = 0x1d2a88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x370340u));
    // 0x1d2a8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2a90: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2a94: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1D2A94u;
    {
        const bool branch_taken_0x1d2a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A94u;
        // 0x1d2a98: 0xac230340  sw          $v1, 0x340($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 832), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a94) {
            ctx->pc = 0x1D2B2Cu;
            goto label_1d2b2c;
        }
    }
    ctx->pc = 0x1D2A9Cu;
label_1d2a9c:
    // 0x1d2a9c: 0x8c250330  lw          $a1, 0x330($at)
    ctx->pc = 0x1d2a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 816)));
    // 0x1d2aa0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2aa4: 0x8c260338  lw          $a2, 0x338($at)
    ctx->pc = 0x1d2aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x370338u));
    // 0x1d2aa8: 0xc07e212  jal         func_1F8848
    ctx->pc = 0x1D2AA8u;
    SET_GPR_U32(ctx, 31, 0x1D2AB0u);
    ctx->pc = 0x1D2AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2AA8u;
    // 0x1d2aac: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8848u, 0x1D2AA8u, 0x1D2AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2AB0u;
label_1d2ab0:
    // 0x1d2ab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2ab4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d2ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2ab8: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D2AB8u;
    SET_GPR_U32(ctx, 31, 0x1D2AC0u);
    ctx->pc = 0x1D2ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2AB8u;
    // 0x1d2abc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D2AB8u, 0x1D2AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2AC0u;
label_1d2ac0:
    // 0x1d2ac0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2ac4: 0x8c230340  lw          $v1, 0x340($at)
    ctx->pc = 0x1d2ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x370340u));
    // 0x1d2ac8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2acc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2ad0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1D2AD0u;
    {
        const bool branch_taken_0x1d2ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2AD0u;
        // 0x1d2ad4: 0xac230340  sw          $v1, 0x340($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 832), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ad0) {
            ctx->pc = 0x1D2B2Cu;
            goto label_1d2b2c;
        }
    }
    ctx->pc = 0x1D2AD8u;
label_1d2ad8:
    // 0x1d2ad8: 0xc07e18a  jal         func_1F8628
    ctx->pc = 0x1D2AD8u;
    SET_GPR_U32(ctx, 31, 0x1D2AE0u);
    ctx->pc = 0x1D2ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2AD8u;
    // 0x1d2adc: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8628u, 0x1D2AD8u, 0x1D2AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2AE0u;
label_1d2ae0:
    // 0x1d2ae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2ae4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d2ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2ae8: 0xc074638  jal         func_1D18E0
    ctx->pc = 0x1D2AE8u;
    SET_GPR_U32(ctx, 31, 0x1D2AF0u);
    ctx->pc = 0x1D2AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2AE8u;
    // 0x1d2aec: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18E0u, 0x1D2AE8u, 0x1D2AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2AF0u;
label_1d2af0:
    // 0x1d2af0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2af4: 0x8c230340  lw          $v1, 0x340($at)
    ctx->pc = 0x1d2af4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x370340u));
    // 0x1d2af8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2afc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d2afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d2b00: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D2B00u;
    {
        const bool branch_taken_0x1d2b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2B00u;
        // 0x1d2b04: 0xac230340  sw          $v1, 0x340($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 832), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b00) {
            ctx->pc = 0x1D2B2Cu;
            goto label_1d2b2c;
        }
    }
    ctx->pc = 0x1D2B08u;
label_1d2b08:
    // 0x1d2b08: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1d2b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d2b0c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d2b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d2b10: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d2b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2b14: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d2b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d2b18: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x1d2b18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
    // 0x1d2b1c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1d2b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d2b20: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d2b20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2b24: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1d2b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1d2b28: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x1d2b28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
label_1d2b2c:
    // 0x1d2b2c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d2b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1d2b30:
    // 0x1d2b30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d2b30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d2b34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d2b34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2b38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d2b38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2B3Cu;
        // 0x1d2b40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2B44u;
}
