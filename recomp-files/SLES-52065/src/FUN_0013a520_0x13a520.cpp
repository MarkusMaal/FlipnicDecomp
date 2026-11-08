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

// Function: FUN_0013a520
// Address: 0x13a520 - 0x13a7d4
void FUN_0013a520_0x13a520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013a520_0x13a520");
#endif

    switch (ctx->pc) {
        case 0x13a5c8u: goto label_13a5c8;
        default: break;
    }

    ctx->pc = 0x13a520u;

    // 0x13a520: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x13a520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x13a524: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x13a524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x13a528: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x13a528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x13a52c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13a52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x13a530: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13a530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13a534: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13a534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13a538: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13a538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13a53c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13a53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13a540: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13a540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13a544: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13a544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13a548: 0x8c850090  lw          $a1, 0x90($a0)
    ctx->pc = 0x13a548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x13a54c: 0x8ca70040  lw          $a3, 0x40($a1)
    ctx->pc = 0x13a54cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x13a550: 0x76942  srl         $t5, $a3, 5
    ctx->pc = 0x13a550u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 7), 5));
    // 0x13a554: 0x11a00005  beqz        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x13A554u;
    {
        const bool branch_taken_0x13a554 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A554u;
        // 0x13a558: 0x30e3001f  andi        $v1, $a3, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a554) {
            ctx->pc = 0x13A56Cu;
            goto label_13a56c;
        }
    }
    ctx->pc = 0x13A55Cu;
    // 0x13a55c: 0x2c610003  sltiu       $at, $v1, 0x3
    ctx->pc = 0x13a55cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x13a560: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x13A560u;
    {
        const bool branch_taken_0x13a560 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a560) {
            ctx->pc = 0x13A56Cu;
            goto label_13a56c;
        }
    }
    ctx->pc = 0x13A568u;
    // 0x13a568: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x13a568u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
label_13a56c:
    // 0x13a56c: 0x8ca30068  lw          $v1, 0x68($a1)
    ctx->pc = 0x13a56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x13a570: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x13a570u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a574: 0x25ef0004  addiu       $t7, $t7, 0x4
    ctx->pc = 0x13a574u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
    // 0x13a578: 0xd2940  sll         $a1, $t5, 5
    ctx->pc = 0x13a578u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 13), 5));
    // 0x13a57c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x13a57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x13a580: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x13A580u;
    {
        const bool branch_taken_0x13a580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A580u;
        // 0x13a584: 0xe57023  subu        $t6, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a580) {
            ctx->pc = 0x13A58Cu;
            goto label_13a58c;
        }
    }
    ctx->pc = 0x13A588u;
    // 0x13a588: 0x25ef0002  addiu       $t7, $t7, 0x2
    ctx->pc = 0x13a588u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
label_13a58c:
    // 0x13a58c: 0x3c056d00  lui         $a1, 0x6D00
    ctx->pc = 0x13a58cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27904 << 16));
    // 0x13a590: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x13a590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x13a594: 0x34a98021  ori         $t1, $a1, 0x8021
    ctx->pc = 0x13a594u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32801);
    // 0x13a598: 0x34b68121  ori         $s6, $a1, 0x8121
    ctx->pc = 0x13a598u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33057);
    // 0x13a59c: 0x3c056c00  lui         $a1, 0x6C00
    ctx->pc = 0x13a59cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27648 << 16));
    // 0x13a5a0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x13a5a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a5a4: 0x34b78023  ori         $s7, $a1, 0x8023
    ctx->pc = 0x13a5a4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32803);
    // 0x13a5a8: 0x34be8123  ori         $fp, $a1, 0x8123
    ctx->pc = 0x13a5a8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33059);
    // 0x13a5ac: 0x25a50001  addiu       $a1, $t5, 0x1
    ctx->pc = 0x13a5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x13a5b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x13a5b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a5b4: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x13a5b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x13a5b8: 0x34630104  ori         $v1, $v1, 0x104
    ctx->pc = 0x13a5b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)260);
    // 0x13a5bc: 0x27b000ac  addiu       $s0, $sp, 0xAC
    ctx->pc = 0x13a5bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x13a5c0: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x13A5C0u;
    {
        const bool branch_taken_0x13a5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A5C0u;
        // 0x13a5c4: 0x7fa50090  sq          $a1, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a5c0) {
            ctx->pc = 0x13A798u;
            goto label_13a798;
        }
    }
    ctx->pc = 0x13A5C8u;
