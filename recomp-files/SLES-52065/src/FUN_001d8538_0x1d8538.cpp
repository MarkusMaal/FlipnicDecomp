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

// Function: FUN_001d8538
// Address: 0x1d8538 - 0x1d8ab8
void FUN_001d8538_0x1d8538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d8538_0x1d8538");
#endif

    switch (ctx->pc) {
        case 0x1d860cu: goto label_1d860c;
        case 0x1d8698u: goto label_1d8698;
        case 0x1d86c4u: goto label_1d86c4;
        case 0x1d86dcu: goto label_1d86dc;
        case 0x1d870cu: goto label_1d870c;
        case 0x1d8718u: goto label_1d8718;
        case 0x1d8730u: goto label_1d8730;
        case 0x1d8740u: goto label_1d8740;
        case 0x1d8748u: goto label_1d8748;
        case 0x1d87b4u: goto label_1d87b4;
        case 0x1d87d8u: goto label_1d87d8;
        case 0x1d87e0u: goto label_1d87e0;
        case 0x1d8814u: goto label_1d8814;
        case 0x1d8844u: goto label_1d8844;
        case 0x1d8868u: goto label_1d8868;
        case 0x1d8870u: goto label_1d8870;
        case 0x1d88a4u: goto label_1d88a4;
        case 0x1d88d4u: goto label_1d88d4;
        case 0x1d8920u: goto label_1d8920;
        case 0x1d8934u: goto label_1d8934;
        case 0x1d8978u: goto label_1d8978;
        case 0x1d898cu: goto label_1d898c;
        case 0x1d89a0u: goto label_1d89a0;
        case 0x1d89b0u: goto label_1d89b0;
        case 0x1d89c0u: goto label_1d89c0;
        case 0x1d89d4u: goto label_1d89d4;
        case 0x1d89e8u: goto label_1d89e8;
        case 0x1d89f8u: goto label_1d89f8;
        case 0x1d8a60u: goto label_1d8a60;
        case 0x1d8a68u: goto label_1d8a68;
        case 0x1d8a84u: goto label_1d8a84;
        case 0x1d8a88u: goto label_1d8a88;
        case 0x1d8a8cu: goto label_1d8a8c;
        default: break;
    }

    ctx->pc = 0x1d8538u;

    // 0x1d8538: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1d8538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1d853c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1d853cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1d8540: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x1d8540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x1d8544: 0x2402007e  addiu       $v0, $zero, 0x7E
    ctx->pc = 0x1d8544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x1d8548: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x1d8548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
    // 0x1d854c: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x1d854cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x1d8550: 0xffb300d8  sd          $s3, 0xD8($sp)
    ctx->pc = 0x1d8550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 19));
    // 0x1d8554: 0xffb400e0  sd          $s4, 0xE0($sp)
    ctx->pc = 0x1d8554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
    // 0x1d8558: 0xffb500e8  sd          $s5, 0xE8($sp)
    ctx->pc = 0x1d8558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 21));
    // 0x1d855c: 0xffb600f0  sd          $s6, 0xF0($sp)
    ctx->pc = 0x1d855cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 22));
    // 0x1d8560: 0xffb700f8  sd          $s7, 0xF8($sp)
    ctx->pc = 0x1d8560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 23));
    // 0x1d8564: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x1d8564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x1d8568: 0xe7b50110  swc1        $f21, 0x110($sp)
    ctx->pc = 0x1d8568u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1d856c: 0xe7b40108  swc1        $f20, 0x108($sp)
    ctx->pc = 0x1d856cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x1d8570: 0x8c85054c  lw          $a1, 0x54C($a0)
    ctx->pc = 0x1d8570u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x37054Cu));
    // 0x1d8574: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x1d8574u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x1d8578: 0x10620142  beq         $v1, $v0, . + 4 + (0x142 << 2)
    ctx->pc = 0x1D8578u;
    {
        const bool branch_taken_0x1d8578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8578u;
        // 0x1d857c: 0x2862007f  slti        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)127) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8578) {
            ctx->pc = 0x1D8A84u;
            goto label_1d8a84;
        }
    }
    ctx->pc = 0x1D8580u;
    // 0x1d8580: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8580u;
    {
        const bool branch_taken_0x1d8580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8580) {
            ctx->pc = 0x1D8584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8580u;
            // 0x1d8584: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8598u;
            goto label_1d8598;
        }
    }
    ctx->pc = 0x1D8588u;
    // 0x1d8588: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8588u;
    {
        const bool branch_taken_0x1d8588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8588u;
        // 0x1d858c: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8588) {
            ctx->pc = 0x1D85A8u;
            goto label_1d85a8;
        }
    }
    ctx->pc = 0x1D8590u;
    // 0x1d8590: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x1D8590u;
    {
        const bool branch_taken_0x1d8590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8590u;
        // 0x1d8594: 0xdfb100c8  ld          $s1, 0xC8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8590) {
            ctx->pc = 0x1D8A8Cu;
            goto label_1d8a8c;
        }
    }
    ctx->pc = 0x1D8598u;
