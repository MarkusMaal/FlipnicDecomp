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

// Function: FUN_0011a9b0
// Address: 0x11a9b0 - 0x11ab8c
void FUN_0011a9b0_0x11a9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011a9b0_0x11a9b0");
#endif

    switch (ctx->pc) {
        case 0x11aa14u: goto label_11aa14;
        case 0x11aa24u: goto label_11aa24;
        case 0x11aa3cu: goto label_11aa3c;
        case 0x11aa4cu: goto label_11aa4c;
        case 0x11aa60u: goto label_11aa60;
        case 0x11aaa0u: goto label_11aaa0;
        case 0x11aab0u: goto label_11aab0;
        case 0x11aad8u: goto label_11aad8;
        case 0x11aae0u: goto label_11aae0;
        case 0x11aae8u: goto label_11aae8;
        case 0x11ab00u: goto label_11ab00;
        case 0x11ab08u: goto label_11ab08;
        case 0x11ab14u: goto label_11ab14;
        case 0x11ab1cu: goto label_11ab1c;
        case 0x11ab28u: goto label_11ab28;
        case 0x11ab34u: goto label_11ab34;
        case 0x11ab48u: goto label_11ab48;
        case 0x11ab70u: goto label_11ab70;
        default: break;
    }

    ctx->pc = 0x11a9b0u;

    // 0x11a9b0: 0x27bdfce0  addiu       $sp, $sp, -0x320
    ctx->pc = 0x11a9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966496));
    // 0x11a9b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11a9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11a9b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11a9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x11a9bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11a9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11a9c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11a9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11a9c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11a9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11a9c8: 0x8f8383b8  lw          $v1, -0x7C48($gp)
    ctx->pc = 0x11a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935480)));
    // 0x11a9cc: 0x14600068  bnez        $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x11A9CCu;
    {
        const bool branch_taken_0x11a9cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A9CCu;
        // 0x11a9d0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a9cc) {
            ctx->pc = 0x11AB70u;
            goto label_11ab70;
        }
    }
    ctx->pc = 0x11A9D4u;
    // 0x11a9d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11a9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a9d8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x11a9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11a9dc: 0xaf8483b8  sw          $a0, -0x7C48($gp)
    ctx->pc = 0x11a9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935480), GPR_U32(ctx, 4));
    // 0x11a9e0: 0x8e230534  lw          $v1, 0x534($s1)
    ctx->pc = 0x11a9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1332)));
    // 0x11a9e4: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x11A9E4u;
    {
        const bool branch_taken_0x11a9e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11A9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A9E4u;
        // 0x11a9e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a9e4) {
            ctx->pc = 0x11AA58u;
            goto label_11aa58;
        }
    }
    ctx->pc = 0x11A9ECu;
    // 0x11a9ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11a9f0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x11A9F0u;
    {
        const bool branch_taken_0x11a9f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A9F0u;
        // 0x11a9f4: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a9f0) {
            ctx->pc = 0x11AA30u;
            goto label_11aa30;
        }
    }
    ctx->pc = 0x11A9F8u;
    // 0x11a9f8: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11A9F8u;
    {
        const bool branch_taken_0x11a9f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x11A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A9F8u;
        // 0x11a9fc: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a9f8) {
            ctx->pc = 0x11AA08u;
            goto label_11aa08;
        }
    }
    ctx->pc = 0x11AA00u;
    // 0x11aa00: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x11AA00u;
    {
        const bool branch_taken_0x11aa00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AA00u;
        // 0x11aa04: 0x8e230534  lw          $v1, 0x534($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aa00) {
            ctx->pc = 0x11AAB8u;
            goto label_11aab8;
        }
    }
    ctx->pc = 0x11AA08u;
label_11aa08:
    // 0x11aa08: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x11aa08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11aa0c: 0xc080702  jal         func_201C08
    ctx->pc = 0x11AA0Cu;
    SET_GPR_U32(ctx, 31, 0x11AA14u);
    ctx->pc = 0x11AA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AA0Cu;
    // 0x11aa10: 0x24a5e6a0  addiu       $a1, $a1, -0x1960 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11AA0Cu, 0x11AA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AA14u;
