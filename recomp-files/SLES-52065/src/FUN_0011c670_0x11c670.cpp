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

// Function: FUN_0011c670
// Address: 0x11c670 - 0x11d1a8
void FUN_0011c670_0x11c670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011c670_0x11c670");
#endif

    switch (ctx->pc) {
        case 0x11c68cu: goto label_11c68c;
        case 0x11c79cu: goto label_11c79c;
        case 0x11c7b0u: goto label_11c7b0;
        case 0x11c7e0u: goto label_11c7e0;
        case 0x11c844u: goto label_11c844;
        case 0x11c850u: goto label_11c850;
        case 0x11c860u: goto label_11c860;
        case 0x11c86cu: goto label_11c86c;
        case 0x11c874u: goto label_11c874;
        case 0x11c87cu: goto label_11c87c;
        case 0x11c884u: goto label_11c884;
        case 0x11c8a0u: goto label_11c8a0;
        case 0x11c8b4u: goto label_11c8b4;
        case 0x11c8f4u: goto label_11c8f4;
        case 0x11c904u: goto label_11c904;
        case 0x11c918u: goto label_11c918;
        case 0x11c920u: goto label_11c920;
        case 0x11c928u: goto label_11c928;
        case 0x11c938u: goto label_11c938;
        case 0x11c940u: goto label_11c940;
        case 0x11c94cu: goto label_11c94c;
        case 0x11c954u: goto label_11c954;
        case 0x11c95cu: goto label_11c95c;
        case 0x11c964u: goto label_11c964;
        case 0x11c980u: goto label_11c980;
        case 0x11c994u: goto label_11c994;
        case 0x11c9d4u: goto label_11c9d4;
        case 0x11c9e4u: goto label_11c9e4;
        case 0x11c9f8u: goto label_11c9f8;
        case 0x11ca08u: goto label_11ca08;
        case 0x11ca10u: goto label_11ca10;
        case 0x11ca1cu: goto label_11ca1c;
        case 0x11ca34u: goto label_11ca34;
        case 0x11ca58u: goto label_11ca58;
        case 0x11cad0u: goto label_11cad0;
        case 0x11cad8u: goto label_11cad8;
        case 0x11cae0u: goto label_11cae0;
        case 0x11cafcu: goto label_11cafc;
        case 0x11cb10u: goto label_11cb10;
        case 0x11cb50u: goto label_11cb50;
        case 0x11cb60u: goto label_11cb60;
        case 0x11cb70u: goto label_11cb70;
        case 0x11cb80u: goto label_11cb80;
        case 0x11cb88u: goto label_11cb88;
        case 0x11cb90u: goto label_11cb90;
        case 0x11cbf4u: goto label_11cbf4;
        case 0x11cc00u: goto label_11cc00;
        case 0x11cc08u: goto label_11cc08;
        case 0x11cc8cu: goto label_11cc8c;
        case 0x11ccf0u: goto label_11ccf0;
        case 0x11cd38u: goto label_11cd38;
        case 0x11cd6cu: goto label_11cd6c;
        case 0x11cd74u: goto label_11cd74;
        case 0x11cdb0u: goto label_11cdb0;
        case 0x11cdbcu: goto label_11cdbc;
        case 0x11cdc4u: goto label_11cdc4;
        case 0x11ce08u: goto label_11ce08;
        case 0x11ce3cu: goto label_11ce3c;
        case 0x11ce48u: goto label_11ce48;
        case 0x11ce50u: goto label_11ce50;
        case 0x11ce58u: goto label_11ce58;
        case 0x11ce74u: goto label_11ce74;
        case 0x11ce88u: goto label_11ce88;
        case 0x11cec8u: goto label_11cec8;
        case 0x11ced8u: goto label_11ced8;
        case 0x11cee4u: goto label_11cee4;
        case 0x11cef0u: goto label_11cef0;
        case 0x11cef8u: goto label_11cef8;
        case 0x11cf74u: goto label_11cf74;
        case 0x11cf88u: goto label_11cf88;
        case 0x11d000u: goto label_11d000;
        case 0x11d008u: goto label_11d008;
        case 0x11d024u: goto label_11d024;
        case 0x11d038u: goto label_11d038;
        case 0x11d078u: goto label_11d078;
        case 0x11d088u: goto label_11d088;
        case 0x11d090u: goto label_11d090;
        case 0x11d098u: goto label_11d098;
        case 0x11d0dcu: goto label_11d0dc;
        case 0x11d0e4u: goto label_11d0e4;
        case 0x11d114u: goto label_11d114;
        case 0x11d14cu: goto label_11d14c;
        case 0x11d158u: goto label_11d158;
        case 0x11d168u: goto label_11d168;
        case 0x11d178u: goto label_11d178;
        case 0x11d180u: goto label_11d180;
        default: break;
    }

    ctx->pc = 0x11c670u;

    // 0x11c670: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11c670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11c674: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11c674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11c678: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11c678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11c67c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11c67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11c680: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11c680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11c684: 0x8c910100  lw          $s1, 0x100($a0)
    ctx->pc = 0x11c684u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x11c688: 0x0  nop
    ctx->pc = 0x11c688u;
    // NOP
label_11c68c:
    // 0x11c68c: 0x122002c0  beqz        $s1, . + 4 + (0x2C0 << 2)
    ctx->pc = 0x11C68Cu;
    {
        const bool branch_taken_0x11c68c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c68c) {
            ctx->pc = 0x11D190u;
            goto label_11d190;
        }
    }
    ctx->pc = 0x11C694u;
    // 0x11c694: 0x8e240044  lw          $a0, 0x44($s1)
    ctx->pc = 0x11c694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x11c698: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x11c698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x11c69c: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x11C69Cu;
    {
        const bool branch_taken_0x11c69c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x11C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C69Cu;
        // 0x11c6a0: 0x8e260048  lw          $a2, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c69c) {
            ctx->pc = 0x11C6D0u;
            goto label_11c6d0;
        }
    }
    ctx->pc = 0x11C6A4u;
    // 0x11c6a4: 0x8e250088  lw          $a1, 0x88($s1)
    ctx->pc = 0x11c6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x11c6a8: 0x8e2400ac  lw          $a0, 0xAC($s1)
    ctx->pc = 0x11c6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x11c6ac: 0x8e270074  lw          $a3, 0x74($s1)
    ctx->pc = 0x11c6acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x11c6b0: 0x8f8383dc  lw          $v1, -0x7C24($gp)
    ctx->pc = 0x11c6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935516)));
    // 0x11c6b4: 0x10e30010  beq         $a3, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x11C6B4u;
    {
        const bool branch_taken_0x11c6b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x11C6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C6B4u;
        // 0x11c6b8: 0xa48023  subu        $s0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c6b4) {
            ctx->pc = 0x11C6F8u;
            goto label_11c6f8;
        }
    }
    ctx->pc = 0x11C6BCu;
    // 0x11c6bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11c6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11c6c0: 0x10e3000d  beq         $a3, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x11C6C0u;
    {
        const bool branch_taken_0x11c6c0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x11c6c0) {
            ctx->pc = 0x11C6F8u;
            goto label_11c6f8;
        }
    }
    ctx->pc = 0x11C6C8u;
    // 0x11c6c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x11C6C8u;
    {
        const bool branch_taken_0x11c6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C6C8u;
        // 0x11c6cc: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c6c8) {
            ctx->pc = 0x11C6F8u;
            goto label_11c6f8;
        }
    }
    ctx->pc = 0x11C6D0u;
label_11c6d0:
    // 0x11c6d0: 0x8e250088  lw          $a1, 0x88($s1)
    ctx->pc = 0x11c6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x11c6d4: 0x8e2400ac  lw          $a0, 0xAC($s1)
    ctx->pc = 0x11c6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x11c6d8: 0x8f8383dc  lw          $v1, -0x7C24($gp)
    ctx->pc = 0x11c6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935516)));
    // 0x11c6dc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C6DCu;
    {
        const bool branch_taken_0x11c6dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C6DCu;
        // 0x11c6e0: 0xa48023  subu        $s0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c6dc) {
            ctx->pc = 0x11C6F8u;
            goto label_11c6f8;
        }
    }
    ctx->pc = 0x11C6E4u;
    // 0x11c6e4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x11c6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x11c6e8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11c6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11c6ec: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x11C6ECu;
    {
        const bool branch_taken_0x11c6ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11c6ec) {
            ctx->pc = 0x11C6F8u;
            goto label_11c6f8;
        }
    }
    ctx->pc = 0x11C6F4u;
    // 0x11c6f4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x11c6f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_11c6f8:
    // 0x11c6f8: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x11c6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x11c6fc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11C6FCu;
    {
        const bool branch_taken_0x11c6fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11c6fc) {
            ctx->pc = 0x11C710u;
            goto label_11c710;
        }
    }
    ctx->pc = 0x11C704u;
    // 0x11c704: 0x8f8383f4  lw          $v1, -0x7C0C($gp)
    ctx->pc = 0x11c704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935540)));
    // 0x11c708: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x11C708u;
    {
        const bool branch_taken_0x11c708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c708) {
            ctx->pc = 0x11C714u;
            goto label_11c714;
        }
    }
    ctx->pc = 0x11C710u;
label_11c710:
    // 0x11c710: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x11c710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11c714:
    // 0x11c714: 0x0  nop
    ctx->pc = 0x11c714u;
    // NOP
    // 0x11c718: 0x20c30001  addi        $v1, $a2, 0x1
    ctx->pc = 0x11c718u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 6), (int32_t)1, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x11c71c: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x11c71cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x11c720: 0x10200299  beqz        $at, . + 4 + (0x299 << 2)
    ctx->pc = 0x11C720u;
    {
        const bool branch_taken_0x11c720 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c720) {
            ctx->pc = 0x11D188u;
            goto label_11d188;
        }
    }
    ctx->pc = 0x11C728u;
    // 0x11c728: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x11c728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x11c72c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11c72cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11c730: 0x2484e820  addiu       $a0, $a0, -0x17E0
    ctx->pc = 0x11c730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961184));
    // 0x11c734: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x11c734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11c738: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x11c738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11c73c: 0x600008  jr          $v1
    ctx->pc = 0x11C73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C744u: goto label_11c744;
            case 0x11C7F0u: goto label_11c7f0;
            case 0x11CBA0u: goto label_11cba0;
            case 0x11D160u: goto label_11d160;
            case 0x11D188u: goto label_11d188;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C73Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x11C744u;