label_1d8598:
    // 0x1d8598: 0x1062011b  beq         $v1, $v0, . + 4 + (0x11B << 2)
    ctx->pc = 0x1D8598u;
    {
        const bool branch_taken_0x1d8598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8598u;
        // 0x1d859c: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8598) {
            ctx->pc = 0x1D8A08u;
            goto label_1d8a08;
        }
    }
    ctx->pc = 0x1D85A0u;
    // 0x1d85a0: 0x1000013a  b           . + 4 + (0x13A << 2)
    ctx->pc = 0x1D85A0u;
    {
        const bool branch_taken_0x1d85a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D85A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D85A0u;
        // 0x1d85a4: 0xdfb100c8  ld          $s1, 0xC8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d85a0) {
            ctx->pc = 0x1D8A8Cu;
            goto label_1d8a8c;
        }
    }
    ctx->pc = 0x1D85A8u;
label_1d85a8:
    // 0x1d85a8: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x1d85a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1d85ac: 0x2442ff8f  addiu       $v0, $v0, -0x71
    ctx->pc = 0x1d85acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967183));
    // 0x1d85b0: 0x2c43000f  sltiu       $v1, $v0, 0xF
    ctx->pc = 0x1d85b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x1d85b4: 0x10600135  beqz        $v1, . + 4 + (0x135 << 2)
    ctx->pc = 0x1D85B4u;
    {
        const bool branch_taken_0x1d85b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D85B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D85B4u;
        // 0x1d85b8: 0xdfb100c8  ld          $s1, 0xC8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d85b4) {
            ctx->pc = 0x1D8A8Cu;
            goto label_1d8a8c;
        }
    }
    ctx->pc = 0x1D85BCu;
    // 0x1d85bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d85bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d85c0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1d85c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1d85c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d85c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d85c8: 0x8c633770  lw          $v1, 0x3770($v1)
    ctx->pc = 0x1d85c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14192)));
    // 0x1d85cc: 0x600008  jr          $v1
    ctx->pc = 0x1D85CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D85D8u: goto label_1d85d8;
            case 0x1D85F0u: goto label_1d85f0;
            case 0x1D8618u: goto label_1d8618;
            case 0x1D8630u: goto label_1d8630;
            case 0x1D8648u: goto label_1d8648;
            case 0x1D86A0u: goto label_1d86a0;
            case 0x1D86B8u: goto label_1d86b8;
            case 0x1D86D0u: goto label_1d86d0;
            case 0x1D86E8u: goto label_1d86e8;
            case 0x1D8948u: goto label_1d8948;
            case 0x1D8A84u: goto label_1d8a84;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D85CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D85D4u;
    // 0x1d85d4: 0x0  nop
    ctx->pc = 0x1d85d4u;
    // NOP
label_1d85d8:
    // 0x1d85d8: 0x8c83054c  lw          $v1, 0x54C($a0)
    ctx->pc = 0x1d85d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1356)));
    // 0x1d85dc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d85dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d85e0: 0x8c440548  lw          $a0, 0x548($v0)
    ctx->pc = 0x1d85e0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x370548u));
    // 0x1d85e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d85e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d85e8: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x1D85E8u;
    {
        const bool branch_taken_0x1d85e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D85ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D85E8u;
        // 0x1d85ec: 0x90660003  lbu         $a2, 0x3($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d85e8) {
            ctx->pc = 0x1D8A60u;
            goto label_1d8a60;
        }
    }
    ctx->pc = 0x1D85F0u;
label_1d85f0:
    // 0x1d85f0: 0x8c83054c  lw          $v1, 0x54C($a0)
    ctx->pc = 0x1d85f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1356)));
    // 0x1d85f4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d85f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d85f8: 0x8c440548  lw          $a0, 0x548($v0)
    ctx->pc = 0x1d85f8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x370548u));
    // 0x1d85fc: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1d85fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1d8600: 0x90670004  lbu         $a3, 0x4($v1)
    ctx->pc = 0x1d8600u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d8604: 0xc075674  jal         func_1D59D0
    ctx->pc = 0x1D8604u;
    SET_GPR_U32(ctx, 31, 0x1D860Cu);
    ctx->pc = 0x1D8608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8604u;
    // 0x1d8608: 0x90660003  lbu         $a2, 0x3($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59D0u, 0x1D8604u, 0x1D860Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D860Cu;
label_1d860c:
    // 0x1d860c: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x1D860Cu;
    {
        const bool branch_taken_0x1d860c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D860Cu;
        // 0x1d8610: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d860c) {
            ctx->pc = 0x1D8A88u;
            goto label_1d8a88;
        }
    }
    ctx->pc = 0x1D8614u;
    // 0x1d8614: 0x0  nop
    ctx->pc = 0x1d8614u;
    // NOP
label_1d8618:
    // 0x1d8618: 0x8c83054c  lw          $v1, 0x54C($a0)
    ctx->pc = 0x1d8618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1356)));
    // 0x1d861c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d861cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d8620: 0x8c440548  lw          $a0, 0x548($v0)
    ctx->pc = 0x1d8620u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x370548u));
    // 0x1d8624: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d8624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d8628: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x1D8628u;
    {
        const bool branch_taken_0x1d8628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8628u;
        // 0x1d862c: 0x90660003  lbu         $a2, 0x3($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8628) {
            ctx->pc = 0x1D8A60u;
            goto label_1d8a60;
        }
    }
    ctx->pc = 0x1D8630u;