label_13a5c8:
    // 0x13a5c8: 0x8cc70068  lw          $a3, 0x68($a2)
    ctx->pc = 0x13a5c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 104)));
    // 0x13a5cc: 0x8c850090  lw          $a1, 0x90($a0)
    ctx->pc = 0x13a5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x13a5d0: 0x8ccb0028  lw          $t3, 0x28($a2)
    ctx->pc = 0x13a5d0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x13a5d4: 0x8ce80004  lw          $t0, 0x4($a3)
    ctx->pc = 0x13a5d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x13a5d8: 0x8ca500a0  lw          $a1, 0xA0($a1)
    ctx->pc = 0x13a5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 160)));
    // 0x13a5dc: 0x8ce70008  lw          $a3, 0x8($a3)
    ctx->pc = 0x13a5dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x13a5e0: 0x1684018  mult        $t0, $t3, $t0
    ctx->pc = 0x13a5e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x13a5e4: 0x71673818  mult1       $a3, $t3, $a3
    ctx->pc = 0x13a5e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x13a5e8: 0x2673821  addu        $a3, $s3, $a3
    ctx->pc = 0x13a5e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x13a5ec: 0xa7c821  addu        $t9, $a1, $a3
    ctx->pc = 0x13a5ecu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x13a5f0: 0x2683821  addu        $a3, $s3, $t0
    ctx->pc = 0x13a5f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
    // 0x13a5f4: 0x168d0003  bne         $s4, $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A5F4u;
    {
        const bool branch_taken_0x13a5f4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 13));
        ctx->pc = 0x13A5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A5F4u;
        // 0x13a5f8: 0xa7c021  addu        $t8, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a5f4) {
            ctx->pc = 0x13A604u;
            goto label_13a604;
        }
    }
    ctx->pc = 0x13A5FCu;
    // 0x13a5fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13A5FCu;
    {
        const bool branch_taken_0x13a5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A5FCu;
        // 0x13a600: 0x1c0902d  daddu       $s2, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a5fc) {
            ctx->pc = 0x13A608u;
            goto label_13a608;
        }
    }
    ctx->pc = 0x13A604u;