label_11aa14:
    // 0x11aa14: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x11aa14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x11aa18: 0x27a40318  addiu       $a0, $sp, 0x318
    ctx->pc = 0x11aa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 792));
    // 0x11aa1c: 0xc080702  jal         func_201C08
    ctx->pc = 0x11AA1Cu;
    SET_GPR_U32(ctx, 31, 0x11AA24u);
    ctx->pc = 0x11AA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AA1Cu;
    // 0x11aa20: 0x24a5e6b8  addiu       $a1, $a1, -0x1948 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11AA1Cu, 0x11AA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AA24u;
label_11aa24:
    // 0x11aa24: 0x3c100021  lui         $s0, 0x21
    ctx->pc = 0x11aa24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)33 << 16));
    // 0x11aa28: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x11AA28u;
    {
        const bool branch_taken_0x11aa28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AA28u;
        // 0x11aa2c: 0x26100b00  addiu       $s0, $s0, 0xB00 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aa28) {
            ctx->pc = 0x11AAB4u;
            goto label_11aab4;
        }
    }
    ctx->pc = 0x11AA30u;
label_11aa30:
    // 0x11aa30: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x11aa30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11aa34: 0xc080702  jal         func_201C08
    ctx->pc = 0x11AA34u;
    SET_GPR_U32(ctx, 31, 0x11AA3Cu);
    ctx->pc = 0x11AA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AA34u;
    // 0x11aa38: 0x24a5e6e0  addiu       $a1, $a1, -0x1920 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11AA34u, 0x11AA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AA3Cu;
label_11aa3c:
    // 0x11aa3c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x11aa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x11aa40: 0x27a40318  addiu       $a0, $sp, 0x318
    ctx->pc = 0x11aa40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 792));
    // 0x11aa44: 0xc080702  jal         func_201C08
    ctx->pc = 0x11AA44u;
    SET_GPR_U32(ctx, 31, 0x11AA4Cu);
    ctx->pc = 0x11AA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AA44u;
    // 0x11aa48: 0x24a5e6f8  addiu       $a1, $a1, -0x1908 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11AA44u, 0x11AA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AA4Cu;
label_11aa4c:
    // 0x11aa4c: 0x3c100021  lui         $s0, 0x21
    ctx->pc = 0x11aa4cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)33 << 16));
    // 0x11aa50: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x11AA50u;
    {
        const bool branch_taken_0x11aa50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AA50u;
        // 0x11aa54: 0x26100b00  addiu       $s0, $s0, 0xB00 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aa50) {
            ctx->pc = 0x11AAB4u;
            goto label_11aab4;
        }
    }
    ctx->pc = 0x11AA58u;
label_11aa58:
    // 0x11aa58: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x11aa58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x11aa5c: 0x2262821  addu        $a1, $s1, $a2
    ctx->pc = 0x11aa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_11aa60:
    // 0x11aa60: 0xdd2021  addu        $a0, $a2, $sp
    ctx->pc = 0x11aa60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x11aa64: 0x80a20104  lb          $v0, 0x104($a1)
    ctx->pc = 0x11aa64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x11aa68: 0xa0820050  sb          $v0, 0x50($a0)
    ctx->pc = 0x11aa68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 2));
    // 0x11aa6c: 0x80a20104  lb          $v0, 0x104($a1)
    ctx->pc = 0x11aa6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x11aa70: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11AA70u;
    {
        const bool branch_taken_0x11aa70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11aa70) {
            ctx->pc = 0x11AA80u;
            goto label_11aa80;
        }
    }
    ctx->pc = 0x11AA78u;
    // 0x11aa78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11AA78u;
    {
        const bool branch_taken_0x11aa78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AA78u;
        // 0x11aa7c: 0xa0800051  sb          $zero, 0x51($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 81), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aa78) {
            ctx->pc = 0x11AA90u;
            goto label_11aa90;
        }
    }
    ctx->pc = 0x11AA80u;
