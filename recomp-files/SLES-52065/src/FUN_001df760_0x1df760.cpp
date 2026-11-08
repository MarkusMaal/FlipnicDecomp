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

// Function: FUN_001df760
// Address: 0x1df760 - 0x1dfa58
void FUN_001df760_0x1df760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001df760_0x1df760");
#endif

    switch (ctx->pc) {
        case 0x1df8dcu: goto label_1df8dc;
        case 0x1df924u: goto label_1df924;
        case 0x1df940u: goto label_1df940;
        case 0x1df958u: goto label_1df958;
        case 0x1df968u: goto label_1df968;
        case 0x1df974u: goto label_1df974;
        case 0x1df97cu: goto label_1df97c;
        case 0x1df988u: goto label_1df988;
        case 0x1df9a0u: goto label_1df9a0;
        case 0x1df9acu: goto label_1df9ac;
        case 0x1df9bcu: goto label_1df9bc;
        case 0x1df9ccu: goto label_1df9cc;
        case 0x1df9f8u: goto label_1df9f8;
        case 0x1dfa0cu: goto label_1dfa0c;
        case 0x1dfa24u: goto label_1dfa24;
        case 0x1dfa3cu: goto label_1dfa3c;
        default: break;
    }

    ctx->pc = 0x1df760u;

    // 0x1df760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1df760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1df764: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1df764u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df768: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1df768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1df76c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x1df76cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df770: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1df770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1df774: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1df774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1df778: 0x48000b0  bltz        $a0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x1DF778u;
    {
        const bool branch_taken_0x1df778 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1DF77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF778u;
        // 0x1df77c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df778) {
            ctx->pc = 0x1DFA3Cu;
            goto label_1dfa3c;
        }
    }
    ctx->pc = 0x1DF780u;
    // 0x1df780: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1df780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1df784: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x1df784u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x1df788: 0x244a9f00  addiu       $t2, $v0, -0x6100
    ctx->pc = 0x1df788u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942464));
    // 0x1df78c: 0x8a8821  addu        $s1, $a0, $t2
    ctx->pc = 0x1df78cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1df790: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1df790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1df794: 0x106000aa  beqz        $v1, . + 4 + (0xAA << 2)
    ctx->pc = 0x1DF794u;
    {
        const bool branch_taken_0x1df794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF794u;
        // 0x1df798: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df794) {
            ctx->pc = 0x1DFA40u;
            goto label_1dfa40;
        }
    }
    ctx->pc = 0x1DF79Cu;
    // 0x1df79c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1df79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1df7a0: 0x11020059  beq         $t0, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x1DF7A0u;
    {
        const bool branch_taken_0x1df7a0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7A0u;
        // 0x1df7a4: 0x29020081  slti        $v0, $t0, 0x81 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)129) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df7a0) {
            ctx->pc = 0x1DF908u;
            goto label_1df908;
        }
    }
    ctx->pc = 0x1DF7A8u;
    // 0x1df7a8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1DF7A8u;
    {
        const bool branch_taken_0x1df7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7A8u;
        // 0x1df7ac: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df7a8) {
            ctx->pc = 0x1DF820u;
            goto label_1df820;
        }
    }
    ctx->pc = 0x1DF7B0u;
    // 0x1df7b0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1df7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1df7b4: 0x11020040  beq         $t0, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x1DF7B4u;
    {
        const bool branch_taken_0x1df7b4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7B4u;
        // 0x1df7b8: 0x29020009  slti        $v0, $t0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df7b4) {
            ctx->pc = 0x1DF8B8u;
            goto label_1df8b8;
        }
    }
    ctx->pc = 0x1DF7BCu;
    // 0x1df7bc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1DF7BCu;
    {
        const bool branch_taken_0x1df7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7BCu;
        // 0x1df7c0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df7bc) {
            ctx->pc = 0x1DF7E8u;
            goto label_1df7e8;
        }
    }
    ctx->pc = 0x1DF7C4u;
    // 0x1df7c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1df7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1df7c8: 0x11020035  beq         $t0, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1DF7C8u;
    {
        const bool branch_taken_0x1df7c8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7C8u;
        // 0x1df7cc: 0x8a1021  addu        $v0, $a0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df7c8) {
            ctx->pc = 0x1DF8A0u;
            goto label_1df8a0;
        }
    }
    ctx->pc = 0x1DF7D0u;
    // 0x1df7d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1df7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1df7d4: 0x11020034  beq         $t0, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1DF7D4u;
    {
        const bool branch_taken_0x1df7d4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7D4u;
        // 0x1df7d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df7d4) {
            ctx->pc = 0x1DF8A8u;
            goto label_1df8a8;
        }
    }
    ctx->pc = 0x1DF7DCu;
    // 0x1df7dc: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x1DF7DCu;
    {
        const bool branch_taken_0x1df7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7DCu;
        // 0x1df7e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df7dc) {
            ctx->pc = 0x1DFA44u;
            goto label_1dfa44;
        }
    }
    ctx->pc = 0x1DF7E4u;
    // 0x1df7e4: 0x0  nop
    ctx->pc = 0x1df7e4u;
    // NOP