label_13a604:
    // 0x13a604: 0x24120022  addiu       $s2, $zero, 0x22
    ctx->pc = 0x13a604u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_13a608:
    // 0x13a608: 0x8f888594  lw          $t0, -0x7A6C($gp)
    ctx->pc = 0x13a608u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935956)));
    // 0x13a60c: 0x1f42818  mult        $a1, $t7, $s4
    ctx->pc = 0x13a60cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x13a610: 0x53900  sll         $a3, $a1, 4
    ctx->pc = 0x13a610u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x13a614: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x13a614u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x13a618: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x13a618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13a61c: 0x8ca50088  lw          $a1, 0x88($a1)
    ctx->pc = 0x13a61cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x13a620: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x13a620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x13a624: 0xafa500ac  sw          $a1, 0xAC($sp)
    ctx->pc = 0x13a624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 5));
    // 0x13a628: 0x8fa700ac  lw          $a3, 0xAC($sp)
    ctx->pc = 0x13a628u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x13a62c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x13a62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13a630: 0xa0e50003  sb          $a1, 0x3($a3)
    ctx->pc = 0x13a630u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x13a634: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x13a634u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x13a638: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x13a638u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x13a63c: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x13a63cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x13a640: 0xa4e00000  sh          $zero, 0x0($a3)
    ctx->pc = 0x13a640u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x13a644: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x13a644u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x13a648: 0xace5000c  sw          $a1, 0xC($a3)
    ctx->pc = 0x13a648u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
    // 0x13a64c: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x13a64cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x13a650: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x13a650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x13a654: 0xafa500ac  sw          $a1, 0xAC($sp)
    ctx->pc = 0x13a654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 5));
    // 0x13a658: 0x8c850090  lw          $a1, 0x90($a0)
    ctx->pc = 0x13a658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x13a65c: 0x8ca50068  lw          $a1, 0x68($a1)
    ctx->pc = 0x13a65cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x13a660: 0x30a50002  andi        $a1, $a1, 0x2
    ctx->pc = 0x13a660u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x13a664: 0x10a00022  beqz        $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x13A664u;
    {
        const bool branch_taken_0x13a664 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a664) {
            ctx->pc = 0x13A6F0u;
            goto label_13a6f0;
        }
    }
    ctx->pc = 0x13A66Cu;
    // 0x13a66c: 0x8ccb003c  lw          $t3, 0x3C($a2)
    ctx->pc = 0x13a66cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x13a670: 0x1860c0  sll         $t4, $t8, 3
    ctx->pc = 0x13a670u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 24), 3));
    // 0x13a674: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x13a674u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a678: 0x26470001  addiu       $a3, $s2, 0x1
    ctx->pc = 0x13a678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x13a67c: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x13a67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x13a680: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x13a680u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x13a684: 0x5a842  srl         $s5, $a1, 1
    ctx->pc = 0x13a684u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x13a688: 0x1938c0  sll         $a3, $t9, 3
    ctx->pc = 0x13a688u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 3));
    // 0x13a68c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x13a68cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x13a690: 0xa94025  or          $t0, $a1, $t1
    ctx->pc = 0x13a690u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x13a694: 0x16c5821  addu        $t3, $t3, $t4
    ctx->pc = 0x13a694u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x13a698: 0xa22a0003  sb          $t2, 0x3($s1)
    ctx->pc = 0x13a698u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x13a69c: 0xb62825  or          $a1, $a1, $s6
    ctx->pc = 0x13a69cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 22));
    // 0x13a6a0: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x13a6a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x13a6a4: 0xae2b0004  sw          $t3, 0x4($s1)
    ctx->pc = 0x13a6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 11));
    // 0x13a6a8: 0xa6350000  sh          $s5, 0x0($s1)
    ctx->pc = 0x13a6a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 21));
    // 0x13a6ac: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x13a6acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x13a6b0: 0xae28000c  sw          $t0, 0xC($s1)
    ctx->pc = 0x13a6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 8));
    // 0x13a6b4: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x13a6b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a6b8: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x13a6b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x13a6bc: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x13a6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    // 0x13a6c0: 0x8cc8003c  lw          $t0, 0x3C($a2)
    ctx->pc = 0x13a6c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x13a6c4: 0x8e0b0000  lw          $t3, 0x0($s0)
    ctx->pc = 0x13a6c4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a6c8: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x13a6c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x13a6cc: 0xa16a0003  sb          $t2, 0x3($t3)
    ctx->pc = 0x13a6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x13a6d0: 0xa1600002  sb          $zero, 0x2($t3)
    ctx->pc = 0x13a6d0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x13a6d4: 0xad670004  sw          $a3, 0x4($t3)
    ctx->pc = 0x13a6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 7));
    // 0x13a6d8: 0xa5750000  sh          $s5, 0x0($t3)
    ctx->pc = 0x13a6d8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 21));
    // 0x13a6dc: 0xad630008  sw          $v1, 0x8($t3)
    ctx->pc = 0x13a6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 3));
    // 0x13a6e0: 0xad65000c  sw          $a1, 0xC($t3)
    ctx->pc = 0x13a6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 5));
    // 0x13a6e4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x13a6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a6e8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x13a6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x13a6ec: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x13a6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_13a6f0:
    // 0x13a6f0: 0x8cd10038  lw          $s1, 0x38($a2)
    ctx->pc = 0x13a6f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x13a6f4: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x13a6f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a6f8: 0x182900  sll         $a1, $t8, 4
    ctx->pc = 0x13a6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 24), 4));
    // 0x13a6fc: 0x124400  sll         $t0, $s2, 16
    ctx->pc = 0x13a6fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x13a700: 0x195900  sll         $t3, $t9, 4
    ctx->pc = 0x13a700u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x13a704: 0x1176025  or          $t4, $t0, $s7
    ctx->pc = 0x13a704u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) | GPR_U64(ctx, 23));
    // 0x13a708: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x13a708u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x13a70c: 0x11e4025  or          $t0, $t0, $fp
    ctx->pc = 0x13a70cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 30));
    // 0x13a710: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x13a710u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x13a714: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x13a714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x13a718: 0xa0ea0003  sb          $t2, 0x3($a3)
    ctx->pc = 0x13a718u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x13a71c: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x13a71cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x13a720: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x13a720u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x13a724: 0xa4f20000  sh          $s2, 0x0($a3)
    ctx->pc = 0x13a724u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x13a728: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x13a728u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x13a72c: 0xacec000c  sw          $t4, 0xC($a3)
    ctx->pc = 0x13a72cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 12));
    // 0x13a730: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x13a730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a734: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x13a734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x13a738: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x13a738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x13a73c: 0x8cc50038  lw          $a1, 0x38($a2)
    ctx->pc = 0x13a73cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x13a740: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x13a740u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a744: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x13a744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x13a748: 0xa0ea0003  sb          $t2, 0x3($a3)
    ctx->pc = 0x13a748u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 10));
    // 0x13a74c: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x13a74cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x13a750: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x13a750u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x13a754: 0xa4f20000  sh          $s2, 0x0($a3)
    ctx->pc = 0x13a754u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x13a758: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x13a758u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x13a75c: 0xace8000c  sw          $t0, 0xC($a3)
    ctx->pc = 0x13a75cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 8));
    // 0x13a760: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x13a760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a764: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x13a764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x13a768: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x13a768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x13a76c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x13a76cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a770: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x13a770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x13a774: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x13a774u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x13a778: 0xa0e50003  sb          $a1, 0x3($a3)
    ctx->pc = 0x13a778u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x13a77c: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x13a77cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x13a780: 0xa4e00000  sh          $zero, 0x0($a3)
    ctx->pc = 0x13a780u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x13a784: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x13a784u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x13a788: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x13a788u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x13a78c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x13a78cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a790: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x13a790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x13a794: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x13a794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_13a798:
    // 0x13a798: 0x7ba50090  lq          $a1, 0x90($sp)
    ctx->pc = 0x13a798u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13a79c: 0x285282b  sltu        $a1, $s4, $a1
    ctx->pc = 0x13a79cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x13a7a0: 0x14a0ff89  bnez        $a1, . + 4 + (-0x77 << 2)
    ctx->pc = 0x13A7A0u;
    {
        const bool branch_taken_0x13a7a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a7a0) {
            ctx->pc = 0x13A5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13a5c8;
        }
    }
    ctx->pc = 0x13A7A8u;
    // 0x13a7a8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x13a7a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13a7ac: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x13a7acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13a7b0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13a7b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13a7b4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13a7b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13a7b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13a7b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13a7bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13a7bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13a7c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13a7c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a7c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13a7c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a7c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13a7c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a7cc: 0x3e00008  jr          $ra
    ctx->pc = 0x13A7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A7CCu;
        // 0x13a7d0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A7D4u;
}