label_11c744:
    // 0x11c744: 0x0  nop
    ctx->pc = 0x11c744u;
    // NOP
    // 0x11c748: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x11c748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x11c74c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x11c74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11c750: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x11C750u;
    {
        const bool branch_taken_0x11c750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11c750) {
            ctx->pc = 0x11C7E0u;
            goto label_11c7e0;
        }
    }
    ctx->pc = 0x11C758u;
    // 0x11c758: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x11c758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11c75c: 0x10830020  beq         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x11C75Cu;
    {
        const bool branch_taken_0x11c75c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11c75c) {
            ctx->pc = 0x11C7E0u;
            goto label_11c7e0;
        }
    }
    ctx->pc = 0x11C764u;
    // 0x11c764: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x11c764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11c768: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x11C768u;
    {
        const bool branch_taken_0x11c768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11c768) {
            ctx->pc = 0x11C7B0u;
            goto label_11c7b0;
        }
    }
    ctx->pc = 0x11C770u;
    // 0x11c770: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x11c770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11c774: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x11C774u;
    {
        const bool branch_taken_0x11c774 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11c774) {
            ctx->pc = 0x11C7B0u;
            goto label_11c7b0;
        }
    }
    ctx->pc = 0x11C77Cu;
    // 0x11c77c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x11c77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x11c780: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C780u;
    {
        const bool branch_taken_0x11c780 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11c780) {
            ctx->pc = 0x11C79Cu;
            goto label_11c79c;
        }
    }
    ctx->pc = 0x11C788u;
    // 0x11c788: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11c788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c78c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C78Cu;
    {
        const bool branch_taken_0x11c78c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11c78c) {
            ctx->pc = 0x11C79Cu;
            goto label_11c79c;
        }
    }
    ctx->pc = 0x11C794u;
    // 0x11c794: 0x1000027c  b           . + 4 + (0x27C << 2)
    ctx->pc = 0x11C794u;
    {
        const bool branch_taken_0x11c794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c794) {
            ctx->pc = 0x11D188u;
            goto label_11d188;
        }
    }
    ctx->pc = 0x11C79Cu;
label_11c79c:
    // 0x11c79c: 0x0  nop
    ctx->pc = 0x11c79cu;
    // NOP
    // 0x11c7a0: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x11c7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x11c7a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11c7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11c7a8: 0x10000277  b           . + 4 + (0x277 << 2)
    ctx->pc = 0x11C7A8u;
    {
        const bool branch_taken_0x11c7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C7A8u;
        // 0x11c7ac: 0xae230048  sw          $v1, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c7a8) {
            ctx->pc = 0x11D188u;
            goto label_11d188;
        }
    }
    ctx->pc = 0x11C7B0u;
label_11c7b0:
    // 0x11c7b0: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x11c7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x11c7b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11c7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c7b8: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11C7B8u;
    {
        const bool branch_taken_0x11c7b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11c7b8) {
            ctx->pc = 0x11C7D0u;
            goto label_11c7d0;
        }
    }
    ctx->pc = 0x11C7C0u;
    // 0x11c7c0: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x11c7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x11c7c4: 0x8e23008c  lw          $v1, 0x8C($s1)
    ctx->pc = 0x11c7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x11c7c8: 0x1483026f  bne         $a0, $v1, . + 4 + (0x26F << 2)
    ctx->pc = 0x11C7C8u;
    {
        const bool branch_taken_0x11c7c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x11c7c8) {
            ctx->pc = 0x11D188u;
            goto label_11d188;
        }
    }
    ctx->pc = 0x11C7D0u;
label_11c7d0:
    // 0x11c7d0: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x11c7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x11c7d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11c7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11c7d8: 0x1000026b  b           . + 4 + (0x26B << 2)
    ctx->pc = 0x11C7D8u;
    {
        const bool branch_taken_0x11c7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C7D8u;
        // 0x11c7dc: 0xae230048  sw          $v1, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c7d8) {
            ctx->pc = 0x11D188u;
            goto label_11d188;
        }
    }
    ctx->pc = 0x11C7E0u;
label_11c7e0:
    // 0x11c7e0: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x11c7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x11c7e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11c7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11c7e8: 0x10000267  b           . + 4 + (0x267 << 2)
    ctx->pc = 0x11C7E8u;
    {
        const bool branch_taken_0x11c7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C7E8u;
        // 0x11c7ec: 0xae230048  sw          $v1, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c7e8) {
            ctx->pc = 0x11D188u;
            goto label_11d188;
        }
    }
    ctx->pc = 0x11C7F0u;
label_11c7f0:
    // 0x11c7f0: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x11c7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x11c7f4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x11c7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11c7f8: 0x108300e1  beq         $a0, $v1, . + 4 + (0xE1 << 2)
    ctx->pc = 0x11C7F8u;
    {
        const bool branch_taken_0x11c7f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11c7f8) {
            ctx->pc = 0x11CB80u;
            goto label_11cb80;
        }
    }
    ctx->pc = 0x11C800u;
    // 0x11c800: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x11c800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11c804: 0x108300de  beq         $a0, $v1, . + 4 + (0xDE << 2)
    ctx->pc = 0x11C804u;
    {
        const bool branch_taken_0x11c804 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11c804) {
            ctx->pc = 0x11CB80u;
            goto label_11cb80;
        }
    }
    ctx->pc = 0x11C80Cu;
    // 0x11c80c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x11c80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11c810: 0x1083007d  beq         $a0, $v1, . + 4 + (0x7D << 2)
    ctx->pc = 0x11C810u;
    {
        const bool branch_taken_0x11c810 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11c810) {
            ctx->pc = 0x11CA08u;
            goto label_11ca08;
        }
    }
    ctx->pc = 0x11C818u;
    // 0x11c818: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x11c818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11c81c: 0x10830046  beq         $a0, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x11C81Cu;
    {
        const bool branch_taken_0x11c81c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11c81c) {
            ctx->pc = 0x11C938u;
            goto label_11c938;
        }
    }
    ctx->pc = 0x11C824u;
    // 0x11c824: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x11c824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x11c828: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C828u;
    {
        const bool branch_taken_0x11c828 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11c828) {
            ctx->pc = 0x11C844u;
            goto label_11c844;
        }
    }
    ctx->pc = 0x11C830u;
    // 0x11c830: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11c830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c834: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C834u;
    {
        const bool branch_taken_0x11c834 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11c834) {
            ctx->pc = 0x11C844u;
            goto label_11c844;
        }
    }
    ctx->pc = 0x11C83Cu;
    // 0x11c83c: 0x10000252  b           . + 4 + (0x252 << 2)
    ctx->pc = 0x11C83Cu;
    {
        const bool branch_taken_0x11c83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c83c) {
            ctx->pc = 0x11D188u;
            goto label_11d188;
        }
    }
    ctx->pc = 0x11C844u;
label_11c844:
    // 0x11c844: 0x0  nop
    ctx->pc = 0x11c844u;
    // NOP
    // 0x11c848: 0xc047158  jal         func_11C560
    ctx->pc = 0x11C848u;
    SET_GPR_U32(ctx, 31, 0x11C850u);
    ctx->pc = 0x11C84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C848u;
    // 0x11c84c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C560u, 0x11C848u, 0x11C850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C850u;
label_11c850:
    // 0x11c850: 0x1040024d  beqz        $v0, . + 4 + (0x24D << 2)
    ctx->pc = 0x11C850u;
    {
        const bool branch_taken_0x11c850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c850) {
            ctx->pc = 0x11D188u;
            goto label_11d188;
        }
    }
    ctx->pc = 0x11C858u;
    // 0x11c858: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x11C858u;
    SET_GPR_U32(ctx, 31, 0x11C860u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x11C858u, 0x11C860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C860u;
label_11c860:
    // 0x11c860: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11c860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c864: 0xc046f94  jal         func_11BE50
    ctx->pc = 0x11C864u;
    SET_GPR_U32(ctx, 31, 0x11C86Cu);
    ctx->pc = 0x11C868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C864u;
    // 0x11c868: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BE50u, 0x11C864u, 0x11C86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C86Cu;
label_11c86c:
    // 0x11c86c: 0xc047090  jal         func_11C240
    ctx->pc = 0x11C86Cu;
    SET_GPR_U32(ctx, 31, 0x11C874u);
    ctx->pc = 0x11C870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C86Cu;
    // 0x11c870: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C240u, 0x11C86Cu, 0x11C874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C874u;
label_11c874:
    // 0x11c874: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x11C874u;
    SET_GPR_U32(ctx, 31, 0x11C87Cu);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x11C874u, 0x11C87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C87Cu;
label_11c87c:
    // 0x11c87c: 0xc082cf4  jal         func_20B3D0
    ctx->pc = 0x11C87Cu;
    SET_GPR_U32(ctx, 31, 0x11C884u);
    ctx->pc = 0x11C880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C87Cu;
    // 0x11c880: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B3D0u, 0x11C87Cu, 0x11C884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C884u;
label_11c884:
    // 0x11c884: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x11c884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x11c888: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x11c888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x11c88c: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x11c88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x11c890: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11c890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c894: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11c894u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 3));
    // 0x11c898: 0xc082cbc  jal         func_20B2F0
    ctx->pc = 0x11C898u;
    SET_GPR_U32(ctx, 31, 0x11C8A0u);
    ctx->pc = 0x11C89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C898u;
    // 0x11c89c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B2F0u, 0x11C898u, 0x11C8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C8A0u;
label_11c8a0:
    // 0x11c8a0: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x11c8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x11c8a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11c8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c8a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11c8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c8ac: 0xc082cbc  jal         func_20B2F0
    ctx->pc = 0x11C8ACu;
    SET_GPR_U32(ctx, 31, 0x11C8B4u);
    ctx->pc = 0x11C8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C8ACu;
    // 0x11c8b0: 0xac202000  sw          $zero, 0x2000($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8192), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B2F0u, 0x11C8ACu, 0x11C8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C8B4u;
label_11c8b4:
    // 0x11c8b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11c8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c8b8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11c8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11c8bc: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x11c8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
    // 0x11c8c0: 0x24020105  addiu       $v0, $zero, 0x105
    ctx->pc = 0x11c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x11c8c4: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x11c8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x11c8c8: 0x262400e4  addiu       $a0, $s1, 0xE4
    ctx->pc = 0x11c8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 228));
    // 0x11c8cc: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x11c8ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x11c8d0: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x11c8d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x11c8d4: 0xac23b430  sw          $v1, -0x4BD0($at)
    ctx->pc = 0x11c8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947888), GPR_U32(ctx, 3));
    // 0x11c8d8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11c8d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11c8dc: 0xac20b420  sw          $zero, -0x4BE0($at)
    ctx->pc = 0x11c8dcu;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0));
    // 0x11c8e0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11c8e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11c8e4: 0xac22b400  sw          $v0, -0x4C00($at)
    ctx->pc = 0x11c8e4u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 2));
    // 0x11c8e8: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x11c8e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x11c8ec: 0xc04705c  jal         func_11C170
    ctx->pc = 0x11C8ECu;
    SET_GPR_U32(ctx, 31, 0x11C8F4u);
    ctx->pc = 0x11C8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C8ECu;
    // 0x11c8f0: 0xac202010  sw          $zero, 0x2010($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C170u, 0x11C8ECu, 0x11C8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C8F4u;