label_1d8630:
    // 0x1d8630: 0x8c83054c  lw          $v1, 0x54C($a0)
    ctx->pc = 0x1d8630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1356)));
    // 0x1d8634: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d8634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d8638: 0x8c440548  lw          $a0, 0x548($v0)
    ctx->pc = 0x1d8638u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x370548u));
    // 0x1d863c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1d863cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d8640: 0x10000107  b           . + 4 + (0x107 << 2)
    ctx->pc = 0x1D8640u;
    {
        const bool branch_taken_0x1d8640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8640u;
        // 0x1d8644: 0x90660003  lbu         $a2, 0x3($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8640) {
            ctx->pc = 0x1D8A60u;
            goto label_1d8a60;
        }
    }
    ctx->pc = 0x1D8648u;
label_1d8648:
    // 0x1d8648: 0x8c88054c  lw          $t0, 0x54C($a0)
    ctx->pc = 0x1d8648u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1356)));
    // 0x1d864c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d864cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d8650: 0x8c440548  lw          $a0, 0x548($v0)
    ctx->pc = 0x1d8650u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x370548u));
    // 0x1d8654: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x1d8654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1d8658: 0x91090004  lbu         $t1, 0x4($t0)
    ctx->pc = 0x1d8658u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1d865c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d865cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8660: 0x91020003  lbu         $v0, 0x3($t0)
    ctx->pc = 0x1d8660u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x1d8664: 0x91060005  lbu         $a2, 0x5($t0)
    ctx->pc = 0x1d8664u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5)));
    // 0x1d8668: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1d8668u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
    // 0x1d866c: 0x91030006  lbu         $v1, 0x6($t0)
    ctx->pc = 0x1d866cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x1d8670: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x1d8670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x1d8674: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1d8674u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1d8678: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x1d8678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x1d867c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1d867cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1d8680: 0x30c600f0  andi        $a2, $a2, 0xF0
    ctx->pc = 0x1d8680u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)240);
    // 0x1d8684: 0x31290f00  andi        $t1, $t1, 0xF00
    ctx->pc = 0x1d8684u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3840);
    // 0x1d8688: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d8688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d868c: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x1d868cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x1d8690: 0xc075674  jal         func_1D59D0
    ctx->pc = 0x1D8690u;
    SET_GPR_U32(ctx, 31, 0x1D8698u);
    ctx->pc = 0x1D8694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8690u;
    // 0x1d8694: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59D0u, 0x1D8690u, 0x1D8698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8698u;
label_1d8698:
    // 0x1d8698: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x1D8698u;
    {
        const bool branch_taken_0x1d8698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8698u;
        // 0x1d869c: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8698) {
            ctx->pc = 0x1D8A88u;
            goto label_1d8a88;
        }
    }
    ctx->pc = 0x1D86A0u;
label_1d86a0:
    // 0x1d86a0: 0x8c83054c  lw          $v1, 0x54C($a0)
    ctx->pc = 0x1d86a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1356)));
    // 0x1d86a4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d86a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d86a8: 0x8c440548  lw          $a0, 0x548($v0)
    ctx->pc = 0x1d86a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x370548u));
    // 0x1d86ac: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x1d86acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1d86b0: 0x100000eb  b           . + 4 + (0xEB << 2)
    ctx->pc = 0x1D86B0u;
    {
        const bool branch_taken_0x1d86b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D86B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D86B0u;
        // 0x1d86b4: 0x90660003  lbu         $a2, 0x3($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d86b0) {
            ctx->pc = 0x1D8A60u;
            goto label_1d8a60;
        }
    }
    ctx->pc = 0x1D86B8u;
label_1d86b8:
    // 0x1d86b8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d86b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d86bc: 0xc0753e2  jal         func_1D4F88
    ctx->pc = 0x1D86BCu;
    SET_GPR_U32(ctx, 31, 0x1D86C4u);
    ctx->pc = 0x1D86C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D86BCu;
    // 0x1d86c0: 0x8c440548  lw          $a0, 0x548($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4F88u, 0x1D86BCu, 0x1D86C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D86C4u;
label_1d86c4:
    // 0x1d86c4: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x1D86C4u;
    {
        const bool branch_taken_0x1d86c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D86C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D86C4u;
        // 0x1d86c8: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d86c4) {
            ctx->pc = 0x1D8A88u;
            goto label_1d8a88;
        }
    }
    ctx->pc = 0x1D86CCu;
    // 0x1d86cc: 0x0  nop
    ctx->pc = 0x1d86ccu;
    // NOP
label_1d86d0:
    // 0x1d86d0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d86d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d86d4: 0xc0753be  jal         func_1D4EF8
    ctx->pc = 0x1D86D4u;
    SET_GPR_U32(ctx, 31, 0x1D86DCu);
    ctx->pc = 0x1D86D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D86D4u;
    // 0x1d86d8: 0x8c440548  lw          $a0, 0x548($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4EF8u, 0x1D86D4u, 0x1D86DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D86DCu;
label_1d86dc:
    // 0x1d86dc: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x1D86DCu;
    {
        const bool branch_taken_0x1d86dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D86E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D86DCu;
        // 0x1d86e0: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d86dc) {
            ctx->pc = 0x1D8A88u;
            goto label_1d8a88;
        }
    }
    ctx->pc = 0x1D86E4u;
    // 0x1d86e4: 0x0  nop
    ctx->pc = 0x1d86e4u;
    // NOP