label_11aa80:
    // 0x11aa80: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11aa80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11aa84: 0x28c20160  slti        $v0, $a2, 0x160
    ctx->pc = 0x11aa84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)352) ? 1 : 0);
    // 0x11aa88: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x11AA88u;
    {
        const bool branch_taken_0x11aa88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AA88u;
        // 0x11aa8c: 0x2262821  addu        $a1, $s1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aa88) {
            ctx->pc = 0x11AA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11aa60;
        }
    }
    ctx->pc = 0x11AA90u;
label_11aa90:
    // 0x11aa90: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x11aa90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x11aa94: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x11aa94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11aa98: 0xc080664  jal         func_201990
    ctx->pc = 0x11AA98u;
    SET_GPR_U32(ctx, 31, 0x11AAA0u);
    ctx->pc = 0x11AA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AA98u;
    // 0x11aa9c: 0x24a5e700  addiu       $a1, $a1, -0x1900 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11AA98u, 0x11AAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AAA0u;
label_11aaa0:
    // 0x11aaa0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x11aaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x11aaa4: 0x27a40318  addiu       $a0, $sp, 0x318
    ctx->pc = 0x11aaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 792));
    // 0x11aaa8: 0xc080702  jal         func_201C08
    ctx->pc = 0x11AAA8u;
    SET_GPR_U32(ctx, 31, 0x11AAB0u);
    ctx->pc = 0x11AAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AAA8u;
    // 0x11aaac: 0x24a5e6f8  addiu       $a1, $a1, -0x1908 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11AAA8u, 0x11AAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AAB0u;
label_11aab0:
    // 0x11aab0: 0x27908030  addiu       $s0, $gp, -0x7FD0
    ctx->pc = 0x11aab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934576));
label_11aab4:
    // 0x11aab4: 0x8e230534  lw          $v1, 0x534($s1)
    ctx->pc = 0x11aab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1332)));
label_11aab8:
    // 0x11aab8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11aabc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11AABCu;
    {
        const bool branch_taken_0x11aabc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AABCu;
        // 0x11aac0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aabc) {
            ctx->pc = 0x11AAD0u;
            goto label_11aad0;
        }
    }
    ctx->pc = 0x11AAC4u;
    // 0x11aac4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11aac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11aac8: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11AAC8u;
    {
        const bool branch_taken_0x11aac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AAC8u;
        // 0x11aacc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aac8) {
            ctx->pc = 0x11AB0Cu;
            goto label_11ab0c;
        }
    }
    ctx->pc = 0x11AAD0u;
label_11aad0:
    // 0x11aad0: 0xc07b79a  jal         func_1EDE68
    ctx->pc = 0x11AAD0u;
    SET_GPR_U32(ctx, 31, 0x11AAD8u);
    ctx->pc = 0x1EDE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDE68u, 0x11AAD0u, 0x11AAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AAD8u;
label_11aad8:
    // 0x11aad8: 0xc07cb16  jal         func_1F2C58
    ctx->pc = 0x11AAD8u;
    SET_GPR_U32(ctx, 31, 0x11AAE0u);
    ctx->pc = 0x1F2C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2C58u, 0x11AAD8u, 0x11AAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AAE0u;
label_11aae0:
    // 0x11aae0: 0xc07bde2  jal         func_1EF788
    ctx->pc = 0x11AAE0u;
    SET_GPR_U32(ctx, 31, 0x11AAE8u);
    ctx->pc = 0x1EF788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF788u, 0x11AAE0u, 0x11AAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AAE8u;
label_11aae8:
    // 0x11aae8: 0x8e230534  lw          $v1, 0x534($s1)
    ctx->pc = 0x11aae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1332)));
    // 0x11aaec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11aaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11aaf0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11AAF0u;
    {
        const bool branch_taken_0x11aaf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11AAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AAF0u;
        // 0x11aaf4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aaf0) {
            ctx->pc = 0x11AB08u;
            goto label_11ab08;
        }
    }
    ctx->pc = 0x11AAF8u;
    // 0x11aaf8: 0xc07dea4  jal         func_1F7A90
    ctx->pc = 0x11AAF8u;
    SET_GPR_U32(ctx, 31, 0x11AB00u);
    ctx->pc = 0x1F7A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7A90u, 0x11AAF8u, 0x11AB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AB00u;