label_1df7e8:
    // 0x1df7e8: 0x1102003f  beq         $t0, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1DF7E8u;
    {
        const bool branch_taken_0x1df7e8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7E8u;
        // 0x1df7ec: 0x29020021  slti        $v0, $t0, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df7e8) {
            ctx->pc = 0x1DF8E8u;
            goto label_1df8e8;
        }
    }
    ctx->pc = 0x1DF7F0u;
    // 0x1df7f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DF7F0u;
    {
        const bool branch_taken_0x1df7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7F0u;
        // 0x1df7f4: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df7f0) {
            ctx->pc = 0x1DF810u;
            goto label_1df810;
        }
    }
    ctx->pc = 0x1DF7F8u;
    // 0x1df7f8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1df7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1df7fc: 0x11020032  beq         $t0, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1DF7FCu;
    {
        const bool branch_taken_0x1df7fc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7FCu;
        // 0x1df800: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df7fc) {
            ctx->pc = 0x1DF8C8u;
            goto label_1df8c8;
        }
    }
    ctx->pc = 0x1DF804u;
    // 0x1df804: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x1DF804u;
    {
        const bool branch_taken_0x1df804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF804u;
        // 0x1df808: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df804) {
            ctx->pc = 0x1DFA44u;
            goto label_1dfa44;
        }
    }
    ctx->pc = 0x1DF80Cu;
    // 0x1df80c: 0x0  nop
    ctx->pc = 0x1df80cu;
    // NOP
label_1df810:
    // 0x1df810: 0x11020039  beq         $t0, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1DF810u;
    {
        const bool branch_taken_0x1df810 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF810u;
        // 0x1df814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df810) {
            ctx->pc = 0x1DF8F8u;
            goto label_1df8f8;
        }
    }
    ctx->pc = 0x1DF818u;
    // 0x1df818: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x1DF818u;
    {
        const bool branch_taken_0x1df818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF818u;
        // 0x1df81c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df818) {
            ctx->pc = 0x1DFA44u;
            goto label_1dfa44;
        }
    }
    ctx->pc = 0x1DF820u;
label_1df820:
    // 0x1df820: 0x11020071  beq         $t0, $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x1DF820u;
    {
        const bool branch_taken_0x1df820 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF820u;
        // 0x1df824: 0x29020801  slti        $v0, $t0, 0x801 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2049) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df820) {
            ctx->pc = 0x1DF9E8u;
            goto label_1df9e8;
        }
    }
    ctx->pc = 0x1DF828u;
    // 0x1df828: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1DF828u;
    {
        const bool branch_taken_0x1df828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF828u;
        // 0x1df82c: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df828) {
            ctx->pc = 0x1DF868u;
            goto label_1df868;
        }
    }
    ctx->pc = 0x1DF830u;
    // 0x1df830: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x1df830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1df834: 0x1102003e  beq         $t0, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1DF834u;
    {
        const bool branch_taken_0x1df834 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF834u;
        // 0x1df838: 0x29020201  slti        $v0, $t0, 0x201 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)513) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df834) {
            ctx->pc = 0x1DF930u;
            goto label_1df930;
        }
    }
    ctx->pc = 0x1DF83Cu;
    // 0x1df83c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DF83Cu;
    {
        const bool branch_taken_0x1df83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF83Cu;
        // 0x1df840: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df83c) {
            ctx->pc = 0x1DF858u;
            goto label_1df858;
        }
    }
    ctx->pc = 0x1DF844u;
    // 0x1df844: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1df844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1df848: 0x11020033  beq         $t0, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1DF848u;
    {
        const bool branch_taken_0x1df848 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF848u;
        // 0x1df84c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df848) {
            ctx->pc = 0x1DF918u;
            goto label_1df918;
        }
    }
    ctx->pc = 0x1DF850u;
    // 0x1df850: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x1DF850u;
    {
        const bool branch_taken_0x1df850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF850u;
        // 0x1df854: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df850) {
            ctx->pc = 0x1DFA44u;
            goto label_1dfa44;
        }
    }
    ctx->pc = 0x1DF858u;