label_1d86e8:
    // 0x1d86e8: 0x8c82054c  lw          $v0, 0x54C($a0)
    ctx->pc = 0x1d86e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1356)));
    // 0x1d86ec: 0x90550009  lbu         $s5, 0x9($v0)
    ctx->pc = 0x1d86ecu;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x1d86f0: 0x90520003  lbu         $s2, 0x3($v0)
    ctx->pc = 0x1d86f0u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1d86f4: 0x90510004  lbu         $s1, 0x4($v0)
    ctx->pc = 0x1d86f4u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d86f8: 0x90570005  lbu         $s7, 0x5($v0)
    ctx->pc = 0x1d86f8u;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x1d86fc: 0x90530006  lbu         $s3, 0x6($v0)
    ctx->pc = 0x1d86fcu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1d8700: 0x90560007  lbu         $s6, 0x7($v0)
    ctx->pc = 0x1d8700u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x1d8704: 0xc074c4c  jal         func_1D3130
    ctx->pc = 0x1D8704u;
    SET_GPR_U32(ctx, 31, 0x1D870Cu);
    ctx->pc = 0x1D8708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8704u;
    // 0x1d8708: 0x90540008  lbu         $s4, 0x8($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3130u, 0x1D8704u, 0x1D870Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D870Cu;
label_1d870c:
    // 0x1d870c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d870cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8710: 0xc08218c  jal         func_208630
    ctx->pc = 0x1D8710u;
    SET_GPR_U32(ctx, 31, 0x1D8718u);
    ctx->pc = 0x1D8714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8710u;
    // 0x1d8714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1D8710u, 0x1D8718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8718u;
label_1d8718:
    // 0x1d8718: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8718u;
    {
        const bool branch_taken_0x1d8718 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d8718) {
            ctx->pc = 0x1D8730u;
            goto label_1d8730;
        }
    }
    ctx->pc = 0x1D8720u;
    // 0x1d8720: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x1d8720u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x1d8724: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1d8724u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1d8728: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x1D8728u;
    SET_GPR_U32(ctx, 31, 0x1D8730u);
    ctx->pc = 0x1D872Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8728u;
    // 0x1d872c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1D8728u, 0x1D8730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8730u;
label_1d8730:
    // 0x1d8730: 0x3404809c  ori         $a0, $zero, 0x809C
    ctx->pc = 0x1d8730u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32924);
    // 0x1d8734: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x1d8734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x1d8738: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1D8738u;
    SET_GPR_U32(ctx, 31, 0x1D8740u);
    ctx->pc = 0x1D873Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8738u;
    // 0x1d873c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1D8738u, 0x1D8740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8740u;
label_1d8740:
    // 0x1d8740: 0xc082222  jal         func_208888
    ctx->pc = 0x1D8740u;
    SET_GPR_U32(ctx, 31, 0x1D8748u);
    ctx->pc = 0x1D8744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8740u;
    // 0x1d8744: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208888u, 0x1D8740u, 0x1D8748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8748u;
label_1d8748:
    // 0x1d8748: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1d8748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1d874c: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x1d874cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x1d8750: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1d8750u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d8754: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x1d8754u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d8758: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d875c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1d875cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x1d8760: 0x2378825  or          $s1, $s1, $s7
    ctx->pc = 0x1d8760u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 23));
    // 0x1d8764: 0x12420030  beq         $s2, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1D8764u;
    {
        const bool branch_taken_0x1d8764 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D8768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8764u;
        // 0x1d8768: 0x2769825  or          $s3, $s3, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8764) {
            ctx->pc = 0x1D8828u;
            goto label_1d8828;
        }
    }
    ctx->pc = 0x1D876Cu;
    // 0x1d876c: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1d876cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d8770: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8770u;
    {
        const bool branch_taken_0x1d8770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8770) {
            ctx->pc = 0x1D8774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8770u;
            // 0x1d8774: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8788u;
            goto label_1d8788;
        }
    }
    ctx->pc = 0x1D8778u;
    // 0x1d8778: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8778u;
    {
        const bool branch_taken_0x1d8778 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8778u;
        // 0x1d877c: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8778) {
            ctx->pc = 0x1D8798u;
            goto label_1d8798;
        }
    }
    ctx->pc = 0x1D8780u;
    // 0x1d8780: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x1D8780u;
    {
        const bool branch_taken_0x1d8780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8780u;
        // 0x1d8784: 0xdfb100c8  ld          $s1, 0xC8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8780) {
            ctx->pc = 0x1D8A8Cu;
            goto label_1d8a8c;
        }
    }
    ctx->pc = 0x1D8788u;
label_1d8788:
    // 0x1d8788: 0x1242004b  beq         $s2, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1D8788u;
    {
        const bool branch_taken_0x1d8788 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8788u;
        // 0x1d878c: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8788) {
            ctx->pc = 0x1D88B8u;
            goto label_1d88b8;
        }
    }
    ctx->pc = 0x1D8790u;
    // 0x1d8790: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x1D8790u;
    {
        const bool branch_taken_0x1d8790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8790u;
        // 0x1d8794: 0xdfb100c8  ld          $s1, 0xC8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8790) {
            ctx->pc = 0x1D8A8Cu;
            goto label_1d8a8c;
        }
    }
    ctx->pc = 0x1D8798u;