label_11c8f4:
    // 0x11c8f4: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C8F4u;
    {
        const bool branch_taken_0x11c8f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c8f4) {
            ctx->pc = 0x11C904u;
            goto label_11c904;
        }
    }
    ctx->pc = 0x11C8FCu;
    // 0x11c8fc: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x11C8FCu;
    SET_GPR_U32(ctx, 31, 0x11C904u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x11C8FCu, 0x11C904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C904u;
label_11c904:
    // 0x11c904: 0x0  nop
    ctx->pc = 0x11c904u;
    // NOP
    // 0x11c908: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C908u;
    {
        const bool branch_taken_0x11c908 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c908) {
            ctx->pc = 0x11C918u;
            goto label_11c918;
        }
    }
    ctx->pc = 0x11C910u;
    // 0x11c910: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x11C910u;
    SET_GPR_U32(ctx, 31, 0x11C918u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x11C910u, 0x11C918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C918u;
label_11c918:
    // 0x11c918: 0xc0752ba  jal         func_1D4AE8
    ctx->pc = 0x11C918u;
    SET_GPR_U32(ctx, 31, 0x11C920u);
    ctx->pc = 0x11C91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C918u;
    // 0x11c91c: 0x26240108  addiu       $a0, $s1, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4AE8u, 0x11C918u, 0x11C920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C920u;
label_11c920:
    // 0x11c920: 0xc075314  jal         func_1D4C50
    ctx->pc = 0x11C920u;
    SET_GPR_U32(ctx, 31, 0x11C928u);
    ctx->pc = 0x11C924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C920u;
    // 0x11c924: 0x26240108  addiu       $a0, $s1, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4C50u, 0x11C920u, 0x11C928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C928u;
label_11c928:
    // 0x11c928: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x11c928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x11c92c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11c92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11c930: 0x10000215  b           . + 4 + (0x215 << 2)
    ctx->pc = 0x11C930u;
    {
        const bool branch_taken_0x11c930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C930u;
        // 0x11c934: 0xae230048  sw          $v1, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c930) {
            ctx->pc = 0x11D188u;
            goto label_11d188;
        }
    }
    ctx->pc = 0x11C938u;
label_11c938:
    // 0x11c938: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x11C938u;
    SET_GPR_U32(ctx, 31, 0x11C940u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x11C938u, 0x11C940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C940u;
label_11c940:
    // 0x11c940: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11c940u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c944: 0xc046f94  jal         func_11BE50
    ctx->pc = 0x11C944u;
    SET_GPR_U32(ctx, 31, 0x11C94Cu);
    ctx->pc = 0x11C948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C944u;
    // 0x11c948: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BE50u, 0x11C944u, 0x11C94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C94Cu;
label_11c94c:
    // 0x11c94c: 0xc047090  jal         func_11C240
    ctx->pc = 0x11C94Cu;
    SET_GPR_U32(ctx, 31, 0x11C954u);
    ctx->pc = 0x11C950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C94Cu;
    // 0x11c950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C240u, 0x11C94Cu, 0x11C954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C954u;
label_11c954:
    // 0x11c954: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x11C954u;
    SET_GPR_U32(ctx, 31, 0x11C95Cu);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x11C954u, 0x11C95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C95Cu;
label_11c95c:
    // 0x11c95c: 0xc082cf4  jal         func_20B3D0
    ctx->pc = 0x11C95Cu;
    SET_GPR_U32(ctx, 31, 0x11C964u);
    ctx->pc = 0x11C960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C95Cu;
    // 0x11c960: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B3D0u, 0x11C95Cu, 0x11C964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C964u;
label_11c964:
    // 0x11c964: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x11c964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x11c968: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x11c968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x11c96c: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x11c96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x11c970: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11c970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c974: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11c974u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 3));
    // 0x11c978: 0xc082cbc  jal         func_20B2F0
    ctx->pc = 0x11C978u;
    SET_GPR_U32(ctx, 31, 0x11C980u);
    ctx->pc = 0x11C97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C978u;
    // 0x11c97c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B2F0u, 0x11C978u, 0x11C980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C980u;
label_11c980:
    // 0x11c980: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x11c980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x11c984: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11c984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c988: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11c988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c98c: 0xc082cbc  jal         func_20B2F0
    ctx->pc = 0x11C98Cu;
    SET_GPR_U32(ctx, 31, 0x11C994u);
    ctx->pc = 0x11C990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C98Cu;
    // 0x11c990: 0xac202000  sw          $zero, 0x2000($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8192), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B2F0u, 0x11C98Cu, 0x11C994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C994u;
label_11c994:
    // 0x11c994: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11c994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11c998: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11c998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11c99c: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x11c99cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
    // 0x11c9a0: 0x24020105  addiu       $v0, $zero, 0x105
    ctx->pc = 0x11c9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x11c9a4: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x11c9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x11c9a8: 0x262400e4  addiu       $a0, $s1, 0xE4
    ctx->pc = 0x11c9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 228));
    // 0x11c9ac: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x11c9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x11c9b0: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x11c9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x11c9b4: 0xac23b430  sw          $v1, -0x4BD0($at)
    ctx->pc = 0x11c9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947888), GPR_U32(ctx, 3));
    // 0x11c9b8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11c9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11c9bc: 0xac20b420  sw          $zero, -0x4BE0($at)
    ctx->pc = 0x11c9bcu;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0));
    // 0x11c9c0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11c9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11c9c4: 0xac22b400  sw          $v0, -0x4C00($at)
    ctx->pc = 0x11c9c4u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 2));
    // 0x11c9c8: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x11c9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x11c9cc: 0xc04705c  jal         func_11C170
    ctx->pc = 0x11C9CCu;
    SET_GPR_U32(ctx, 31, 0x11C9D4u);
    ctx->pc = 0x11C9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C9CCu;
    // 0x11c9d0: 0xac202010  sw          $zero, 0x2010($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C170u, 0x11C9CCu, 0x11C9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C9D4u;
label_11c9d4:
    // 0x11c9d4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C9D4u;
    {
        const bool branch_taken_0x11c9d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c9d4) {
            ctx->pc = 0x11C9E4u;
            goto label_11c9e4;
        }
    }
    ctx->pc = 0x11C9DCu;
    // 0x11c9dc: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x11C9DCu;
    SET_GPR_U32(ctx, 31, 0x11C9E4u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x11C9DCu, 0x11C9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C9E4u;
label_11c9e4:
    // 0x11c9e4: 0x0  nop
    ctx->pc = 0x11c9e4u;
    // NOP
    // 0x11c9e8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C9E8u;
    {
        const bool branch_taken_0x11c9e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c9e8) {
            ctx->pc = 0x11C9F8u;
            goto label_11c9f8;
        }
    }
    ctx->pc = 0x11C9F0u;
    // 0x11c9f0: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x11C9F0u;
    SET_GPR_U32(ctx, 31, 0x11C9F8u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x11C9F0u, 0x11C9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C9F8u;
label_11c9f8:
    // 0x11c9f8: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x11c9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x11c9fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11c9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11ca00: 0x100001e1  b           . + 4 + (0x1E1 << 2)
    ctx->pc = 0x11CA00u;
    {
        const bool branch_taken_0x11ca00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA00u;
        // 0x11ca04: 0xae230048  sw          $v1, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca00) {
            ctx->pc = 0x11D188u;
            goto label_11d188;
        }
    }
    ctx->pc = 0x11CA08u;