label_1df858:
    // 0x1df858: 0x1102005f  beq         $t0, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x1DF858u;
    {
        const bool branch_taken_0x1df858 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF858u;
        // 0x1df85c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df858) {
            ctx->pc = 0x1DF9D8u;
            goto label_1df9d8;
        }
    }
    ctx->pc = 0x1DF860u;
    // 0x1df860: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x1DF860u;
    {
        const bool branch_taken_0x1df860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF860u;
        // 0x1df864: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df860) {
            ctx->pc = 0x1DFA44u;
            goto label_1dfa44;
        }
    }
    ctx->pc = 0x1DF868u;
label_1df868:
    // 0x1df868: 0x1102006b  beq         $t0, $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x1DF868u;
    {
        const bool branch_taken_0x1df868 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF868u;
        // 0x1df86c: 0x29022001  slti        $v0, $t0, 0x2001 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8193) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df868) {
            ctx->pc = 0x1DFA18u;
            goto label_1dfa18;
        }
    }
    ctx->pc = 0x1DF870u;
    // 0x1df870: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DF870u;
    {
        const bool branch_taken_0x1df870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF870u;
        // 0x1df874: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df870) {
            ctx->pc = 0x1DF890u;
            goto label_1df890;
        }
    }
    ctx->pc = 0x1DF878u;
    // 0x1df878: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x1df878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1df87c: 0x11020060  beq         $t0, $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x1DF87Cu;
    {
        const bool branch_taken_0x1df87c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF87Cu;
        // 0x1df880: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df87c) {
            ctx->pc = 0x1DFA00u;
            goto label_1dfa00;
        }
    }
    ctx->pc = 0x1DF884u;
    // 0x1df884: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1DF884u;
    {
        const bool branch_taken_0x1df884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF884u;
        // 0x1df888: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df884) {
            ctx->pc = 0x1DFA44u;
            goto label_1dfa44;
        }
    }
    ctx->pc = 0x1DF88Cu;
    // 0x1df88c: 0x0  nop
    ctx->pc = 0x1df88cu;
    // NOP
label_1df890:
    // 0x1df890: 0x11020067  beq         $t0, $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x1DF890u;
    {
        const bool branch_taken_0x1df890 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF890u;
        // 0x1df894: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df890) {
            ctx->pc = 0x1DFA30u;
            goto label_1dfa30;
        }
    }
    ctx->pc = 0x1DF898u;
    // 0x1df898: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x1DF898u;
    {
        const bool branch_taken_0x1df898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF898u;
        // 0x1df89c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df898) {
            ctx->pc = 0x1DFA44u;
            goto label_1dfa44;
        }
    }
    ctx->pc = 0x1DF8A0u;
label_1df8a0:
    // 0x1df8a0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1DF8A0u;
    {
        const bool branch_taken_0x1df8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8A0u;
        // 0x1df8a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df8a0) {
            ctx->pc = 0x1DF8D0u;
            goto label_1df8d0;
        }
    }
    ctx->pc = 0x1DF8A8u;
label_1df8a8:
    // 0x1df8a8: 0x8a1021  addu        $v0, $a0, $t2
    ctx->pc = 0x1df8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1df8ac: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1DF8ACu;
    {
        const bool branch_taken_0x1df8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8ACu;
        // 0x1df8b0: 0xac490014  sw          $t1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df8ac) {
            ctx->pc = 0x1DF8D4u;
            goto label_1df8d4;
        }
    }
    ctx->pc = 0x1DF8B4u;
    // 0x1df8b4: 0x0  nop
    ctx->pc = 0x1df8b4u;
    // NOP