label_1d8798:
    // 0x1d8798: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d8798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d879c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1d879cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d87a0: 0x8c430550  lw          $v1, 0x550($v0)
    ctx->pc = 0x1d87a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x370550u));
    // 0x1d87a4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1d87a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d87a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d87a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d87ac: 0xc0772c0  jal         func_1DCB00
    ctx->pc = 0x1D87ACu;
    SET_GPR_U32(ctx, 31, 0x1D87B4u);
    ctx->pc = 0x1D87B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D87ACu;
    // 0x1d87b0: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCB00u, 0x1D87ACu, 0x1D87B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D87B4u;
label_1d87b4:
    // 0x1d87b4: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d87b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d87b8: 0x60000b2  bltz        $s0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x1D87B8u;
    {
        const bool branch_taken_0x1d87b8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D87BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D87B8u;
        // 0x1d87bc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d87b8) {
            ctx->pc = 0x1D8A84u;
            goto label_1d8a84;
        }
    }
    ctx->pc = 0x1D87C0u;
    // 0x1d87c0: 0x4493a000  mtc1        $s3, $f20
    ctx->pc = 0x1d87c0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d87c4: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1d87c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1d87c8: 0x119080  sll         $s2, $s1, 2
    ctx->pc = 0x1d87c8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1d87cc: 0x5d8821  addu        $s1, $v0, $sp
    ctx->pc = 0x1d87ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d87d0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d87d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d87d4: 0x0  nop
    ctx->pc = 0x1d87d4u;
    // NOP
label_1d87d8:
    // 0x1d87d8: 0xc0776e2  jal         func_1DDB88
    ctx->pc = 0x1D87D8u;
    SET_GPR_U32(ctx, 31, 0x1D87E0u);
    ctx->pc = 0x1D87DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D87D8u;
    // 0x1d87dc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDB88u, 0x1D87D8u, 0x1D87E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D87E0u;
label_1d87e0:
    // 0x1d87e0: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1d87e0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d87e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d87e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d87e8: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x1d87e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1d87ec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d87ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d87f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d87f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d87f4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1d87f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1d87f8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1d87f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1d87fc: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x1d87fcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x1d8800: 0x0  nop
    ctx->pc = 0x1d8800u;
    // NOP
    // 0x1d8804: 0x0  nop
    ctx->pc = 0x1d8804u;
    // NOP
    // 0x1d8808: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x1d8808u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x1d880c: 0xc0776ac  jal         func_1DDAB0
    ctx->pc = 0x1D880Cu;
    SET_GPR_U32(ctx, 31, 0x1D8814u);
    ctx->pc = 0x1D8810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D880Cu;
    // 0x1d8810: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDAB0u, 0x1D880Cu, 0x1D8814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8814u;
label_1d8814:
    // 0x1d8814: 0x603fff0  bgezl       $s0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D8814u;
    {
        const bool branch_taken_0x1d8814 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d8814) {
            ctx->pc = 0x1D8818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8814u;
            // 0x1d8818: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D87D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d87d8;
        }
    }
    ctx->pc = 0x1D881Cu;
    // 0x1d881c: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x1D881Cu;
    {
        const bool branch_taken_0x1d881c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D881Cu;
        // 0x1d8820: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d881c) {
            ctx->pc = 0x1D8A88u;
            goto label_1d8a88;
        }
    }
    ctx->pc = 0x1D8824u;
    // 0x1d8824: 0x0  nop
    ctx->pc = 0x1d8824u;
    // NOP
label_1d8828:
    // 0x1d8828: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d8828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d882c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1d882cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8830: 0x8c430550  lw          $v1, 0x550($v0)
    ctx->pc = 0x1d8830u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x370550u));
    // 0x1d8834: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1d8834u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8838: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d8838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d883c: 0xc0772c0  jal         func_1DCB00
    ctx->pc = 0x1D883Cu;
    SET_GPR_U32(ctx, 31, 0x1D8844u);
    ctx->pc = 0x1D8840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D883Cu;
    // 0x1d8840: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCB00u, 0x1D883Cu, 0x1D8844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8844u;
label_1d8844:
    // 0x1d8844: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d8844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d8848: 0x600008e  bltz        $s0, . + 4 + (0x8E << 2)
    ctx->pc = 0x1D8848u;
    {
        const bool branch_taken_0x1d8848 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8848u;
        // 0x1d884c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8848) {
            ctx->pc = 0x1D8A84u;
            goto label_1d8a84;
        }
    }
    ctx->pc = 0x1D8850u;
    // 0x1d8850: 0x4493a000  mtc1        $s3, $f20
    ctx->pc = 0x1d8850u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d8854: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1d8854u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1d8858: 0x119080  sll         $s2, $s1, 2
    ctx->pc = 0x1d8858u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1d885c: 0x5d8821  addu        $s1, $v0, $sp
    ctx->pc = 0x1d885cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d8860: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d8860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d8864: 0x0  nop
    ctx->pc = 0x1d8864u;
    // NOP
label_1d8868:
    // 0x1d8868: 0xc0776d8  jal         func_1DDB60
    ctx->pc = 0x1D8868u;
    SET_GPR_U32(ctx, 31, 0x1D8870u);
    ctx->pc = 0x1D886Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8868u;
    // 0x1d886c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDB60u, 0x1D8868u, 0x1D8870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8870u;