label_11ca08:
    // 0x11ca08: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x11CA08u;
    SET_GPR_U32(ctx, 31, 0x11CA10u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x11CA08u, 0x11CA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CA10u;
label_11ca10:
    // 0x11ca10: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11ca10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ca14: 0xc046f94  jal         func_11BE50
    ctx->pc = 0x11CA14u;
    SET_GPR_U32(ctx, 31, 0x11CA1Cu);
    ctx->pc = 0x11CA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CA14u;
    // 0x11ca18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BE50u, 0x11CA14u, 0x11CA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CA1Cu;
label_11ca1c:
    // 0x11ca1c: 0x8e2200c8  lw          $v0, 0xC8($s1)
    ctx->pc = 0x11ca1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x11ca20: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x11ca20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11ca24: 0x3405c000  ori         $a1, $zero, 0xC000
    ctx->pc = 0x11ca24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x11ca28: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x11ca28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x11ca2c: 0xc040128  jal         func_1004A0
    ctx->pc = 0x11CA2Cu;
    SET_GPR_U32(ctx, 31, 0x11CA34u);
    ctx->pc = 0x11CA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CA2Cu;
    // 0x11ca30: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1004A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1004A0u, 0x11CA2Cu, 0x11CA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CA34u;
label_11ca34:
    // 0x11ca34: 0xae2200cc  sw          $v0, 0xCC($s1)
    ctx->pc = 0x11ca34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 2));
    // 0x11ca38: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x11ca38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x11ca3c: 0x8e2600cc  lw          $a2, 0xCC($s1)
    ctx->pc = 0x11ca3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x11ca40: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x11ca40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11ca44: 0x8e2200c8  lw          $v0, 0xC8($s1)
    ctx->pc = 0x11ca44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x11ca48: 0x433824  and         $a3, $v0, $v1
    ctx->pc = 0x11ca48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x11ca4c: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x11CA4Cu;
    {
        const bool branch_taken_0x11ca4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA4Cu;
        // 0x11ca50: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca4c) {
            ctx->pc = 0x11CAC8u;
            goto label_11cac8;
        }
    }
    ctx->pc = 0x11CA54u;
    // 0x11ca54: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x11ca54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_11ca58:
    // 0x11ca58: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x11ca58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x11ca5c: 0x201082b  sltu        $at, $s0, $at
    ctx->pc = 0x11ca5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x11ca60: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CA60u;
    {
        const bool branch_taken_0x11ca60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ca60) {
            ctx->pc = 0x11CA70u;
            goto label_11ca70;
        }
    }
    ctx->pc = 0x11CA68u;
    // 0x11ca68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11CA68u;
    {
        const bool branch_taken_0x11ca68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CA68u;
        // 0x11ca6c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ca68) {
            ctx->pc = 0x11CA74u;
            goto label_11ca74;
        }
    }
    ctx->pc = 0x11CA70u;
label_11ca70:
    // 0x11ca70: 0x3c080004  lui         $t0, 0x4
    ctx->pc = 0x11ca70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4 << 16));
label_11ca74:
    // 0x11ca74: 0x0  nop
    ctx->pc = 0x11ca74u;
    // NOP
    // 0x11ca78: 0x2088023  subu        $s0, $s0, $t0
    ctx->pc = 0x11ca78u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x11ca7c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x11ca7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11ca80: 0x2503000f  addiu       $v1, $t0, 0xF
    ctx->pc = 0x11ca80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 15));
    // 0x11ca84: 0x10100a  movz        $v0, $zero, $s0
    ctx->pc = 0x11ca84u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x11ca88: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x11ca88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x11ca8c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11ca8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11ca90: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x11ca90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x11ca94: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x11ca94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11ca98: 0x22738  dsll        $a0, $v0, 28
    ctx->pc = 0x11ca98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 28);
    // 0x11ca9c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x11ca9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11caa0: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x11caa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x11caa4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x11caa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11caa8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x11caa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x11caac: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x11caacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x11cab0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11cab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11cab4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x11cab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x11cab8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11cab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11cabc: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x11cabcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x11cac0: 0x1600ffe5  bnez        $s0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x11CAC0u;
    {
        const bool branch_taken_0x11cac0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CAC0u;
        // 0x11cac4: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cac0) {
            ctx->pc = 0x11CA58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ca58;
        }
    }
    ctx->pc = 0x11CAC8u;
label_11cac8:
    // 0x11cac8: 0xc046fe8  jal         func_11BFA0
    ctx->pc = 0x11CAC8u;
    SET_GPR_U32(ctx, 31, 0x11CAD0u);
    ctx->pc = 0x11CACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CAC8u;
    // 0x11cacc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BFA0u, 0x11CAC8u, 0x11CAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CAD0u;
label_11cad0:
    // 0x11cad0: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x11CAD0u;
    SET_GPR_U32(ctx, 31, 0x11CAD8u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x11CAD0u, 0x11CAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CAD8u;
label_11cad8:
    // 0x11cad8: 0xc082cf4  jal         func_20B3D0
    ctx->pc = 0x11CAD8u;
    SET_GPR_U32(ctx, 31, 0x11CAE0u);
    ctx->pc = 0x11CADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CAD8u;
    // 0x11cadc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B3D0u, 0x11CAD8u, 0x11CAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CAE0u;
label_11cae0:
    // 0x11cae0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x11cae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x11cae4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x11cae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x11cae8: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x11cae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x11caec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11caecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11caf0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11caf0u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 3));
    // 0x11caf4: 0xc082cbc  jal         func_20B2F0
    ctx->pc = 0x11CAF4u;
    SET_GPR_U32(ctx, 31, 0x11CAFCu);
    ctx->pc = 0x11CAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CAF4u;
    // 0x11caf8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B2F0u, 0x11CAF4u, 0x11CAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CAFCu;
label_11cafc:
    // 0x11cafc: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x11cafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x11cb00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11cb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cb04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11cb04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cb08: 0xc082cbc  jal         func_20B2F0
    ctx->pc = 0x11CB08u;
    SET_GPR_U32(ctx, 31, 0x11CB10u);
    ctx->pc = 0x11CB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CB08u;
    // 0x11cb0c: 0xac202000  sw          $zero, 0x2000($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8192), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B2F0u, 0x11CB08u, 0x11CB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CB10u;
label_11cb10:
    // 0x11cb10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11cb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11cb14: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11cb14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11cb18: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x11cb18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
    // 0x11cb1c: 0x24020105  addiu       $v0, $zero, 0x105
    ctx->pc = 0x11cb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x11cb20: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x11cb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x11cb24: 0x262400e4  addiu       $a0, $s1, 0xE4
    ctx->pc = 0x11cb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 228));
    // 0x11cb28: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x11cb28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x11cb2c: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x11cb2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x11cb30: 0xac23b430  sw          $v1, -0x4BD0($at)
    ctx->pc = 0x11cb30u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947888), GPR_U32(ctx, 3));
    // 0x11cb34: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11cb34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11cb38: 0xac20b420  sw          $zero, -0x4BE0($at)
    ctx->pc = 0x11cb38u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0));
    // 0x11cb3c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11cb3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11cb40: 0xac22b400  sw          $v0, -0x4C00($at)
    ctx->pc = 0x11cb40u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 2));
    // 0x11cb44: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x11cb44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x11cb48: 0xc04705c  jal         func_11C170
    ctx->pc = 0x11CB48u;
    SET_GPR_U32(ctx, 31, 0x11CB50u);
    ctx->pc = 0x11CB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CB48u;
    // 0x11cb4c: 0xac202010  sw          $zero, 0x2010($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C170u, 0x11CB48u, 0x11CB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CB50u;
label_11cb50:
    // 0x11cb50: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CB50u;
    {
        const bool branch_taken_0x11cb50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cb50) {
            ctx->pc = 0x11CB60u;
            goto label_11cb60;
        }
    }
    ctx->pc = 0x11CB58u;
    // 0x11cb58: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x11CB58u;
    SET_GPR_U32(ctx, 31, 0x11CB60u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x11CB58u, 0x11CB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CB60u;
label_11cb60:
    // 0x11cb60: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CB60u;
    {
        const bool branch_taken_0x11cb60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cb60) {
            ctx->pc = 0x11CB70u;
            goto label_11cb70;
        }
    }
    ctx->pc = 0x11CB68u;
    // 0x11cb68: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x11CB68u;
    SET_GPR_U32(ctx, 31, 0x11CB70u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x11CB68u, 0x11CB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CB70u;
label_11cb70:
    // 0x11cb70: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x11cb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x11cb74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11cb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11cb78: 0x10000183  b           . + 4 + (0x183 << 2)
    ctx->pc = 0x11CB78u;
    {
        const bool branch_taken_0x11cb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB78u;
        // 0x11cb7c: 0xae230048  sw          $v1, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb78) {
            ctx->pc = 0x11D188u;
            goto label_11d188;
        }
    }
    ctx->pc = 0x11CB80u;
label_11cb80:
    // 0x11cb80: 0xc0752ba  jal         func_1D4AE8
    ctx->pc = 0x11CB80u;
    SET_GPR_U32(ctx, 31, 0x11CB88u);
    ctx->pc = 0x11CB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CB80u;
    // 0x11cb84: 0x26240108  addiu       $a0, $s1, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4AE8u, 0x11CB80u, 0x11CB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CB88u;
label_11cb88:
    // 0x11cb88: 0xc075314  jal         func_1D4C50
    ctx->pc = 0x11CB88u;
    SET_GPR_U32(ctx, 31, 0x11CB90u);
    ctx->pc = 0x11CB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CB88u;
    // 0x11cb8c: 0x26240108  addiu       $a0, $s1, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4C50u, 0x11CB88u, 0x11CB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CB90u;
label_11cb90:
    // 0x11cb90: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x11cb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x11cb94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11cb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11cb98: 0x1000017b  b           . + 4 + (0x17B << 2)
    ctx->pc = 0x11CB98u;
    {
        const bool branch_taken_0x11cb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB98u;
        // 0x11cb9c: 0xae230048  sw          $v1, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb98) {
            ctx->pc = 0x11D188u;
            goto label_11d188;
        }
    }
    ctx->pc = 0x11CBA0u;
label_11cba0:
    // 0x11cba0: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x11cba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x11cba4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x11cba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11cba8: 0x10830139  beq         $a0, $v1, . + 4 + (0x139 << 2)
    ctx->pc = 0x11CBA8u;
    {
        const bool branch_taken_0x11cba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11cba8) {
            ctx->pc = 0x11D090u;
            goto label_11d090;
        }
    }
    ctx->pc = 0x11CBB0u;
    // 0x11cbb0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x11cbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11cbb4: 0x10830136  beq         $a0, $v1, . + 4 + (0x136 << 2)
    ctx->pc = 0x11CBB4u;
    {
        const bool branch_taken_0x11cbb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11cbb4) {
            ctx->pc = 0x11D090u;
            goto label_11d090;
        }
    }
    ctx->pc = 0x11CBBCu;
    // 0x11cbbc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x11cbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x11cbc0: 0x108300c8  beq         $a0, $v1, . + 4 + (0xC8 << 2)
    ctx->pc = 0x11CBC0u;
    {
        const bool branch_taken_0x11cbc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11cbc0) {
            ctx->pc = 0x11CEE4u;
            goto label_11cee4;
        }
    }
    ctx->pc = 0x11CBC8u;
    // 0x11cbc8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x11cbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11cbcc: 0x108300c5  beq         $a0, $v1, . + 4 + (0xC5 << 2)
    ctx->pc = 0x11CBCCu;
    {
        const bool branch_taken_0x11cbcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11cbcc) {
            ctx->pc = 0x11CEE4u;
            goto label_11cee4;
        }
    }
    ctx->pc = 0x11CBD4u;
    // 0x11cbd4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x11cbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x11cbd8: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11CBD8u;
    {
        const bool branch_taken_0x11cbd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11cbd8) {
            ctx->pc = 0x11CBF4u;
            goto label_11cbf4;
        }
    }
    ctx->pc = 0x11CBE0u;
    // 0x11cbe0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11cbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11cbe4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CBE4u;
    {
        const bool branch_taken_0x11cbe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11cbe4) {
            ctx->pc = 0x11CBF4u;
            goto label_11cbf4;
        }
    }
    ctx->pc = 0x11CBECu;
    // 0x11cbec: 0x10000166  b           . + 4 + (0x166 << 2)
    ctx->pc = 0x11CBECu;
    {
        const bool branch_taken_0x11cbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cbec) {
            ctx->pc = 0x11D188u;
            goto label_11d188;
        }
    }
    ctx->pc = 0x11CBF4u;