label_1df8b8:
    // 0x1df8b8: 0x8a1021  addu        $v0, $a0, $t2
    ctx->pc = 0x1df8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1df8bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF8BCu;
    {
        const bool branch_taken_0x1df8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8BCu;
        // 0x1df8c0: 0xac490018  sw          $t1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df8bc) {
            ctx->pc = 0x1DF8D4u;
            goto label_1df8d4;
        }
    }
    ctx->pc = 0x1DF8C4u;
    // 0x1df8c4: 0x0  nop
    ctx->pc = 0x1df8c4u;
    // NOP
label_1df8c8:
    // 0x1df8c8: 0x8a1021  addu        $v0, $a0, $t2
    ctx->pc = 0x1df8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1df8cc: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1df8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1df8d0:
    // 0x1df8d0: 0xac490010  sw          $t1, 0x10($v0)
    ctx->pc = 0x1df8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 9));
label_1df8d4:
    // 0x1df8d4: 0xc075674  jal         func_1D59D0
    ctx->pc = 0x1DF8D4u;
    SET_GPR_U32(ctx, 31, 0x1DF8DCu);
    ctx->pc = 0x1DF8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF8D4u;
    // 0x1df8d8: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59D0u, 0x1DF8D4u, 0x1DF8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF8DCu;
label_1df8dc:
    // 0x1df8dc: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1DF8DCu;
    {
        const bool branch_taken_0x1df8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8DCu;
        // 0x1df8e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df8dc) {
            ctx->pc = 0x1DFA40u;
            goto label_1dfa40;
        }
    }
    ctx->pc = 0x1DF8E4u;
    // 0x1df8e4: 0x0  nop
    ctx->pc = 0x1df8e4u;
    // NOP
label_1df8e8:
    // 0x1df8e8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1df8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1df8ec: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1DF8ECu;
    {
        const bool branch_taken_0x1df8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF8ECu;
        // 0x1df8f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df8ec) {
            ctx->pc = 0x1DF9F0u;
            goto label_1df9f0;
        }
    }
    ctx->pc = 0x1DF8F4u;
    // 0x1df8f4: 0x0  nop
    ctx->pc = 0x1df8f4u;
    // NOP
label_1df8f8:
    // 0x1df8f8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1df8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1df8fc: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1df8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1df900: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1DF900u;
    {
        const bool branch_taken_0x1df900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF900u;
        // 0x1df904: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df900) {
            ctx->pc = 0x1DF9F0u;
            goto label_1df9f0;
        }
    }
    ctx->pc = 0x1DF908u;
label_1df908:
    // 0x1df908: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1df908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1df90c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1DF90Cu;
    {
        const bool branch_taken_0x1df90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF90Cu;
        // 0x1df910: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df90c) {
            ctx->pc = 0x1DF9F0u;
            goto label_1df9f0;
        }
    }
    ctx->pc = 0x1DF914u;
    // 0x1df914: 0x0  nop
    ctx->pc = 0x1df914u;
    // NOP
label_1df918:
    // 0x1df918: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1df918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1df91c: 0xc075674  jal         func_1D59D0
    ctx->pc = 0x1DF91Cu;
    SET_GPR_U32(ctx, 31, 0x1DF924u);
    ctx->pc = 0x1DF920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF91Cu;
    // 0x1df920: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59D0u, 0x1DF91Cu, 0x1DF924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF924u;
label_1df924:
    // 0x1df924: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1DF924u;
    {
        const bool branch_taken_0x1df924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF924u;
        // 0x1df928: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df924) {
            ctx->pc = 0x1DFA40u;
            goto label_1dfa40;
        }
    }
    ctx->pc = 0x1DF92Cu;
    // 0x1df92c: 0x0  nop
    ctx->pc = 0x1df92cu;
    // NOP