label_1d8870:
    // 0x1d8870: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1d8870u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8874: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d8874u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d8878: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x1d8878u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1d887c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d887cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d8880: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8884: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1d8884u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1d8888: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1d8888u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1d888c: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x1d888cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x1d8890: 0x0  nop
    ctx->pc = 0x1d8890u;
    // NOP
    // 0x1d8894: 0x0  nop
    ctx->pc = 0x1d8894u;
    // NOP
    // 0x1d8898: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x1d8898u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x1d889c: 0xc077688  jal         func_1DDA20
    ctx->pc = 0x1D889Cu;
    SET_GPR_U32(ctx, 31, 0x1D88A4u);
    ctx->pc = 0x1D88A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D889Cu;
    // 0x1d88a0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDA20u, 0x1D889Cu, 0x1D88A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D88A4u;
label_1d88a4:
    // 0x1d88a4: 0x603fff0  bgezl       $s0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D88A4u;
    {
        const bool branch_taken_0x1d88a4 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d88a4) {
            ctx->pc = 0x1D88A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D88A4u;
            // 0x1d88a8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8868;
        }
    }
    ctx->pc = 0x1D88ACu;
    // 0x1d88ac: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x1D88ACu;
    {
        const bool branch_taken_0x1d88ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D88B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D88ACu;
        // 0x1d88b0: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d88ac) {
            ctx->pc = 0x1D8A88u;
            goto label_1d8a88;
        }
    }
    ctx->pc = 0x1D88B4u;
    // 0x1d88b4: 0x0  nop
    ctx->pc = 0x1d88b4u;
    // NOP
label_1d88b8:
    // 0x1d88b8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d88b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d88bc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1d88bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d88c0: 0x8c430550  lw          $v1, 0x550($v0)
    ctx->pc = 0x1d88c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x370550u));
    // 0x1d88c4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1d88c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d88c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d88c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d88cc: 0xc0772c0  jal         func_1DCB00
    ctx->pc = 0x1D88CCu;
    SET_GPR_U32(ctx, 31, 0x1D88D4u);
    ctx->pc = 0x1D88D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D88CCu;
    // 0x1d88d0: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCB00u, 0x1D88CCu, 0x1D88D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D88D4u;
label_1d88d4:
    // 0x1d88d4: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d88d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d88d8: 0x600006a  bltz        $s0, . + 4 + (0x6A << 2)
    ctx->pc = 0x1D88D8u;
    {
        const bool branch_taken_0x1d88d8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D88DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D88D8u;
        // 0x1d88dc: 0x131600  sll         $v0, $s3, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d88d8) {
            ctx->pc = 0x1D8A84u;
            goto label_1d8a84;
        }
    }
    ctx->pc = 0x1D88E0u;
    // 0x1d88e0: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x1d88e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x1d88e4: 0x34219999  ori         $at, $at, 0x9999
    ctx->pc = 0x1d88e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39321);
    // 0x1d88e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d88e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d88ec: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1d88ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1d88f0: 0x119080  sll         $s2, $s1, 2
    ctx->pc = 0x1d88f0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1d88f4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1d88f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d88f8: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1d88f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1d88fc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1d88fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d8900: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1d8900u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8904: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d8904u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d8908: 0x7d8821  addu        $s1, $v1, $sp
    ctx->pc = 0x1d8908u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1d890c: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x1d890cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x1d8910: 0x0  nop
    ctx->pc = 0x1d8910u;
    // NOP
    // 0x1d8914: 0x0  nop
    ctx->pc = 0x1d8914u;
    // NOP
    // 0x1d8918: 0x4600a543  div.s       $f21, $f20, $f0
    ctx->pc = 0x1d8918u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x1d891c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d891cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d8920:
    // 0x1d8920: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1d8920u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1d8924: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d8924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d8928: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1d8928u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1d892c: 0xc07769a  jal         func_1DDA68
    ctx->pc = 0x1D892Cu;
    SET_GPR_U32(ctx, 31, 0x1D8934u);
    ctx->pc = 0x1D8930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D892Cu;
    // 0x1d8930: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDA68u, 0x1D892Cu, 0x1D8934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8934u;
label_1d8934:
    // 0x1d8934: 0x603fffa  bgezl       $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D8934u;
    {
        const bool branch_taken_0x1d8934 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d8934) {
            ctx->pc = 0x1D8938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8934u;
            // 0x1d8938: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8920;
        }
    }
    ctx->pc = 0x1D893Cu;
    // 0x1d893c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1D893Cu;
    {
        const bool branch_taken_0x1d893c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D893Cu;
        // 0x1d8940: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d893c) {
            ctx->pc = 0x1D8A88u;
            goto label_1d8a88;
        }
    }
    ctx->pc = 0x1D8944u;
    // 0x1d8944: 0x0  nop
    ctx->pc = 0x1d8944u;
    // NOP