label_11ab00:
    // 0x11ab00: 0xc07dfd6  jal         func_1F7F58
    ctx->pc = 0x11AB00u;
    SET_GPR_U32(ctx, 31, 0x11AB08u);
    ctx->pc = 0x11AB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AB00u;
    // 0x11ab04: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7F58u, 0x11AB00u, 0x11AB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AB08u;
label_11ab08:
    // 0x11ab08: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x11ab08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11ab0c:
    // 0x11ab0c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x11AB0Cu;
    {
        const bool branch_taken_0x11ab0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB0Cu;
        // 0x11ab10: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab0c) {
            ctx->pc = 0x11AB58u;
            goto label_11ab58;
        }
    }
    ctx->pc = 0x11AB14u;
label_11ab14:
    // 0x11ab14: 0xc080702  jal         func_201C08
    ctx->pc = 0x11AB14u;
    SET_GPR_U32(ctx, 31, 0x11AB1Cu);
    ctx->pc = 0x11AB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AB14u;
    // 0x11ab18: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x11AB14u, 0x11AB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AB1Cu;
label_11ab1c:
    // 0x11ab1c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x11ab1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11ab20: 0xc080664  jal         func_201990
    ctx->pc = 0x11AB20u;
    SET_GPR_U32(ctx, 31, 0x11AB28u);
    ctx->pc = 0x11AB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AB20u;
    // 0x11ab24: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11AB20u, 0x11AB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AB28u;
label_11ab28:
    // 0x11ab28: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x11ab28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x11ab2c: 0xc080664  jal         func_201990
    ctx->pc = 0x11AB2Cu;
    SET_GPR_U32(ctx, 31, 0x11AB34u);
    ctx->pc = 0x11AB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AB2Cu;
    // 0x11ab30: 0x27a50318  addiu       $a1, $sp, 0x318 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x11AB2Cu, 0x11AB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AB34u;
label_11ab34:
    // 0x11ab34: 0x0  nop
    ctx->pc = 0x11ab34u;
    // NOP
    // 0x11ab38: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x11ab38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x11ab3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11ab3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab40: 0xc07cd32  jal         func_1F34C8
    ctx->pc = 0x11AB40u;
    SET_GPR_U32(ctx, 31, 0x11AB48u);
    ctx->pc = 0x11AB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AB40u;
    // 0x11ab44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F34C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F34C8u, 0x11AB40u, 0x11AB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AB48u;
label_11ab48:
    // 0x11ab48: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11AB48u;
    {
        const bool branch_taken_0x11ab48 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x11ab48) {
            ctx->pc = 0x11AB34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ab34;
        }
    }
    ctx->pc = 0x11AB50u;
    // 0x11ab50: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x11ab50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x11ab54: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x11ab54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_11ab58:
    // 0x11ab58: 0x2119021  addu        $s2, $s0, $s1
    ctx->pc = 0x11ab58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x11ab5c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x11ab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11ab60: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x11AB60u;
    {
        const bool branch_taken_0x11ab60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB60u;
        // 0x11ab64: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab60) {
            ctx->pc = 0x11AB14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ab14;
        }
    }
    ctx->pc = 0x11AB68u;
    // 0x11ab68: 0xc07c95e  jal         func_1F2578
    ctx->pc = 0x11AB68u;
    SET_GPR_U32(ctx, 31, 0x11AB70u);
    ctx->pc = 0x1F2578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2578u, 0x11AB68u, 0x11AB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AB70u;
label_11ab70:
    // 0x11ab70: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11ab70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11ab74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11ab74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11ab78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11ab78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ab7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11ab7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ab80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11ab80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ab84: 0x3e00008  jr          $ra
    ctx->pc = 0x11AB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB84u;
        // 0x11ab88: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AB84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AB8Cu;
}