label_11cbf4:
    // 0x11cbf4: 0x0  nop
    ctx->pc = 0x11cbf4u;
    // NOP
    // 0x11cbf8: 0xc082c68  jal         func_20B1A0
    ctx->pc = 0x11CBF8u;
    SET_GPR_U32(ctx, 31, 0x11CC00u);
    ctx->pc = 0x11CBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CBF8u;
    // 0x11cbfc: 0x262400e4  addiu       $a0, $s1, 0xE4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 228));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B1A0u, 0x11CBF8u, 0x11CC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CC00u;
label_11cc00:
    // 0x11cc00: 0xc082586  jal         func_209618
    ctx->pc = 0x11CC00u;
    SET_GPR_U32(ctx, 31, 0x11CC08u);
    ctx->pc = 0x11CC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CC00u;
    // 0x11cc04: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209618u, 0x11CC00u, 0x11CC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CC08u;
label_11cc08:
    // 0x11cc08: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x11cc08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x11cc0c: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x11cc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x11cc10: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x11cc10u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11cc14: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x11cc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x11cc18: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CC18u;
    {
        const bool branch_taken_0x11cc18 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x11CC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC18u;
        // 0x11cc1c: 0x41943  sra         $v1, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc18) {
            ctx->pc = 0x11CC28u;
            goto label_11cc28;
        }
    }
    ctx->pc = 0x11CC20u;
    // 0x11cc20: 0x2483001f  addiu       $v1, $a0, 0x1F
    ctx->pc = 0x11cc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x11cc24: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x11cc24u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_11cc28:
    // 0x11cc28: 0x32cc0  sll         $a1, $v1, 19
    ctx->pc = 0x11cc28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
    // 0x11cc2c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x11cc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x11cc30: 0x8e2300c8  lw          $v1, 0xC8($s1)
    ctx->pc = 0x11cc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x11cc34: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x11cc34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
    // 0x11cc38: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x11cc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x11cc3c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x11cc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11cc40: 0xae2300a4  sw          $v1, 0xA4($s1)
    ctx->pc = 0x11cc40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 3));
    // 0x11cc44: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x11cc44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x11cc48: 0x8e2300a4  lw          $v1, 0xA4($s1)
    ctx->pc = 0x11cc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x11cc4c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x11cc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11cc50: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x11cc50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x11cc54: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
    ctx->pc = 0x11CC54u;
    {
        const bool branch_taken_0x11cc54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cc54) {
            ctx->pc = 0x11CD40u;
            goto label_11cd40;
        }
    }
    ctx->pc = 0x11CC5Cu;
    // 0x11cc5c: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x11cc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x11cc60: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x11cc60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x11cc64: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x11CC64u;
    {
        const bool branch_taken_0x11cc64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cc64) {
            ctx->pc = 0x11CC9Cu;
            goto label_11cc9c;
        }
    }
    ctx->pc = 0x11CC6Cu;
    // 0x11cc6c: 0x8e230094  lw          $v1, 0x94($s1)
    ctx->pc = 0x11cc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x11cc70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11cc70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cc74: 0x8e2200ac  lw          $v0, 0xAC($s1)
    ctx->pc = 0x11cc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x11cc78: 0x26240424  addiu       $a0, $s1, 0x424
    ctx->pc = 0x11cc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1060));
    // 0x11cc7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11cc7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cc80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11cc80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cc84: 0xc047bec  jal         func_11EFB0
    ctx->pc = 0x11CC84u;
    SET_GPR_U32(ctx, 31, 0x11CC8Cu);
    ctx->pc = 0x11CC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CC84u;
    // 0x11cc88: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EFB0u, 0x11CC84u, 0x11CC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CC8Cu;
label_11cc8c:
    // 0x11cc8c: 0x8e2300ac  lw          $v1, 0xAC($s1)
    ctx->pc = 0x11cc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x11cc90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11cc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11cc94: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x11CC94u;
    {
        const bool branch_taken_0x11cc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC94u;
        // 0x11cc98: 0xae2300ac  sw          $v1, 0xAC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc94) {
            ctx->pc = 0x11CD40u;
            goto label_11cd40;
        }
    }
    ctx->pc = 0x11CC9Cu;
label_11cc9c:
    // 0x11cc9c: 0x0  nop
    ctx->pc = 0x11cc9cu;
    // NOP
    // 0x11cca0: 0x8e2600ac  lw          $a2, 0xAC($s1)
    ctx->pc = 0x11cca0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x11cca4: 0x3c01000f  lui         $at, 0xF
    ctx->pc = 0x11cca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15 << 16));
    // 0x11cca8: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x11cca8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x11ccac: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x11CCACu;
    {
        const bool branch_taken_0x11ccac = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x11CCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CCACu;
        // 0x11ccb0: 0xc12024  and         $a0, $a2, $at (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ccac) {
            ctx->pc = 0x11CCC0u;
            goto label_11ccc0;
        }
    }
    ctx->pc = 0x11CCB4u;
    // 0x11ccb4: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11CCB4u;
    {
        const bool branch_taken_0x11ccb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ccb4) {
            ctx->pc = 0x11CCC0u;
            goto label_11ccc0;
        }
    }
    ctx->pc = 0x11CCBCu;
    // 0x11ccbc: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x11ccbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_11ccc0:
    // 0x11ccc0: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x11ccc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x11ccc4: 0x8e270094  lw          $a3, 0x94($s1)
    ctx->pc = 0x11ccc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x11ccc8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x11ccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x11cccc: 0x203082a  slt         $at, $s0, $v1
    ctx->pc = 0x11ccccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11ccd0: 0xe42821  addu        $a1, $a3, $a0
    ctx->pc = 0x11ccd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x11ccd4: 0x61800a  movz        $s0, $v1, $at
    ctx->pc = 0x11ccd4u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x11ccd8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11CCD8u;
    {
        const bool branch_taken_0x11ccd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ccd8) {
            ctx->pc = 0x11CCFCu;
            goto label_11ccfc;
        }
    }
    ctx->pc = 0x11CCE0u;
    // 0x11cce0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11cce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cce4: 0x26240424  addiu       $a0, $s1, 0x424
    ctx->pc = 0x11cce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1060));
    // 0x11cce8: 0xc047bec  jal         func_11EFB0
    ctx->pc = 0x11CCE8u;
    SET_GPR_U32(ctx, 31, 0x11CCF0u);
    ctx->pc = 0x11CCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CCE8u;
    // 0x11ccec: 0x3c080010  lui         $t0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EFB0u, 0x11CCE8u, 0x11CCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CCF0u;
label_11ccf0:
    // 0x11ccf0: 0x8e2300ac  lw          $v1, 0xAC($s1)
    ctx->pc = 0x11ccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x11ccf4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11ccf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11ccf8: 0xae2300ac  sw          $v1, 0xAC($s1)
    ctx->pc = 0x11ccf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 3));
label_11ccfc:
    // 0x11ccfc: 0x0  nop
    ctx->pc = 0x11ccfcu;
    // NOP
    // 0x11cd00: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x11cd00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x11cd04: 0x8e2300a4  lw          $v1, 0xA4($s1)
    ctx->pc = 0x11cd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x11cd08: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x11cd08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x11cd0c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x11cd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11cd10: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x11cd10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x11cd14: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x11CD14u;
    {
        const bool branch_taken_0x11cd14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cd14) {
            ctx->pc = 0x11CD40u;
            goto label_11cd40;
        }
    }
    ctx->pc = 0x11CD1Cu;
    // 0x11cd1c: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x11cd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x11cd20: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x11cd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x11cd24: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x11cd24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x11cd28: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11CD28u;
    {
        const bool branch_taken_0x11cd28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11cd28) {
            ctx->pc = 0x11CD40u;
            goto label_11cd40;
        }
    }
    ctx->pc = 0x11CD30u;
    // 0x11cd30: 0xc04705c  jal         func_11C170
    ctx->pc = 0x11CD30u;
    SET_GPR_U32(ctx, 31, 0x11CD38u);
    ctx->pc = 0x11CD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CD30u;
    // 0x11cd34: 0x262400e4  addiu       $a0, $s1, 0xE4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 228));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C170u, 0x11CD30u, 0x11CD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CD38u;
label_11cd38:
    // 0x11cd38: 0x10000113  b           . + 4 + (0x113 << 2)
    ctx->pc = 0x11CD38u;
    {
        const bool branch_taken_0x11cd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cd38) {
            ctx->pc = 0x11D188u;
            goto label_11d188;
        }
    }
    ctx->pc = 0x11CD40u;