label_1d8948:
    // 0x1d8948: 0x8c82054c  lw          $v0, 0x54C($a0)
    ctx->pc = 0x1d8948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1356)));
    // 0x1d894c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d894cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8950: 0x90440003  lbu         $a0, 0x3($v0)
    ctx->pc = 0x1d8950u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1d8954: 0x90470006  lbu         $a3, 0x6($v0)
    ctx->pc = 0x1d8954u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1d8958: 0x90520004  lbu         $s2, 0x4($v0)
    ctx->pc = 0x1d8958u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d895c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D895Cu;
    {
        const bool branch_taken_0x1d895c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D8960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D895Cu;
        // 0x1d8960: 0x90460005  lbu         $a2, 0x5($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d895c) {
            ctx->pc = 0x1D8978u;
            goto label_1d8978;
        }
    }
    ctx->pc = 0x1D8964u;
    // 0x1d8964: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d8964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d8968: 0x10820015  beq         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D8968u;
    {
        const bool branch_taken_0x1d8968 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8968u;
        // 0x1d896c: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8968) {
            ctx->pc = 0x1D89C0u;
            goto label_1d89c0;
        }
    }
    ctx->pc = 0x1D8970u;
    // 0x1d8970: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1D8970u;
    {
        const bool branch_taken_0x1d8970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8970u;
        // 0x1d8974: 0xdfb100c8  ld          $s1, 0xC8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8970) {
            ctx->pc = 0x1D8A8Cu;
            goto label_1d8a8c;
        }
    }
    ctx->pc = 0x1D8978u;
label_1d8978:
    // 0x1d8978: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d8978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d897c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d897cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8980: 0x8c430550  lw          $v1, 0x550($v0)
    ctx->pc = 0x1d8980u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x370550u));
    // 0x1d8984: 0xc077324  jal         func_1DCC90
    ctx->pc = 0x1D8984u;
    SET_GPR_U32(ctx, 31, 0x1D898Cu);
    ctx->pc = 0x1D8988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8984u;
    // 0x1d8988: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCC90u, 0x1D8984u, 0x1D898Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D898Cu;
label_1d898c:
    // 0x1d898c: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d898cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d8990: 0x600003c  bltz        $s0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1D8990u;
    {
        const bool branch_taken_0x1d8990 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D8994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8990u;
        // 0x1d8994: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8990) {
            ctx->pc = 0x1D8A84u;
            goto label_1d8a84;
        }
    }
    ctx->pc = 0x1D8998u;
    // 0x1d8998: 0x5d8821  addu        $s1, $v0, $sp
    ctx->pc = 0x1d8998u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d899c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d899cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d89a0:
    // 0x1d89a0: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1d89a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1d89a4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d89a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d89a8: 0xc07758e  jal         func_1DD638
    ctx->pc = 0x1D89A8u;
    SET_GPR_U32(ctx, 31, 0x1D89B0u);
    ctx->pc = 0x1D89ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89A8u;
    // 0x1d89ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD638u, 0x1D89A8u, 0x1D89B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89B0u;
label_1d89b0:
    // 0x1d89b0: 0x603fffb  bgezl       $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D89B0u;
    {
        const bool branch_taken_0x1d89b0 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d89b0) {
            ctx->pc = 0x1D89B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D89B0u;
            // 0x1d89b4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D89A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d89a0;
        }
    }
    ctx->pc = 0x1D89B8u;
    // 0x1d89b8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1D89B8u;
    {
        const bool branch_taken_0x1d89b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D89BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D89B8u;
        // 0x1d89bc: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d89b8) {
            ctx->pc = 0x1D8A88u;
            goto label_1d8a88;
        }
    }
    ctx->pc = 0x1D89C0u;
label_1d89c0:
    // 0x1d89c0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d89c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d89c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d89c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d89c8: 0x8c430550  lw          $v1, 0x550($v0)
    ctx->pc = 0x1d89c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x370550u));
    // 0x1d89cc: 0xc077324  jal         func_1DCC90
    ctx->pc = 0x1D89CCu;
    SET_GPR_U32(ctx, 31, 0x1D89D4u);
    ctx->pc = 0x1D89D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89CCu;
    // 0x1d89d0: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCC90u, 0x1D89CCu, 0x1D89D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89D4u;
label_1d89d4:
    // 0x1d89d4: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x1d89d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d89d8: 0x600002a  bltz        $s0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1D89D8u;
    {
        const bool branch_taken_0x1d89d8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1D89DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D89D8u;
        // 0x1d89dc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d89d8) {
            ctx->pc = 0x1D8A84u;
            goto label_1d8a84;
        }
    }
    ctx->pc = 0x1D89E0u;
    // 0x1d89e0: 0x5d8821  addu        $s1, $v0, $sp
    ctx->pc = 0x1d89e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d89e4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d89e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d89e8:
    // 0x1d89e8: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x1d89e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1d89ec: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1d89ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1d89f0: 0xc07755a  jal         func_1DD568
    ctx->pc = 0x1D89F0u;
    SET_GPR_U32(ctx, 31, 0x1D89F8u);
    ctx->pc = 0x1D89F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D89F0u;
    // 0x1d89f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD568u, 0x1D89F0u, 0x1D89F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D89F8u;
label_1d89f8:
    // 0x1d89f8: 0x603fffb  bgezl       $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D89F8u;
    {
        const bool branch_taken_0x1d89f8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d89f8) {
            ctx->pc = 0x1D89FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D89F8u;
            // 0x1d89fc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D89E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d89e8;
        }
    }
    ctx->pc = 0x1D8A00u;
    // 0x1d8a00: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1D8A00u;
    {
        const bool branch_taken_0x1d8a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A00u;
        // 0x1d8a04: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a00) {
            ctx->pc = 0x1D8A88u;
            goto label_1d8a88;
        }
    }
    ctx->pc = 0x1D8A08u;