label_1df930:
    // 0x1df930: 0x24900030  addiu       $s0, $a0, 0x30
    ctx->pc = 0x1df930u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1df934: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x1df934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df938: 0xc08218c  jal         func_208630
    ctx->pc = 0x1DF938u;
    SET_GPR_U32(ctx, 31, 0x1DF940u);
    ctx->pc = 0x1DF93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF938u;
    // 0x1df93c: 0x20a8021  addu        $s0, $s0, $t2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1DF938u, 0x1DF940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF940u;
label_1df940:
    // 0x1df940: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1df940u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x1df944: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1df944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df948: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1df948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1df94c: 0xdc243828  ld          $a0, 0x3828($at)
    ctx->pc = 0x1df94cu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x223828u));
    // 0x1df950: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1DF950u;
    SET_GPR_U32(ctx, 31, 0x1DF958u);
    ctx->pc = 0x1DF954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF950u;
    // 0x1df954: 0xfe220030  sd          $v0, 0x30($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1DF950u, 0x1DF958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF958u;
label_1df958:
    // 0x1df958: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1df958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1df95c: 0xdc243830  ld          $a0, 0x3830($at)
    ctx->pc = 0x1df95cu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x223830u));
    // 0x1df960: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1DF960u;
    SET_GPR_U32(ctx, 31, 0x1DF968u);
    ctx->pc = 0x1DF964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF960u;
    // 0x1df964: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1DF960u, 0x1DF968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF968u;
label_1df968:
    // 0x1df968: 0xde250038  ld          $a1, 0x38($s1)
    ctx->pc = 0x1df968u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1df96c: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1DF96Cu;
    SET_GPR_U32(ctx, 31, 0x1DF974u);
    ctx->pc = 0x1DF970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF96Cu;
    // 0x1df970: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1DF96Cu, 0x1DF974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF974u;
label_1df974:
    // 0x1df974: 0xc074c4c  jal         func_1D3130
    ctx->pc = 0x1DF974u;
    SET_GPR_U32(ctx, 31, 0x1DF97Cu);
    ctx->pc = 0x1DF978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF974u;
    // 0x1df978: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3130u, 0x1DF974u, 0x1DF97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF97Cu;
label_1df97c:
    // 0x1df97c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1df97cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df980: 0xc08218c  jal         func_208630
    ctx->pc = 0x1DF980u;
    SET_GPR_U32(ctx, 31, 0x1DF988u);
    ctx->pc = 0x1DF984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF980u;
    // 0x1df984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1DF980u, 0x1DF988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF988u;
label_1df988:
    // 0x1df988: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF988u;
    {
        const bool branch_taken_0x1df988 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1df988) {
            ctx->pc = 0x1DF9A0u;
            goto label_1df9a0;
        }
    }
    ctx->pc = 0x1DF990u;
    // 0x1df990: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x1df990u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x1df994: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1df994u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1df998: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x1DF998u;
    SET_GPR_U32(ctx, 31, 0x1DF9A0u);
    ctx->pc = 0x1DF99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF998u;
    // 0x1df99c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1DF998u, 0x1DF9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF9A0u;
label_1df9a0:
    // 0x1df9a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1df9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df9a4: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1DF9A4u;
    SET_GPR_U32(ctx, 31, 0x1DF9ACu);
    ctx->pc = 0x1DF9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF9A4u;
    // 0x1df9a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1DF9A4u, 0x1DF9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF9ACu;
label_1df9ac:
    // 0x1df9ac: 0xde250078  ld          $a1, 0x78($s1)
    ctx->pc = 0x1df9acu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1df9b0: 0xfe220040  sd          $v0, 0x40($s1)
    ctx->pc = 0x1df9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 2));
    // 0x1df9b4: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1DF9B4u;
    SET_GPR_U32(ctx, 31, 0x1DF9BCu);
    ctx->pc = 0x1DF9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF9B4u;
    // 0x1df9b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1DF9B4u, 0x1DF9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF9BCu;
label_1df9bc:
    // 0x1df9bc: 0x340580b2  ori         $a1, $zero, 0x80B2
    ctx->pc = 0x1df9bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32946);
    // 0x1df9c0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1df9c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1df9c4: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1DF9C4u;
    SET_GPR_U32(ctx, 31, 0x1DF9CCu);
    ctx->pc = 0x1DF9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF9C4u;
    // 0x1df9c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1DF9C4u, 0x1DF9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF9CCu;