label_11cd40:
    // 0x11cd40: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x11cd40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x11cd44: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x11cd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x11cd48: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11CD48u;
    {
        const bool branch_taken_0x11cd48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x11CD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CD48u;
        // 0x11cd4c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cd48) {
            ctx->pc = 0x11CD5Cu;
            goto label_11cd5c;
        }
    }
    ctx->pc = 0x11CD50u;
    // 0x11cd50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11CD50u;
    {
        const bool branch_taken_0x11cd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CD50u;
        // 0x11cd54: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cd50) {
            ctx->pc = 0x11CD5Cu;
            goto label_11cd5c;
        }
    }
    ctx->pc = 0x11CD58u;
    // 0x11cd58: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x11cd58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11cd5c:
    // 0x11cd5c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11CD5Cu;
    {
        const bool branch_taken_0x11cd5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11cd5c) {
            ctx->pc = 0x11CD7Cu;
            goto label_11cd7c;
        }
    }
    ctx->pc = 0x11CD64u;
    // 0x11cd64: 0xc0470e4  jal         func_11C390
    ctx->pc = 0x11CD64u;
    SET_GPR_U32(ctx, 31, 0x11CD6Cu);
    ctx->pc = 0x11CD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CD64u;
    // 0x11cd68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C390u, 0x11CD64u, 0x11CD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CD6Cu;
label_11cd6c:
    // 0x11cd6c: 0xc075314  jal         func_1D4C50
    ctx->pc = 0x11CD6Cu;
    SET_GPR_U32(ctx, 31, 0x11CD74u);
    ctx->pc = 0x11CD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CD6Cu;
    // 0x11cd70: 0x26240108  addiu       $a0, $s1, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4C50u, 0x11CD6Cu, 0x11CD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CD74u;
label_11cd74:
    // 0x11cd74: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x11CD74u;
    {
        const bool branch_taken_0x11cd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cd74) {
            ctx->pc = 0x11D188u;
            goto label_11d188;
        }
    }
    ctx->pc = 0x11CD7Cu;
label_11cd7c:
    // 0x11cd7c: 0x0  nop
    ctx->pc = 0x11cd7cu;
    // NOP
    // 0x11cd80: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x11cd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x11cd84: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11CD84u;
    {
        const bool branch_taken_0x11cd84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11cd84) {
            ctx->pc = 0x11CD98u;
            goto label_11cd98;
        }
    }
    ctx->pc = 0x11CD8Cu;
    // 0x11cd8c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x11cd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11cd90: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x11CD90u;
    {
        const bool branch_taken_0x11cd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CD90u;
        // 0x11cd94: 0xae230048  sw          $v1, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cd90) {
            ctx->pc = 0x11D188u;
            goto label_11d188;
        }
    }
    ctx->pc = 0x11CD98u;
label_11cd98:
    // 0x11cd98: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CD98u;
    {
        const bool branch_taken_0x11cd98 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x11cd98) {
            ctx->pc = 0x11CDA8u;
            goto label_11cda8;
        }
    }
    ctx->pc = 0x11CDA0u;
    // 0x11cda0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x11cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x11cda4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x11cda4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_11cda8:
    // 0x11cda8: 0xc047be8  jal         func_11EFA0
    ctx->pc = 0x11CDA8u;
    SET_GPR_U32(ctx, 31, 0x11CDB0u);
    ctx->pc = 0x11CDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CDA8u;
    // 0x11cdac: 0x26240424  addiu       $a0, $s1, 0x424 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1060));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EFA0u, 0x11CDA8u, 0x11CDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CDB0u;
label_11cdb0:
    // 0x11cdb0: 0x8e300338  lw          $s0, 0x338($s1)
    ctx->pc = 0x11cdb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x11cdb4: 0xc07512c  jal         func_1D44B0
    ctx->pc = 0x11CDB4u;
    SET_GPR_U32(ctx, 31, 0x11CDBCu);
    ctx->pc = 0x11CDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CDB4u;
    // 0x11cdb8: 0x26240108  addiu       $a0, $s1, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D44B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D44B0u, 0x11CDB4u, 0x11CDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CDBCu;
label_11cdbc:
    // 0x11cdbc: 0xc0752de  jal         func_1D4B78
    ctx->pc = 0x11CDBCu;
    SET_GPR_U32(ctx, 31, 0x11CDC4u);
    ctx->pc = 0x11CDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CDBCu;
    // 0x11cdc0: 0x26240108  addiu       $a0, $s1, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4B78u, 0x11CDBCu, 0x11CDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CDC4u;
label_11cdc4:
    // 0x11cdc4: 0xae200098  sw          $zero, 0x98($s1)
    ctx->pc = 0x11cdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
    // 0x11cdc8: 0x26240108  addiu       $a0, $s1, 0x108
    ctx->pc = 0x11cdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    // 0x11cdcc: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x11cdccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
    // 0x11cdd0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x11cdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11cdd4: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x11cdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
    // 0x11cdd8: 0xae2000a4  sw          $zero, 0xA4($s1)
    ctx->pc = 0x11cdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
    // 0x11cddc: 0xae2000ac  sw          $zero, 0xAC($s1)
    ctx->pc = 0x11cddcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
    // 0x11cde0: 0xae2000b8  sw          $zero, 0xB8($s1)
    ctx->pc = 0x11cde0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
    // 0x11cde4: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x11cde4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
    // 0x11cde8: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x11cde8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
    // 0x11cdec: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x11cdecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
    // 0x11cdf0: 0xae2000c0  sw          $zero, 0xC0($s1)
    ctx->pc = 0x11cdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 0));
    // 0x11cdf4: 0xae2000c4  sw          $zero, 0xC4($s1)
    ctx->pc = 0x11cdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
    // 0x11cdf8: 0xae200084  sw          $zero, 0x84($s1)
    ctx->pc = 0x11cdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
    // 0x11cdfc: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x11cdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
    // 0x11ce00: 0xc074e36  jal         func_1D38D8
    ctx->pc = 0x11CE00u;
    SET_GPR_U32(ctx, 31, 0x11CE08u);
    ctx->pc = 0x11CE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CE00u;
    // 0x11ce04: 0xae20007c  sw          $zero, 0x7C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D38D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D38D8u, 0x11CE00u, 0x11CE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CE08u;
label_11ce08:
    // 0x11ce08: 0x822203ec  lb          $v0, 0x3EC($s1)
    ctx->pc = 0x11ce08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1004)));
    // 0x11ce0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11CE0Cu;
    {
        const bool branch_taken_0x11ce0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11ce0c) {
            ctx->pc = 0x11CE20u;
            goto label_11ce20;
        }
    }
    ctx->pc = 0x11CE14u;
    // 0x11ce14: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x11ce14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x11ce18: 0x8e2203e8  lw          $v0, 0x3E8($s1)
    ctx->pc = 0x11ce18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1000)));
    // 0x11ce1c: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x11ce1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
label_11ce20:
    // 0x11ce20: 0x8e2503e8  lw          $a1, 0x3E8($s1)
    ctx->pc = 0x11ce20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1000)));
    // 0x11ce24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11ce24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce28: 0x26240108  addiu       $a0, $s1, 0x108
    ctx->pc = 0x11ce28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    // 0x11ce2c: 0x24074000  addiu       $a3, $zero, 0x4000
    ctx->pc = 0x11ce2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x11ce30: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x11ce30u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
    // 0x11ce34: 0xc074f10  jal         func_1D3C40
    ctx->pc = 0x11CE34u;
    SET_GPR_U32(ctx, 31, 0x11CE3Cu);
    ctx->pc = 0x11CE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CE34u;
    // 0x11ce38: 0x24092000  addiu       $t1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3C40u, 0x11CE34u, 0x11CE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CE3Cu;
label_11ce3c:
    // 0x11ce3c: 0x26240108  addiu       $a0, $s1, 0x108
    ctx->pc = 0x11ce3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    // 0x11ce40: 0xc074f7a  jal         func_1D3DE8
    ctx->pc = 0x11CE40u;
    SET_GPR_U32(ctx, 31, 0x11CE48u);
    ctx->pc = 0x11CE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CE40u;
    // 0x11ce44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3DE8u, 0x11CE40u, 0x11CE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CE48u;
label_11ce48:
    // 0x11ce48: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x11CE48u;
    SET_GPR_U32(ctx, 31, 0x11CE50u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x11CE48u, 0x11CE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CE50u;
label_11ce50:
    // 0x11ce50: 0xc082cf4  jal         func_20B3D0
    ctx->pc = 0x11CE50u;
    SET_GPR_U32(ctx, 31, 0x11CE58u);
    ctx->pc = 0x11CE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CE50u;
    // 0x11ce54: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B3D0u, 0x11CE50u, 0x11CE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CE58u;
label_11ce58:
    // 0x11ce58: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x11ce58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x11ce5c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x11ce5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x11ce60: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x11ce60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x11ce64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11ce64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce68: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11ce68u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 3));
    // 0x11ce6c: 0xc082cbc  jal         func_20B2F0
    ctx->pc = 0x11CE6Cu;
    SET_GPR_U32(ctx, 31, 0x11CE74u);
    ctx->pc = 0x11CE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CE6Cu;
    // 0x11ce70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B2F0u, 0x11CE6Cu, 0x11CE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CE74u;
label_11ce74:
    // 0x11ce74: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x11ce74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x11ce78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11ce78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11ce7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ce80: 0xc082cbc  jal         func_20B2F0
    ctx->pc = 0x11CE80u;
    SET_GPR_U32(ctx, 31, 0x11CE88u);
    ctx->pc = 0x11CE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CE80u;
    // 0x11ce84: 0xac202000  sw          $zero, 0x2000($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8192), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B2F0u, 0x11CE80u, 0x11CE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CE88u;
label_11ce88:
    // 0x11ce88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11ce88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ce8c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11ce8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11ce90: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x11ce90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
    // 0x11ce94: 0x24020105  addiu       $v0, $zero, 0x105
    ctx->pc = 0x11ce94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x11ce98: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x11ce98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x11ce9c: 0x262400e4  addiu       $a0, $s1, 0xE4
    ctx->pc = 0x11ce9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 228));
    // 0x11cea0: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x11cea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x11cea4: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x11cea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x11cea8: 0xac23b430  sw          $v1, -0x4BD0($at)
    ctx->pc = 0x11cea8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947888), GPR_U32(ctx, 3));
    // 0x11ceac: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11ceacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11ceb0: 0xac20b420  sw          $zero, -0x4BE0($at)
    ctx->pc = 0x11ceb0u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0));
    // 0x11ceb4: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11ceb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11ceb8: 0xac22b400  sw          $v0, -0x4C00($at)
    ctx->pc = 0x11ceb8u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 2));
    // 0x11cebc: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x11cebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x11cec0: 0xc04705c  jal         func_11C170
    ctx->pc = 0x11CEC0u;
    SET_GPR_U32(ctx, 31, 0x11CEC8u);
    ctx->pc = 0x11CEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CEC0u;
    // 0x11cec4: 0xac202010  sw          $zero, 0x2010($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C170u, 0x11CEC0u, 0x11CEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CEC8u;