label_1d8a08:
    // 0x1d8a08: 0x8c84054c  lw          $a0, 0x54C($a0)
    ctx->pc = 0x1d8a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1356)));
    // 0x1d8a0c: 0x2403007d  addiu       $v1, $zero, 0x7D
    ctx->pc = 0x1d8a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x1d8a10: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x1d8a10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1d8a14: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D8A14u;
    {
        const bool branch_taken_0x1d8a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D8A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A14u;
        // 0x1d8a18: 0xdfb100c8  ld          $s1, 0xC8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a14) {
            ctx->pc = 0x1D8A8Cu;
            goto label_1d8a8c;
        }
    }
    ctx->pc = 0x1D8A1Cu;
    // 0x1d8a1c: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1d8a1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1d8a20: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d8a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d8a24: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D8A24u;
    {
        const bool branch_taken_0x1d8a24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d8a24) {
            ctx->pc = 0x1D8A8Cu;
            goto label_1d8a8c;
        }
    }
    ctx->pc = 0x1D8A2Cu;
    // 0x1d8a2c: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x1d8a2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d8a30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8a34: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D8A34u;
    {
        const bool branch_taken_0x1d8a34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D8A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A34u;
        // 0x1d8a38: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a34) {
            ctx->pc = 0x1D8A50u;
            goto label_1d8a50;
        }
    }
    ctx->pc = 0x1D8A3Cu;
    // 0x1d8a3c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D8A3Cu;
    {
        const bool branch_taken_0x1d8a3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D8A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A3Cu;
        // 0x1d8a40: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a3c) {
            ctx->pc = 0x1D8A70u;
            goto label_1d8a70;
        }
    }
    ctx->pc = 0x1D8A44u;
    // 0x1d8a44: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1D8A44u;
    {
        const bool branch_taken_0x1d8a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A44u;
        // 0x1d8a48: 0xdfb200d0  ld          $s2, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a44) {
            ctx->pc = 0x1D8A90u;
            goto label_1d8a90;
        }
    }
    ctx->pc = 0x1D8A4Cu;
    // 0x1d8a4c: 0x0  nop
    ctx->pc = 0x1d8a4cu;
    // NOP
label_1d8a50:
    // 0x1d8a50: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d8a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d8a54: 0x90860006  lbu         $a2, 0x6($a0)
    ctx->pc = 0x1d8a54u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1d8a58: 0x8c440548  lw          $a0, 0x548($v0)
    ctx->pc = 0x1d8a58u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x370548u));
    // 0x1d8a5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d8a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d8a60:
    // 0x1d8a60: 0xc075674  jal         func_1D59D0
    ctx->pc = 0x1D8A60u;
    SET_GPR_U32(ctx, 31, 0x1D8A68u);
    ctx->pc = 0x1D8A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A60u;
    // 0x1d8a64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59D0u, 0x1D8A60u, 0x1D8A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A68u;
label_1d8a68:
    // 0x1d8a68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8A68u;
    {
        const bool branch_taken_0x1d8a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A68u;
        // 0x1d8a6c: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a68) {
            ctx->pc = 0x1D8A88u;
            goto label_1d8a88;
        }
    }
    ctx->pc = 0x1D8A70u;
label_1d8a70:
    // 0x1d8a70: 0x90860006  lbu         $a2, 0x6($a0)
    ctx->pc = 0x1d8a70u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1d8a74: 0x8c440548  lw          $a0, 0x548($v0)
    ctx->pc = 0x1d8a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1352)));
    // 0x1d8a78: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d8a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d8a7c: 0xc075674  jal         func_1D59D0
    ctx->pc = 0x1D8A7Cu;
    SET_GPR_U32(ctx, 31, 0x1D8A84u);
    ctx->pc = 0x1D8A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A7Cu;
    // 0x1d8a80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59D0u, 0x1D8A7Cu, 0x1D8A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A84u;
label_1d8a84:
    // 0x1d8a84: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x1d8a84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1d8a88:
    // 0x1d8a88: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x1d8a88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
label_1d8a8c:
    // 0x1d8a8c: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x1d8a8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_1d8a90:
    // 0x1d8a90: 0xdfb300d8  ld          $s3, 0xD8($sp)
    ctx->pc = 0x1d8a90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1d8a94: 0xdfb400e0  ld          $s4, 0xE0($sp)
    ctx->pc = 0x1d8a94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d8a98: 0xdfb500e8  ld          $s5, 0xE8($sp)
    ctx->pc = 0x1d8a98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1d8a9c: 0xdfb600f0  ld          $s6, 0xF0($sp)
    ctx->pc = 0x1d8a9cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d8aa0: 0xdfb700f8  ld          $s7, 0xF8($sp)
    ctx->pc = 0x1d8aa0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1d8aa4: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x1d8aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1d8aa8: 0xc7b50110  lwc1        $f21, 0x110($sp)
    ctx->pc = 0x1d8aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d8aac: 0xc7b40108  lwc1        $f20, 0x108($sp)
    ctx->pc = 0x1d8aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d8ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AB0u;
        // 0x1d8ab4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8AB8u;
}