label_1df9cc:
    // 0x1df9cc: 0xfe220040  sd          $v0, 0x40($s1)
    ctx->pc = 0x1df9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 2));
    // 0x1df9d0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1DF9D0u;
    {
        const bool branch_taken_0x1df9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF9D0u;
        // 0x1df9d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df9d0) {
            ctx->pc = 0x1DFA40u;
            goto label_1dfa40;
        }
    }
    ctx->pc = 0x1DF9D8u;
label_1df9d8:
    // 0x1df9d8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1df9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1df9dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DF9DCu;
    {
        const bool branch_taken_0x1df9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF9DCu;
        // 0x1df9e0: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df9dc) {
            ctx->pc = 0x1DF9F0u;
            goto label_1df9f0;
        }
    }
    ctx->pc = 0x1DF9E4u;
    // 0x1df9e4: 0x0  nop
    ctx->pc = 0x1df9e4u;
    // NOP
label_1df9e8:
    // 0x1df9e8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1df9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1df9ec: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x1df9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_1df9f0:
    // 0x1df9f0: 0xc075674  jal         func_1D59D0
    ctx->pc = 0x1DF9F0u;
    SET_GPR_U32(ctx, 31, 0x1DF9F8u);
    ctx->pc = 0x1DF9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF9F0u;
    // 0x1df9f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59D0u, 0x1DF9F0u, 0x1DF9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF9F8u;
label_1df9f8:
    // 0x1df9f8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1DF9F8u;
    {
        const bool branch_taken_0x1df9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF9F8u;
        // 0x1df9fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df9f8) {
            ctx->pc = 0x1DFA40u;
            goto label_1dfa40;
        }
    }
    ctx->pc = 0x1DFA00u;
label_1dfa00:
    // 0x1dfa00: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1dfa00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1dfa04: 0xc075674  jal         func_1D59D0
    ctx->pc = 0x1DFA04u;
    SET_GPR_U32(ctx, 31, 0x1DFA0Cu);
    ctx->pc = 0x1DFA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFA04u;
    // 0x1dfa08: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59D0u, 0x1DFA04u, 0x1DFA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFA0Cu;
label_1dfa0c:
    // 0x1dfa0c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1DFA0Cu;
    {
        const bool branch_taken_0x1dfa0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA0Cu;
        // 0x1dfa10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa0c) {
            ctx->pc = 0x1DFA40u;
            goto label_1dfa40;
        }
    }
    ctx->pc = 0x1DFA14u;
    // 0x1dfa14: 0x0  nop
    ctx->pc = 0x1dfa14u;
    // NOP
label_1dfa18:
    // 0x1dfa18: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1dfa18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1dfa1c: 0xc075674  jal         func_1D59D0
    ctx->pc = 0x1DFA1Cu;
    SET_GPR_U32(ctx, 31, 0x1DFA24u);
    ctx->pc = 0x1DFA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFA1Cu;
    // 0x1dfa20: 0x24054000  addiu       $a1, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59D0u, 0x1DFA1Cu, 0x1DFA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFA24u;
label_1dfa24:
    // 0x1dfa24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DFA24u;
    {
        const bool branch_taken_0x1dfa24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA24u;
        // 0x1dfa28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa24) {
            ctx->pc = 0x1DFA40u;
            goto label_1dfa40;
        }
    }
    ctx->pc = 0x1DFA2Cu;
    // 0x1dfa2c: 0x0  nop
    ctx->pc = 0x1dfa2cu;
    // NOP
label_1dfa30:
    // 0x1dfa30: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1dfa30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1dfa34: 0xc075674  jal         func_1D59D0
    ctx->pc = 0x1DFA34u;
    SET_GPR_U32(ctx, 31, 0x1DFA3Cu);
    ctx->pc = 0x1DFA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFA34u;
    // 0x1dfa38: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59D0u, 0x1DFA34u, 0x1DFA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFA3Cu;
label_1dfa3c:
    // 0x1dfa3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dfa3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dfa40:
    // 0x1dfa40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dfa40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1dfa44:
    // 0x1dfa44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dfa44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfa48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dfa48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfa4c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1dfa4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dfa50: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA50u;
        // 0x1dfa54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFA50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFA58u;
}