label_11cec8:
    // 0x11cec8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CEC8u;
    {
        const bool branch_taken_0x11cec8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cec8) {
            ctx->pc = 0x11CED8u;
            goto label_11ced8;
        }
    }
    ctx->pc = 0x11CED0u;
    // 0x11ced0: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x11CED0u;
    SET_GPR_U32(ctx, 31, 0x11CED8u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x11CED0u, 0x11CED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CED8u;
label_11ced8:
    // 0x11ced8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x11ced8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11cedc: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x11CEDCu;
    {
        const bool branch_taken_0x11cedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CEDCu;
        // 0x11cee0: 0xae230048  sw          $v1, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cedc) {
            ctx->pc = 0x11D188u;
            goto label_11d188;
        }
    }
    ctx->pc = 0x11CEE4u;
label_11cee4:
    // 0x11cee4: 0x0  nop
    ctx->pc = 0x11cee4u;
    // NOP
    // 0x11cee8: 0xc082c68  jal         func_20B1A0
    ctx->pc = 0x11CEE8u;
    SET_GPR_U32(ctx, 31, 0x11CEF0u);
    ctx->pc = 0x11CEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CEE8u;
    // 0x11ceec: 0x262400e4  addiu       $a0, $s1, 0xE4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 228));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B1A0u, 0x11CEE8u, 0x11CEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CEF0u;
label_11cef0:
    // 0x11cef0: 0xc082586  jal         func_209618
    ctx->pc = 0x11CEF0u;
    SET_GPR_U32(ctx, 31, 0x11CEF8u);
    ctx->pc = 0x11CEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CEF0u;
    // 0x11cef4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209618u, 0x11CEF0u, 0x11CEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CEF8u;
label_11cef8:
    // 0x11cef8: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x11cef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x11cefc: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x11cefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x11cf00: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x11cf00u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11cf04: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x11cf04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x11cf08: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CF08u;
    {
        const bool branch_taken_0x11cf08 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x11CF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CF08u;
        // 0x11cf0c: 0x41943  sra         $v1, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf08) {
            ctx->pc = 0x11CF18u;
            goto label_11cf18;
        }
    }
    ctx->pc = 0x11CF10u;
    // 0x11cf10: 0x2483001f  addiu       $v1, $a0, 0x1F
    ctx->pc = 0x11cf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x11cf14: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x11cf14u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_11cf18:
    // 0x11cf18: 0x324c0  sll         $a0, $v1, 19
    ctx->pc = 0x11cf18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
    // 0x11cf1c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x11cf1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x11cf20: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x11cf20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x11cf24: 0x8e2200c8  lw          $v0, 0xC8($s1)
    ctx->pc = 0x11cf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x11cf28: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x11cf28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11cf2c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x11cf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11cf30: 0xae2200a4  sw          $v0, 0xA4($s1)
    ctx->pc = 0x11cf30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
    // 0x11cf34: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x11cf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x11cf38: 0x8e2200a4  lw          $v0, 0xA4($s1)
    ctx->pc = 0x11cf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x11cf3c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x11cf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11cf40: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x11cf40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x11cf44: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x11CF44u;
    {
        const bool branch_taken_0x11cf44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cf44) {
            ctx->pc = 0x11CF7Cu;
            goto label_11cf7c;
        }
    }
    ctx->pc = 0x11CF4Cu;
    // 0x11cf4c: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x11cf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x11cf50: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x11cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x11cf54: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11CF54u;
    {
        const bool branch_taken_0x11cf54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11cf54) {
            ctx->pc = 0x11CF7Cu;
            goto label_11cf7c;
        }
    }
    ctx->pc = 0x11CF5Cu;
    // 0x11cf5c: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x11cf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x11cf60: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11cf60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11cf64: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11CF64u;
    {
        const bool branch_taken_0x11cf64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11cf64) {
            ctx->pc = 0x11CF7Cu;
            goto label_11cf7c;
        }
    }
    ctx->pc = 0x11CF6Cu;
    // 0x11cf6c: 0xc04705c  jal         func_11C170
    ctx->pc = 0x11CF6Cu;
    SET_GPR_U32(ctx, 31, 0x11CF74u);
    ctx->pc = 0x11CF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CF6Cu;
    // 0x11cf70: 0x262400e4  addiu       $a0, $s1, 0xE4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 228));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C170u, 0x11CF6Cu, 0x11CF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CF74u;
label_11cf74:
    // 0x11cf74: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x11CF74u;
    {
        const bool branch_taken_0x11cf74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cf74) {
            ctx->pc = 0x11D188u;
            goto label_11d188;
        }
    }
    ctx->pc = 0x11CF7Cu;
label_11cf7c:
    // 0x11cf7c: 0x0  nop
    ctx->pc = 0x11cf7cu;
    // NOP
    // 0x11cf80: 0xc0470e4  jal         func_11C390
    ctx->pc = 0x11CF80u;
    SET_GPR_U32(ctx, 31, 0x11CF88u);
    ctx->pc = 0x11CF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CF80u;
    // 0x11cf84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C390u, 0x11CF80u, 0x11CF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CF88u;
label_11cf88:
    // 0x11cf88: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x11cf88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x11cf8c: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x11cf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x11cf90: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11CF90u;
    {
        const bool branch_taken_0x11cf90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x11CF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CF90u;
        // 0x11cf94: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf90) {
            ctx->pc = 0x11CFA4u;
            goto label_11cfa4;
        }
    }
    ctx->pc = 0x11CF98u;
    // 0x11cf98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11CF98u;
    {
        const bool branch_taken_0x11cf98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CF98u;
        // 0x11cf9c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf98) {
            ctx->pc = 0x11CFA4u;
            goto label_11cfa4;
        }
    }
    ctx->pc = 0x11CFA0u;
    // 0x11cfa0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x11cfa0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11cfa4:
    // 0x11cfa4: 0x10600078  beqz        $v1, . + 4 + (0x78 << 2)
    ctx->pc = 0x11CFA4u;
    {
        const bool branch_taken_0x11cfa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cfa4) {
            ctx->pc = 0x11D188u;
            goto label_11d188;
        }
    }
    ctx->pc = 0x11CFACu;
    // 0x11cfac: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x11cfacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x11cfb0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11CFB0u;
    {
        const bool branch_taken_0x11cfb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11cfb0) {
            ctx->pc = 0x11CFC4u;
            goto label_11cfc4;
        }
    }
    ctx->pc = 0x11CFB8u;
    // 0x11cfb8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x11cfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11cfbc: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x11CFBCu;
    {
        const bool branch_taken_0x11cfbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CFBCu;
        // 0x11cfc0: 0xae230048  sw          $v1, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cfbc) {
            ctx->pc = 0x11D188u;
            goto label_11d188;
        }
    }
    ctx->pc = 0x11CFC4u;
label_11cfc4:
    // 0x11cfc4: 0x0  nop
    ctx->pc = 0x11cfc4u;
    // NOP
    // 0x11cfc8: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CFC8u;
    {
        const bool branch_taken_0x11cfc8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x11cfc8) {
            ctx->pc = 0x11CFD8u;
            goto label_11cfd8;
        }
    }
    ctx->pc = 0x11CFD0u;
    // 0x11cfd0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x11cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x11cfd4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x11cfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_11cfd8:
    // 0x11cfd8: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x11cfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x11cfdc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11cfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11cfe0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11CFE0u;
    {
        const bool branch_taken_0x11cfe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11cfe0) {
            ctx->pc = 0x11CFF4u;
            goto label_11cff4;
        }
    }
    ctx->pc = 0x11CFE8u;
    // 0x11cfe8: 0xae200084  sw          $zero, 0x84($s1)
    ctx->pc = 0x11cfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
    // 0x11cfec: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x11cfecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
    // 0x11cff0: 0xae20007c  sw          $zero, 0x7C($s1)
    ctx->pc = 0x11cff0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
label_11cff4:
    // 0x11cff4: 0x0  nop
    ctx->pc = 0x11cff4u;
    // NOP
    // 0x11cff8: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x11CFF8u;
    SET_GPR_U32(ctx, 31, 0x11D000u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x11CFF8u, 0x11D000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D000u;
label_11d000:
    // 0x11d000: 0xc082cf4  jal         func_20B3D0
    ctx->pc = 0x11D000u;
    SET_GPR_U32(ctx, 31, 0x11D008u);
    ctx->pc = 0x11D004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D000u;
    // 0x11d004: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B3D0u, 0x11D000u, 0x11D008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D008u;
label_11d008:
    // 0x11d008: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x11d008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x11d00c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x11d00cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x11d010: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x11d010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x11d014: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11d014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d018: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11d018u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 3));
    // 0x11d01c: 0xc082cbc  jal         func_20B2F0
    ctx->pc = 0x11D01Cu;
    SET_GPR_U32(ctx, 31, 0x11D024u);
    ctx->pc = 0x11D020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D01Cu;
    // 0x11d020: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B2F0u, 0x11D01Cu, 0x11D024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D024u;
label_11d024:
    // 0x11d024: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x11d024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x11d028: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11d028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d02c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11d02cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d030: 0xc082cbc  jal         func_20B2F0
    ctx->pc = 0x11D030u;
    SET_GPR_U32(ctx, 31, 0x11D038u);
    ctx->pc = 0x11D034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D030u;
    // 0x11d034: 0xac202000  sw          $zero, 0x2000($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8192), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B2F0u, 0x11D030u, 0x11D038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D038u;
label_11d038:
    // 0x11d038: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11d038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d03c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11d03cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11d040: 0xae230068  sw          $v1, 0x68($s1)
    ctx->pc = 0x11d040u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 3));
    // 0x11d044: 0x24020105  addiu       $v0, $zero, 0x105
    ctx->pc = 0x11d044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x11d048: 0x8e2300cc  lw          $v1, 0xCC($s1)
    ctx->pc = 0x11d048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x11d04c: 0x262400e4  addiu       $a0, $s1, 0xE4
    ctx->pc = 0x11d04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 228));
    // 0x11d050: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x11d050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x11d054: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x11d054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x11d058: 0xac23b430  sw          $v1, -0x4BD0($at)
    ctx->pc = 0x11d058u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947888), GPR_U32(ctx, 3));
    // 0x11d05c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11d05cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11d060: 0xac20b420  sw          $zero, -0x4BE0($at)
    ctx->pc = 0x11d060u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0));
    // 0x11d064: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x11d064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x11d068: 0xac22b400  sw          $v0, -0x4C00($at)
    ctx->pc = 0x11d068u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 2));
    // 0x11d06c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x11d06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x11d070: 0xc04705c  jal         func_11C170
    ctx->pc = 0x11D070u;
    SET_GPR_U32(ctx, 31, 0x11D078u);
    ctx->pc = 0x11D074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D070u;
    // 0x11d074: 0xac202010  sw          $zero, 0x2010($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C170u, 0x11D070u, 0x11D078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D078u;
label_11d078:
    // 0x11d078: 0x12000043  beqz        $s0, . + 4 + (0x43 << 2)
    ctx->pc = 0x11D078u;
    {
        const bool branch_taken_0x11d078 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d078) {
            ctx->pc = 0x11D188u;
            goto label_11d188;
        }
    }
    ctx->pc = 0x11D080u;
    // 0x11d080: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x11D080u;
    SET_GPR_U32(ctx, 31, 0x11D088u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x11D080u, 0x11D088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D088u;
label_11d088:
    // 0x11d088: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x11D088u;
    {
        const bool branch_taken_0x11d088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d088) {
            ctx->pc = 0x11D188u;
            goto label_11d188;
        }
    }
    ctx->pc = 0x11D090u;
label_11d090:
    // 0x11d090: 0xc075314  jal         func_1D4C50
    ctx->pc = 0x11D090u;
    SET_GPR_U32(ctx, 31, 0x11D098u);
    ctx->pc = 0x11D094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D090u;
    // 0x11d094: 0x26240108  addiu       $a0, $s1, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4C50u, 0x11D090u, 0x11D098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D098u;
label_11d098:
    // 0x11d098: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x11d098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x11d09c: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x11D09Cu;
    {
        const bool branch_taken_0x11d09c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d09c) {
            ctx->pc = 0x11D188u;
            goto label_11d188;
        }
    }
    ctx->pc = 0x11D0A4u;
    // 0x11d0a4: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x11d0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x11d0a8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11D0A8u;
    {
        const bool branch_taken_0x11d0a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d0a8) {
            ctx->pc = 0x11D0BCu;
            goto label_11d0bc;
        }
    }
    ctx->pc = 0x11D0B0u;
    // 0x11d0b0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x11d0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11d0b4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x11D0B4u;
    {
        const bool branch_taken_0x11d0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D0B4u;
        // 0x11d0b8: 0xae230048  sw          $v1, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d0b4) {
            ctx->pc = 0x11D188u;
            goto label_11d188;
        }
    }
    ctx->pc = 0x11D0BCu;
label_11d0bc:
    // 0x11d0bc: 0x0  nop
    ctx->pc = 0x11d0bcu;
    // NOP
    // 0x11d0c0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D0C0u;
    {
        const bool branch_taken_0x11d0c0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x11d0c0) {
            ctx->pc = 0x11D0D0u;
            goto label_11d0d0;
        }
    }
    ctx->pc = 0x11D0C8u;
    // 0x11d0c8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x11d0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x11d0cc: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x11d0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_11d0d0:
    // 0x11d0d0: 0x8e300338  lw          $s0, 0x338($s1)
    ctx->pc = 0x11d0d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x11d0d4: 0xc07512c  jal         func_1D44B0
    ctx->pc = 0x11D0D4u;
    SET_GPR_U32(ctx, 31, 0x11D0DCu);
    ctx->pc = 0x11D0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D0D4u;
    // 0x11d0d8: 0x26240108  addiu       $a0, $s1, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D44B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D44B0u, 0x11D0D4u, 0x11D0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D0DCu;
label_11d0dc:
    // 0x11d0dc: 0xc0752de  jal         func_1D4B78
    ctx->pc = 0x11D0DCu;
    SET_GPR_U32(ctx, 31, 0x11D0E4u);
    ctx->pc = 0x11D0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D0DCu;
    // 0x11d0e0: 0x26240108  addiu       $a0, $s1, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4B78u, 0x11D0DCu, 0x11D0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D0E4u;
label_11d0e4:
    // 0x11d0e4: 0xae2000b8  sw          $zero, 0xB8($s1)
    ctx->pc = 0x11d0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
    // 0x11d0e8: 0x26240108  addiu       $a0, $s1, 0x108
    ctx->pc = 0x11d0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    // 0x11d0ec: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x11d0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
    // 0x11d0f0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x11d0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11d0f4: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x11d0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
    // 0x11d0f8: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x11d0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
    // 0x11d0fc: 0xae2000c0  sw          $zero, 0xC0($s1)
    ctx->pc = 0x11d0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 0));
    // 0x11d100: 0xae2000c4  sw          $zero, 0xC4($s1)
    ctx->pc = 0x11d100u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
    // 0x11d104: 0xae200084  sw          $zero, 0x84($s1)
    ctx->pc = 0x11d104u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
    // 0x11d108: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x11d108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
    // 0x11d10c: 0xc074e36  jal         func_1D38D8
    ctx->pc = 0x11D10Cu;
    SET_GPR_U32(ctx, 31, 0x11D114u);
    ctx->pc = 0x11D110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D10Cu;
    // 0x11d110: 0xae20007c  sw          $zero, 0x7C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D38D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D38D8u, 0x11D10Cu, 0x11D114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D114u;
label_11d114:
    // 0x11d114: 0x822203ec  lb          $v0, 0x3EC($s1)
    ctx->pc = 0x11d114u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1004)));
    // 0x11d118: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11D118u;
    {
        const bool branch_taken_0x11d118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d118) {
            ctx->pc = 0x11D12Cu;
            goto label_11d12c;
        }
    }
    ctx->pc = 0x11D120u;
    // 0x11d120: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x11d120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x11d124: 0x8e2203e8  lw          $v0, 0x3E8($s1)
    ctx->pc = 0x11d124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1000)));
    // 0x11d128: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x11d128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
label_11d12c:
    // 0x11d12c: 0x0  nop
    ctx->pc = 0x11d12cu;
    // NOP
    // 0x11d130: 0x8e2503e8  lw          $a1, 0x3E8($s1)
    ctx->pc = 0x11d130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1000)));
    // 0x11d134: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11d134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d138: 0x26240108  addiu       $a0, $s1, 0x108
    ctx->pc = 0x11d138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    // 0x11d13c: 0x24074000  addiu       $a3, $zero, 0x4000
    ctx->pc = 0x11d13cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x11d140: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x11d140u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
    // 0x11d144: 0xc074f10  jal         func_1D3C40
    ctx->pc = 0x11D144u;
    SET_GPR_U32(ctx, 31, 0x11D14Cu);
    ctx->pc = 0x11D148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D144u;
    // 0x11d148: 0x24092000  addiu       $t1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3C40u, 0x11D144u, 0x11D14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D14Cu;
label_11d14c:
    // 0x11d14c: 0x26240108  addiu       $a0, $s1, 0x108
    ctx->pc = 0x11d14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    // 0x11d150: 0xc074f7a  jal         func_1D3DE8
    ctx->pc = 0x11D150u;
    SET_GPR_U32(ctx, 31, 0x11D158u);
    ctx->pc = 0x11D154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D150u;
    // 0x11d154: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3DE8u, 0x11D150u, 0x11D158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D158u;
label_11d158:
    // 0x11d158: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x11D158u;
    {
        const bool branch_taken_0x11d158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D158u;
        // 0x11d15c: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d158) {
            ctx->pc = 0x11D188u;
            goto label_11d188;
        }
    }
    ctx->pc = 0x11D160u;
label_11d160:
    // 0x11d160: 0xc047158  jal         func_11C560
    ctx->pc = 0x11D160u;
    SET_GPR_U32(ctx, 31, 0x11D168u);
    ctx->pc = 0x11D164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D160u;
    // 0x11d164: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C560u, 0x11D160u, 0x11D168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D168u;
label_11d168:
    // 0x11d168: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11D168u;
    {
        const bool branch_taken_0x11d168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11d168) {
            ctx->pc = 0x11D188u;
            goto label_11d188;
        }
    }
    ctx->pc = 0x11D170u;
    // 0x11d170: 0xc0752ba  jal         func_1D4AE8
    ctx->pc = 0x11D170u;
    SET_GPR_U32(ctx, 31, 0x11D178u);
    ctx->pc = 0x11D174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D170u;
    // 0x11d174: 0x26240108  addiu       $a0, $s1, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4AE8u, 0x11D170u, 0x11D178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D178u;
label_11d178:
    // 0x11d178: 0xc075314  jal         func_1D4C50
    ctx->pc = 0x11D178u;
    SET_GPR_U32(ctx, 31, 0x11D180u);
    ctx->pc = 0x11D17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D178u;
    // 0x11d17c: 0x26240108  addiu       $a0, $s1, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4C50u, 0x11D178u, 0x11D180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D180u;
label_11d180:
    // 0x11d180: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x11d180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11d184: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x11d184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
label_11d188:
    // 0x11d188: 0x1000fd40  b           . + 4 + (-0x2C0 << 2)
    ctx->pc = 0x11D188u;
    {
        const bool branch_taken_0x11d188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D188u;
        // 0x11d18c: 0x8e310038  lw          $s1, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d188) {
            ctx->pc = 0x11C68Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11c68c;
        }
    }
    ctx->pc = 0x11D190u;
label_11d190:
    // 0x11d190: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11d190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11d194: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11d194u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11d198: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11d198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d19c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11d19cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x11D1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D1A0u;
        // 0x11d1a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D1A8u;
}
