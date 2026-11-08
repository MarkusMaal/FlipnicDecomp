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

// Function: FUN_00202240
// Address: 0x202240 - 0x203140
void FUN_00202240_0x202240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00202240_0x202240");
#endif

    switch (ctx->pc) {
        case 0x202288u: goto label_202288;
        case 0x2022f8u: goto label_2022f8;
        case 0x20231cu: goto label_20231c;
        case 0x202350u: goto label_202350;
        case 0x2023d0u: goto label_2023d0;
        case 0x202420u: goto label_202420;
        case 0x202440u: goto label_202440;
        case 0x202578u: goto label_202578;
        case 0x2025c0u: goto label_2025c0;
        case 0x202670u: goto label_202670;
        case 0x202690u: goto label_202690;
        case 0x2026c0u: goto label_2026c0;
        case 0x2026d0u: goto label_2026d0;
        case 0x2026e8u: goto label_2026e8;
        case 0x2026f4u: goto label_2026f4;
        case 0x202700u: goto label_202700;
        case 0x202780u: goto label_202780;
        case 0x2027a0u: goto label_2027a0;
        case 0x2027d4u: goto label_2027d4;
        case 0x20280cu: goto label_20280c;
        case 0x202828u: goto label_202828;
        case 0x20282cu: goto label_20282c;
        case 0x202860u: goto label_202860;
        case 0x202880u: goto label_202880;
        case 0x2028d4u: goto label_2028d4;
        case 0x202974u: goto label_202974;
        case 0x2029a0u: goto label_2029a0;
        case 0x2029c0u: goto label_2029c0;
        case 0x202a04u: goto label_202a04;
        case 0x202a14u: goto label_202a14;
        case 0x202a28u: goto label_202a28;
        case 0x202a34u: goto label_202a34;
        case 0x202a44u: goto label_202a44;
        case 0x202a4cu: goto label_202a4c;
        case 0x202a50u: goto label_202a50;
        case 0x202a68u: goto label_202a68;
        case 0x202a70u: goto label_202a70;
        case 0x202a7cu: goto label_202a7c;
        case 0x202a9cu: goto label_202a9c;
        case 0x202ab8u: goto label_202ab8;
        case 0x202ac4u: goto label_202ac4;
        case 0x202ad4u: goto label_202ad4;
        case 0x202ae4u: goto label_202ae4;
        case 0x202b98u: goto label_202b98;
        case 0x202ba4u: goto label_202ba4;
        case 0x202bb4u: goto label_202bb4;
        case 0x202bccu: goto label_202bcc;
        case 0x202be0u: goto label_202be0;
        case 0x202c44u: goto label_202c44;
        case 0x202c6cu: goto label_202c6c;
        case 0x202c84u: goto label_202c84;
        case 0x202c9cu: goto label_202c9c;
        case 0x202ce8u: goto label_202ce8;
        case 0x202cf4u: goto label_202cf4;
        case 0x202d00u: goto label_202d00;
        case 0x202d98u: goto label_202d98;
        case 0x202db0u: goto label_202db0;
        case 0x202db8u: goto label_202db8;
        case 0x202dc0u: goto label_202dc0;
        case 0x202dd4u: goto label_202dd4;
        case 0x202de0u: goto label_202de0;
        case 0x202decu: goto label_202dec;
        case 0x202df8u: goto label_202df8;
        case 0x202e24u: goto label_202e24;
        case 0x202e2cu: goto label_202e2c;
        case 0x202e38u: goto label_202e38;
        case 0x202e64u: goto label_202e64;
        case 0x202e7cu: goto label_202e7c;
        case 0x202e9cu: goto label_202e9c;
        case 0x202eb0u: goto label_202eb0;
        case 0x202ebcu: goto label_202ebc;
        case 0x202ec8u: goto label_202ec8;
        case 0x202ed4u: goto label_202ed4;
        case 0x202ee4u: goto label_202ee4;
        case 0x202f04u: goto label_202f04;
        case 0x202f18u: goto label_202f18;
        case 0x202f28u: goto label_202f28;
        case 0x202fdcu: goto label_202fdc;
        case 0x202ff0u: goto label_202ff0;
        case 0x203000u: goto label_203000;
        case 0x203014u: goto label_203014;
        case 0x20302cu: goto label_20302c;
        case 0x203044u: goto label_203044;
        case 0x20305cu: goto label_20305c;
        case 0x203070u: goto label_203070;
        case 0x203088u: goto label_203088;
        case 0x2030bcu: goto label_2030bc;
        case 0x2030c8u: goto label_2030c8;
        case 0x2030d4u: goto label_2030d4;
        case 0x2030e0u: goto label_2030e0;
        case 0x2030ecu: goto label_2030ec;
        case 0x203110u: goto label_203110;
        default: break;
    }

    ctx->pc = 0x202240u;

    // 0x202240: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x202240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x202244: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x202244u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202248: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x202248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x20224c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20224cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202250: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x202250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x202254: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x202254u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202258: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x202258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x20225c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x20225cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202260: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x202260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x202264: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x202264u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202268: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x202268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x20226c: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x20226cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x202270: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x202270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x202274: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x202274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x202278: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x202278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x20227c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x20227cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x202280: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x202280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x202284: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x202284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_202288:
    // 0x202288: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x202288u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x20228c: 0x2c62002e  sltiu       $v0, $v1, 0x2E
    ctx->pc = 0x20228cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)46) ? 1 : 0);
    // 0x202290: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x202290u;
    {
        const bool branch_taken_0x202290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202290u;
        // 0x202294: 0x92a60000  lbu         $a2, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202290) {
            ctx->pc = 0x2022DCu;
            goto label_2022dc;
        }
    }
    ctx->pc = 0x202298u;
    // 0x202298: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x202298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x20229c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20229cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2022a0: 0x244250b0  addiu       $v0, $v0, 0x50B0
    ctx->pc = 0x2022a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20656));
    // 0x2022a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2022a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2022a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2022a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2022ac: 0x800008  jr          $a0
    ctx->pc = 0x2022ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2022B4u: goto label_2022b4;
            case 0x2022BCu: goto label_2022bc;
            case 0x2022D4u: goto label_2022d4;
            case 0x2022DCu: goto label_2022dc;
            case 0x20252Cu: goto label_20252c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2022ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2022B4u;
label_2022b4:
    // 0x2022b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2022b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2022b8: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x2022b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_2022bc:
    // 0x2022bc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2022bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2022c0: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x2022c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2022c4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2022C4u;
    {
        const bool branch_taken_0x2022c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2022C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2022C4u;
        // 0x2022c8: 0x92a60000  lbu         $a2, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2022c4) {
            ctx->pc = 0x2022DCu;
            goto label_2022dc;
        }
    }
    ctx->pc = 0x2022CCu;
    // 0x2022cc: 0x10000387  b           . + 4 + (0x387 << 2)
    ctx->pc = 0x2022CCu;
    {
        const bool branch_taken_0x2022cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2022D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2022CCu;
        // 0x2022d0: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2022cc) {
            ctx->pc = 0x2030ECu;
            goto label_2030ec;
        }
    }
    ctx->pc = 0x2022D4u;
label_2022d4:
    // 0x2022d4: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x2022D4u;
    {
        const bool branch_taken_0x2022d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2022D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2022D4u;
        // 0x2022d8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2022d4) {
            ctx->pc = 0x202288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202288;
        }
    }
    ctx->pc = 0x2022DCu;
label_2022dc:
    // 0x2022dc: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x2022dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x2022e0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2022e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2022e4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2022e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2022e8: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2022E8u;
    {
        const bool branch_taken_0x2022e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2022ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2022E8u;
        // 0x2022ec: 0x61600  sll         $v0, $a2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2022e8) {
            ctx->pc = 0x20231Cu;
            goto label_20231c;
        }
    }
    ctx->pc = 0x2022F0u;
    // 0x2022f0: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2022f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2022f4: 0x0  nop
    ctx->pc = 0x2022f4u;
    // NOP
label_2022f8:
    // 0x2022f8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2022f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2022fc: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x2022fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x202300: 0x92a60000  lbu         $a2, 0x0($s5)
    ctx->pc = 0x202300u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x202304: 0x0  nop
    ctx->pc = 0x202304u;
    // NOP
    // 0x202308: 0x0  nop
    ctx->pc = 0x202308u;
    // NOP
    // 0x20230c: 0x1043fffa  beq         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20230Cu;
    {
        const bool branch_taken_0x20230c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x20230c) {
            ctx->pc = 0x2022F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2022f8;
        }
    }
    ctx->pc = 0x202314u;
    // 0x202314: 0x10400375  beqz        $v0, . + 4 + (0x375 << 2)
    ctx->pc = 0x202314u;
    {
        const bool branch_taken_0x202314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202314u;
        // 0x202318: 0x61600  sll         $v0, $a2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202314) {
            ctx->pc = 0x2030ECu;
            goto label_2030ec;
        }
    }
    ctx->pc = 0x20231Cu;
label_20231c:
    // 0x20231c: 0xafb50018  sw          $s5, 0x18($sp)
    ctx->pc = 0x20231cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 21));
    // 0x202320: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x202320u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x202324: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x202324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202328: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x202328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x20232c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20232cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202330: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x202330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x202334: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x202334u;
    {
        const bool branch_taken_0x202334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202334u;
        // 0x202338: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202334) {
            ctx->pc = 0x2023A8u;
            goto label_2023a8;
        }
    }
    ctx->pc = 0x20233Cu;
    // 0x20233c: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x20233cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x202340: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x202340u;
    {
        const bool branch_taken_0x202340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202340u;
        // 0x202344: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202340) {
            ctx->pc = 0x2023ACu;
            goto label_2023ac;
        }
    }
    ctx->pc = 0x202348u;
    // 0x202348: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x202348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x20234c: 0x2a820009  slti        $v0, $s4, 0x9
    ctx->pc = 0x20234cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
label_202350:
    // 0x202350: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x202350u;
    {
        const bool branch_taken_0x202350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202350u;
        // 0x202354: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202350) {
            ctx->pc = 0x20236Cu;
            goto label_20236c;
        }
    }
    ctx->pc = 0x202358u;
    // 0x202358: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x202358u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x20235c: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x20235cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x202360: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x202360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x202364: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x202364u;
    {
        const bool branch_taken_0x202364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202364u;
        // 0x202368: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202364) {
            ctx->pc = 0x202388u;
            goto label_202388;
        }
    }
    ctx->pc = 0x20236Cu;
label_20236c:
    // 0x20236c: 0x2a820010  slti        $v0, $s4, 0x10
    ctx->pc = 0x20236cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x202370: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x202370u;
    {
        const bool branch_taken_0x202370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202370u;
        // 0x202374: 0x1210b8  dsll        $v0, $s2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202370) {
            ctx->pc = 0x202388u;
            goto label_202388;
        }
    }
    ctx->pc = 0x202378u;
    // 0x202378: 0x52102d  daddu       $v0, $v0, $s2
    ctx->pc = 0x202378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 18));
    // 0x20237c: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x20237cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x202380: 0x82102d  daddu       $v0, $a0, $v0
    ctx->pc = 0x202380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x202384: 0x6452ffd0  daddiu      $s2, $v0, -0x30
    ctx->pc = 0x202384u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967248);
label_202388:
    // 0x202388: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x202388u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x20238c: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x20238cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x202390: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x202390u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x202394: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x202394u;
    {
        const bool branch_taken_0x202394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202394u;
        // 0x202398: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202394) {
            ctx->pc = 0x2023A8u;
            goto label_2023a8;
        }
    }
    ctx->pc = 0x20239Cu;
    // 0x20239c: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x20239cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x2023a0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2023A0u;
    {
        const bool branch_taken_0x2023a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2023A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2023A0u;
        // 0x2023a4: 0x2a820009  slti        $v0, $s4, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2023a0) {
            ctx->pc = 0x202350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202350;
        }
    }
    ctx->pc = 0x2023A8u;
label_2023a8:
    // 0x2023a8: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x2023a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_2023ac:
    // 0x2023ac: 0x14820053  bne         $a0, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x2023ACu;
    {
        const bool branch_taken_0x2023ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2023B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2023ACu;
        // 0x2023b0: 0x280f02d  daddu       $fp, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2023ac) {
            ctx->pc = 0x2024FCu;
            goto label_2024fc;
        }
    }
    ctx->pc = 0x2023B4u;
    // 0x2023b4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2023b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2023b8: 0x16800015  bnez        $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x2023B8u;
    {
        const bool branch_taken_0x2023b8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2023BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2023B8u;
        // 0x2023bc: 0x82a40000  lb          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2023b8) {
            ctx->pc = 0x202410u;
            goto label_202410;
        }
    }
    ctx->pc = 0x2023C0u;
    // 0x2023c0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2023c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2023c4: 0x5482000a  bnel        $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2023C4u;
    {
        const bool branch_taken_0x2023c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2023c4) {
            ctx->pc = 0x2023C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2023C4u;
            // 0x2023c8: 0x2482ffcf  addiu       $v0, $a0, -0x31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2023F0u;
            goto label_2023f0;
        }
    }
    ctx->pc = 0x2023CCu;
    // 0x2023cc: 0x0  nop
    ctx->pc = 0x2023ccu;
    // NOP
label_2023d0:
    // 0x2023d0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2023d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2023d4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2023d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2023d8: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x2023d8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2023dc: 0x0  nop
    ctx->pc = 0x2023dcu;
    // NOP
    // 0x2023e0: 0x0  nop
    ctx->pc = 0x2023e0u;
    // NOP
    // 0x2023e4: 0x1082fffa  beq         $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2023E4u;
    {
        const bool branch_taken_0x2023e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2023e4) {
            ctx->pc = 0x2023D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2023d0;
        }
    }
    ctx->pc = 0x2023ECu;
    // 0x2023ec: 0x2482ffcf  addiu       $v0, $a0, -0x31
    ctx->pc = 0x2023ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
label_2023f0:
    // 0x2023f0: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x2023f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2023f4: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2023F4u;
    {
        const bool branch_taken_0x2023f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2023F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2023F4u;
        // 0x2023f8: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2023f4) {
            ctx->pc = 0x202500u;
            goto label_202500;
        }
    }
    ctx->pc = 0x2023FCu;
    // 0x2023fc: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x2023fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202400: 0x2486ffd0  addiu       $a2, $a0, -0x30
    ctx->pc = 0x202400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x202404: 0xafb50018  sw          $s5, 0x18($sp)
    ctx->pc = 0x202404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 21));
    // 0x202408: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x202408u;
    {
        const bool branch_taken_0x202408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202408u;
        // 0x20240c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202408) {
            ctx->pc = 0x202420u;
            goto label_202420;
        }
    }
    ctx->pc = 0x202410u;
label_202410:
    // 0x202410: 0x2486ffd0  addiu       $a2, $a0, -0x30
    ctx->pc = 0x202410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x202414: 0x2cc2000a  sltiu       $v0, $a2, 0xA
    ctx->pc = 0x202414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x202418: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x202418u;
    {
        const bool branch_taken_0x202418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202418u;
        // 0x20241c: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202418) {
            ctx->pc = 0x202500u;
            goto label_202500;
        }
    }
    ctx->pc = 0x202420u;
label_202420:
    // 0x202420: 0x10c0002e  beqz        $a2, . + 4 + (0x2E << 2)
    ctx->pc = 0x202420u;
    {
        const bool branch_taken_0x202420 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x202424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202420u;
        // 0x202424: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202420) {
            ctx->pc = 0x2024DCu;
            goto label_2024dc;
        }
    }
    ctx->pc = 0x202428u;
    // 0x202428: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x202428u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20242c: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x20242cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x202430: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x202430u;
    {
        const bool branch_taken_0x202430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202430u;
        // 0x202434: 0x1284821  addu        $t1, $t1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202430) {
            ctx->pc = 0x20248Cu;
            goto label_20248c;
        }
    }
    ctx->pc = 0x202438u;
    // 0x202438: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x202438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x20243c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x20243cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_202440:
    // 0x202440: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x202440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x202444: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x202444u;
    {
        const bool branch_taken_0x202444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202444u;
        // 0x202448: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202444) {
            ctx->pc = 0x202460u;
            goto label_202460;
        }
    }
    ctx->pc = 0x20244Cu;
    // 0x20244c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x20244cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202450: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x202450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x202454: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x202454u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x202458: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x202458u;
    {
        const bool branch_taken_0x202458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202458u;
        // 0x20245c: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202458) {
            ctx->pc = 0x202474u;
            goto label_202474;
        }
    }
    ctx->pc = 0x202460u;
label_202460:
    // 0x202460: 0x2a820011  slti        $v0, $s4, 0x11
    ctx->pc = 0x202460u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x202464: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x202464u;
    {
        const bool branch_taken_0x202464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202464u;
        // 0x202468: 0x1210b8  dsll        $v0, $s2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202464) {
            ctx->pc = 0x202474u;
            goto label_202474;
        }
    }
    ctx->pc = 0x20246Cu;
    // 0x20246c: 0x52102d  daddu       $v0, $v0, $s2
    ctx->pc = 0x20246cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 18));
    // 0x202470: 0x29078  dsll        $s2, $v0, 1
    ctx->pc = 0x202470u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << 1);
label_202474:
    // 0x202474: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x202474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x202478: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x202478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x20247c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x20247Cu;
    {
        const bool branch_taken_0x20247c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20247Cu;
        // 0x202480: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20247c) {
            ctx->pc = 0x202440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202440;
        }
    }
    ctx->pc = 0x202484u;
    // 0x202484: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x202484u;
    {
        const bool branch_taken_0x202484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202484u;
        // 0x202488: 0x28420009  slti        $v0, $v0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202484) {
            ctx->pc = 0x202498u;
            goto label_202498;
        }
    }
    ctx->pc = 0x20248Cu;
label_20248c:
    // 0x20248c: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x20248cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x202490: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x202490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202494: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x202494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
label_202498:
    // 0x202498: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x202498u;
    {
        const bool branch_taken_0x202498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202498u;
        // 0x20249c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202498) {
            ctx->pc = 0x2024BCu;
            goto label_2024bc;
        }
    }
    ctx->pc = 0x2024A0u;
    // 0x2024a0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2024a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2024a4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2024a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2024a8: 0xc00013  mtlo        $a2
    ctx->pc = 0x2024a8u;
    ctx->lo = GPR_U64(ctx, 6);
    // 0x2024ac: 0x70820000  madd        $zero, $a0, $v0
    ctx->pc = 0x2024acu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x2024b0: 0x2012  mflo        $a0
    ctx->pc = 0x2024b0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x2024b4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2024B4u;
    {
        const bool branch_taken_0x2024b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2024B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2024B4u;
        // 0x2024b8: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2024b4) {
            ctx->pc = 0x2024D4u;
            goto label_2024d4;
        }
    }
    ctx->pc = 0x2024BCu;
label_2024bc:
    // 0x2024bc: 0x2a820011  slti        $v0, $s4, 0x11
    ctx->pc = 0x2024bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2024c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2024C0u;
    {
        const bool branch_taken_0x2024c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2024C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2024C0u;
        // 0x2024c4: 0x1210b8  dsll        $v0, $s2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2024c0) {
            ctx->pc = 0x2024D4u;
            goto label_2024d4;
        }
    }
    ctx->pc = 0x2024C8u;
    // 0x2024c8: 0x52102d  daddu       $v0, $v0, $s2
    ctx->pc = 0x2024c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 18));
    // 0x2024cc: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x2024ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x2024d0: 0xc2902d  daddu       $s2, $a2, $v0
    ctx->pc = 0x2024d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 2));
label_2024d4:
    // 0x2024d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2024D4u;
    {
        const bool branch_taken_0x2024d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2024D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2024D4u;
        // 0x2024d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2024d4) {
            ctx->pc = 0x2024E0u;
            goto label_2024e0;
        }
    }
    ctx->pc = 0x2024DCu;
label_2024dc:
    // 0x2024dc: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x2024dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2024e0:
    // 0x2024e0: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x2024e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2024e4: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x2024e4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2024e8: 0x2482ffd0  addiu       $v0, $a0, -0x30
    ctx->pc = 0x2024e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x2024ec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2024ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2024f0: 0x2cc3000a  sltiu       $v1, $a2, 0xA
    ctx->pc = 0x2024f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2024f4: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x2024F4u;
    {
        const bool branch_taken_0x2024f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2024f4) {
            ctx->pc = 0x202420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202420;
        }
    }
    ctx->pc = 0x2024FCu;
label_2024fc:
    // 0x2024fc: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x2024fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_202500:
    // 0x202500: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x202500u;
    {
        const bool branch_taken_0x202500 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x202504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202500u;
        // 0x202504: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202500) {
            ctx->pc = 0x202514u;
            goto label_202514;
        }
    }
    ctx->pc = 0x202508u;
    // 0x202508: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x202508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x20250c: 0x14820048  bne         $a0, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x20250Cu;
    {
        const bool branch_taken_0x20250c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x20250c) {
            ctx->pc = 0x202630u;
            goto label_202630;
        }
    }
    ctx->pc = 0x202514u;
label_202514:
    // 0x202514: 0x56800007  bnel        $s4, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x202514u;
    {
        const bool branch_taken_0x202514 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x202514) {
            ctx->pc = 0x202518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202514u;
            // 0x202518: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202534u;
            goto label_202534;
        }
    }
    ctx->pc = 0x20251Cu;
    // 0x20251c: 0x55000005  bnel        $t0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x20251Cu;
    {
        const bool branch_taken_0x20251c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x20251c) {
            ctx->pc = 0x202520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20251Cu;
            // 0x202520: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202534u;
            goto label_202534;
        }
    }
    ctx->pc = 0x202524u;
    // 0x202524: 0x55400003  bnel        $t2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x202524u;
    {
        const bool branch_taken_0x202524 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x202524) {
            ctx->pc = 0x202528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202524u;
            // 0x202528: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202534u;
            goto label_202534;
        }
    }
    ctx->pc = 0x20252Cu;
label_20252c:
    // 0x20252c: 0x100002ef  b           . + 4 + (0x2EF << 2)
    ctx->pc = 0x20252Cu;
    {
        const bool branch_taken_0x20252c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20252Cu;
        // 0x202530: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20252c) {
            ctx->pc = 0x2030ECu;
            goto label_2030ec;
        }
    }
    ctx->pc = 0x202534u;
label_202534:
    // 0x202534: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x202534u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x202538: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x202538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x20253c: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x20253cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x202540: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x202540u;
    {
        const bool branch_taken_0x202540 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x202544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202540u;
        // 0x202544: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202540) {
            ctx->pc = 0x202558u;
            goto label_202558;
        }
    }
    ctx->pc = 0x202548u;
    // 0x202548: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x202548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x20254c: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20254Cu;
    {
        const bool branch_taken_0x20254c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x202550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20254Cu;
        // 0x202550: 0x2482ffd0  addiu       $v0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20254c) {
            ctx->pc = 0x202564u;
            goto label_202564;
        }
    }
    ctx->pc = 0x202554u;
    // 0x202554: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x202554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_202558:
    // 0x202558: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x202558u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x20255c: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x20255cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x202560: 0x2482ffd0  addiu       $v0, $a0, -0x30
    ctx->pc = 0x202560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_202564:
    // 0x202564: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x202564u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x202568: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x202568u;
    {
        const bool branch_taken_0x202568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202568u;
        // 0x20256c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202568) {
            ctx->pc = 0x20262Cu;
            goto label_20262c;
        }
    }
    ctx->pc = 0x202570u;
    // 0x202570: 0x54820009  bnel        $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x202570u;
    {
        const bool branch_taken_0x202570 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x202570) {
            ctx->pc = 0x202574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202570u;
            // 0x202574: 0x2482ffcf  addiu       $v0, $a0, -0x31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202598u;
            goto label_202598;
        }
    }
    ctx->pc = 0x202578u;
label_202578:
    // 0x202578: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x202578u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x20257c: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x20257cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x202580: 0x0  nop
    ctx->pc = 0x202580u;
    // NOP
    // 0x202584: 0x0  nop
    ctx->pc = 0x202584u;
    // NOP
    // 0x202588: 0x0  nop
    ctx->pc = 0x202588u;
    // NOP
    // 0x20258c: 0x1082fffa  beq         $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20258Cu;
    {
        const bool branch_taken_0x20258c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x20258c) {
            ctx->pc = 0x202578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202578;
        }
    }
    ctx->pc = 0x202594u;
    // 0x202594: 0x2482ffcf  addiu       $v0, $a0, -0x31
    ctx->pc = 0x202594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
label_202598:
    // 0x202598: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x202598u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x20259c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x20259Cu;
    {
        const bool branch_taken_0x20259c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2025A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20259Cu;
        // 0x2025a0: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20259c) {
            ctx->pc = 0x202624u;
            goto label_202624;
        }
    }
    ctx->pc = 0x2025A4u;
    // 0x2025a4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2025a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2025a8: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x2025a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
    // 0x2025ac: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2025acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2025b0: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x2025b0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2025b4: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x2025b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x2025b8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2025B8u;
    {
        const bool branch_taken_0x2025b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2025BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2025B8u;
        // 0x2025bc: 0x2a61023  subu        $v0, $s5, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2025b8) {
            ctx->pc = 0x2025FCu;
            goto label_2025fc;
        }
    }
    ctx->pc = 0x2025C0u;
label_2025c0:
    // 0x2025c0: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x2025c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x2025c4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2025C4u;
    {
        const bool branch_taken_0x2025c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2025C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2025C4u;
        // 0x2025c8: 0xdfa30010  ld          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2025c4) {
            ctx->pc = 0x2025F8u;
            goto label_2025f8;
        }
    }
    ctx->pc = 0x2025CCu;
    // 0x2025cc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2025ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2025d0: 0x310b8  dsll        $v0, $v1, 2
    ctx->pc = 0x2025d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 2);
    // 0x2025d4: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x2025d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2025d8: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x2025d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x2025dc: 0x82102d  daddu       $v0, $a0, $v0
    ctx->pc = 0x2025dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2025e0: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x2025e0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2025e4: 0x6442ffd0  daddiu      $v0, $v0, -0x30
    ctx->pc = 0x2025e4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967248);
    // 0x2025e8: 0x28830030  slti        $v1, $a0, 0x30
    ctx->pc = 0x2025e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x2025ec: 0x1060fff4  beqz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2025ECu;
    {
        const bool branch_taken_0x2025ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2025F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2025ECu;
        // 0x2025f0: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2025ec) {
            ctx->pc = 0x2025C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2025c0;
        }
    }
    ctx->pc = 0x2025F4u;
    // 0x2025f4: 0x0  nop
    ctx->pc = 0x2025f4u;
    // NOP
label_2025f8:
    // 0x2025f8: 0x2a61023  subu        $v0, $s5, $a2
    ctx->pc = 0x2025f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
label_2025fc:
    // 0x2025fc: 0x3c040098  lui         $a0, 0x98
    ctx->pc = 0x2025fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)152 << 16));
    // 0x202600: 0x3484967f  ori         $a0, $a0, 0x967F
    ctx->pc = 0x202600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)38527);
    // 0x202604: 0xdfa60010  ld          $a2, 0x10($sp)
    ctx->pc = 0x202604u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202608: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x202608u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x20260c: 0x82300a  movz        $a2, $a0, $v0
    ctx->pc = 0x20260cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x202610: 0xffa60010  sd          $a2, 0x10($sp)
    ctx->pc = 0x202610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
    // 0x202614: 0x6182f  dsubu       $v1, $zero, $a2
    ctx->pc = 0x202614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 6));
    // 0x202618: 0x67300b  movn        $a2, $v1, $a3
    ctx->pc = 0x202618u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x20261c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20261Cu;
    {
        const bool branch_taken_0x20261c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20261Cu;
        // 0x202620: 0xffa60010  sd          $a2, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20261c) {
            ctx->pc = 0x202630u;
            goto label_202630;
        }
    }
    ctx->pc = 0x202624u;
label_202624:
    // 0x202624: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x202624u;
    {
        const bool branch_taken_0x202624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202624u;
        // 0x202628: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202624) {
            ctx->pc = 0x202630u;
            goto label_202630;
        }
    }
    ctx->pc = 0x20262Cu;
label_20262c:
    // 0x20262c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x20262cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_202630:
    // 0x202630: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x202630u;
    {
        const bool branch_taken_0x202630 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x202634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202630u;
        // 0x202634: 0xdfa30010  ld          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202630) {
            ctx->pc = 0x202644u;
            goto label_202644;
        }
    }
    ctx->pc = 0x202638u;
    // 0x202638: 0x2aa280b  movn        $a1, $s5, $t2
    ctx->pc = 0x202638u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 21));
    // 0x20263c: 0x100002ab  b           . + 4 + (0x2AB << 2)
    ctx->pc = 0x20263Cu;
    {
        const bool branch_taken_0x20263c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20263Cu;
        // 0x202640: 0xa8a80a  movz        $s5, $a1, $t0 (Delay Slot)
        if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20263c) {
            ctx->pc = 0x2030ECu;
            goto label_2030ec;
        }
    }
    ctx->pc = 0x202644u;
label_202644:
    // 0x202644: 0x2a820011  slti        $v0, $s4, 0x11
    ctx->pc = 0x202644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x202648: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x202648u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x20264c: 0x29ef00a  movz        $fp, $s4, $fp
    ctx->pc = 0x20264cu;
    if (GPR_U64(ctx, 30) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 20));
    // 0x202650: 0x69182f  dsubu       $v1, $v1, $t1
    ctx->pc = 0x202650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 9));
    // 0x202654: 0x282980b  movn        $s3, $s4, $v0
    ctx->pc = 0x202654u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 20));
    // 0x202658: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x202658u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20265c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x20265cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x202660: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x202660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x202664: 0xafa4004c  sw          $a0, 0x4C($sp)
    ctx->pc = 0x202664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 4));
    // 0x202668: 0xc08218c  jal         func_208630
    ctx->pc = 0x202668u;
    SET_GPR_U32(ctx, 31, 0x202670u);
    ctx->pc = 0x20266Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202668u;
    // 0x20266c: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x202668u, 0x202670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202670u;
label_202670:
    // 0x202670: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x202670u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202674: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x202674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202678: 0x4c10006  bgez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x202678u;
    {
        const bool branch_taken_0x202678 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x20267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202678u;
        // 0x20267c: 0x8fb0004c  lw          $s0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202678) {
            ctx->pc = 0x202694u;
            goto label_202694;
        }
    }
    ctx->pc = 0x202680u;
    // 0x202680: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x202680u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x202684: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x202684u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x202688: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x202688u;
    SET_GPR_U32(ctx, 31, 0x202690u);
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x202688u, 0x202690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202690u;
label_202690:
    // 0x202690: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x202690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_202694:
    // 0x202694: 0x2a62000a  slti        $v0, $s3, 0xA
    ctx->pc = 0x202694u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x202698: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x202698u;
    {
        const bool branch_taken_0x202698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202698u;
        // 0x20269c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202698) {
            ctx->pc = 0x202704u;
            goto label_202704;
        }
    }
    ctx->pc = 0x2026A0u;
    // 0x2026a0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x2026a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x2026a4: 0x2662fff7  addiu       $v0, $s3, -0x9
    ctx->pc = 0x2026a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967287));
    // 0x2026a8: 0x24634f98  addiu       $v1, $v1, 0x4F98
    ctx->pc = 0x2026a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20376));
    // 0x2026ac: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2026acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2026b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2026b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2026b4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2026b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2026b8: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x2026B8u;
    SET_GPR_U32(ctx, 31, 0x2026C0u);
    ctx->pc = 0x2026BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2026B8u;
    // 0x2026bc: 0xdc440000  ld          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x2026B8u, 0x2026C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2026C0u;
label_2026c0:
    // 0x2026c0: 0x6400005  bltz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2026C0u;
    {
        const bool branch_taken_0x2026c0 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2026C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2026C0u;
        // 0x2026c4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2026c0) {
            ctx->pc = 0x2026D8u;
            goto label_2026d8;
        }
    }
    ctx->pc = 0x2026C8u;
    // 0x2026c8: 0xc081a60  jal         func_206980
    ctx->pc = 0x2026C8u;
    SET_GPR_U32(ctx, 31, 0x2026D0u);
    ctx->pc = 0x2026CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2026C8u;
    // 0x2026cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206980u, 0x2026C8u, 0x2026D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2026D0u;
label_2026d0:
    // 0x2026d0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2026D0u;
    {
        const bool branch_taken_0x2026d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2026D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2026D0u;
        // 0x2026d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2026d0) {
            ctx->pc = 0x2026F8u;
            goto label_2026f8;
        }
    }
    ctx->pc = 0x2026D8u;
label_2026d8:
    // 0x2026d8: 0x12107a  dsrl        $v0, $s2, 1
    ctx->pc = 0x2026d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) >> 1);
    // 0x2026dc: 0x32440001  andi        $a0, $s2, 0x1
    ctx->pc = 0x2026dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x2026e0: 0xc081a60  jal         func_206980
    ctx->pc = 0x2026E0u;
    SET_GPR_U32(ctx, 31, 0x2026E8u);
    ctx->pc = 0x2026E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2026E0u;
    // 0x2026e4: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206980u, 0x2026E0u, 0x2026E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2026E8u;
label_2026e8:
    // 0x2026e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2026e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2026ec: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x2026ECu;
    SET_GPR_U32(ctx, 31, 0x2026F4u);
    ctx->pc = 0x2026F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2026ECu;
    // 0x2026f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x2026ECu, 0x2026F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2026F4u;
label_2026f4:
    // 0x2026f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2026f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2026f8:
    // 0x2026f8: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x2026F8u;
    SET_GPR_U32(ctx, 31, 0x202700u);
    ctx->pc = 0x2026FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2026F8u;
    // 0x2026fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x2026F8u, 0x202700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202700u;
label_202700:
    // 0x202700: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x202700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_202704:
    // 0x202704: 0x2a820010  slti        $v0, $s4, 0x10
    ctx->pc = 0x202704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x202708: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x202708u;
    {
        const bool branch_taken_0x202708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202708u;
        // 0x20270c: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202708) {
            ctx->pc = 0x2027DCu;
            goto label_2027dc;
        }
    }
    ctx->pc = 0x202710u;
    // 0x202710: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x202710u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202714: 0x50400276  beql        $v0, $zero, . + 4 + (0x276 << 2)
    ctx->pc = 0x202714u;
    {
        const bool branch_taken_0x202714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202714) {
            ctx->pc = 0x202718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202714u;
            // 0x202718: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2030F0u;
            goto label_2030f0;
        }
    }
    ctx->pc = 0x20271Cu;
    // 0x20271c: 0x18400022  blez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x20271Cu;
    {
        const bool branch_taken_0x20271c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x202720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20271Cu;
        // 0x202720: 0x28420017  slti        $v0, $v0, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)23) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20271c) {
            ctx->pc = 0x2027A8u;
            goto label_2027a8;
        }
    }
    ctx->pc = 0x202724u;
    // 0x202724: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x202724u;
    {
        const bool branch_taken_0x202724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202724u;
        // 0x202728: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202724) {
            ctx->pc = 0x202740u;
            goto label_202740;
        }
    }
    ctx->pc = 0x20272Cu;
    // 0x20272c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x20272cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x202730: 0x24424f98  addiu       $v0, $v0, 0x4F98
    ctx->pc = 0x202730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20376));
    // 0x202734: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x202734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202738: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x202738u;
    {
        const bool branch_taken_0x202738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202738u;
        // 0x20273c: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202738) {
            ctx->pc = 0x202798u;
            goto label_202798;
        }
    }
    ctx->pc = 0x202740u;
label_202740:
    // 0x202740: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x202740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x202744: 0x743823  subu        $a3, $v1, $s4
    ctx->pc = 0x202744u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x202748: 0xdfa30010  ld          $v1, 0x10($sp)
    ctx->pc = 0x202748u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20274c: 0x24e20016  addiu       $v0, $a3, 0x16
    ctx->pc = 0x20274cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 22));
    // 0x202750: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x202750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x202754: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x202754u;
    {
        const bool branch_taken_0x202754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202754u;
        // 0x202758: 0x2931023  subu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202754) {
            ctx->pc = 0x2027E0u;
            goto label_2027e0;
        }
    }
    ctx->pc = 0x20275Cu;
    // 0x20275c: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x20275cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x202760: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x202760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x202764: 0x26104f98  addiu       $s0, $s0, 0x4F98
    ctx->pc = 0x202764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20376));
    // 0x202768: 0x67182f  dsubu       $v1, $v1, $a3
    ctx->pc = 0x202768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 7));
    // 0x20276c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20276cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x202770: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x202770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202774: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x202774u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202778: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x202778u;
    SET_GPR_U32(ctx, 31, 0x202780u);
    ctx->pc = 0x20277Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202778u;
    // 0x20277c: 0xffa30010  sd          $v1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x202778u, 0x202780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202780u;
label_202780:
    // 0x202780: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x202780u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202784: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x202784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202788: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x202788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x20278c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x20278cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x202790: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x202790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x202794: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x202794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_202798:
    // 0x202798: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x202798u;
    SET_GPR_U32(ctx, 31, 0x2027A0u);
    ctx->pc = 0x20279Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202798u;
    // 0x20279c: 0xdc640000  ld          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x202798u, 0x2027A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2027A0u;
label_2027a0:
    // 0x2027a0: 0x10000252  b           . + 4 + (0x252 << 2)
    ctx->pc = 0x2027A0u;
    {
        const bool branch_taken_0x2027a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2027A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2027A0u;
        // 0x2027a4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2027a0) {
            ctx->pc = 0x2030ECu;
            goto label_2030ec;
        }
    }
    ctx->pc = 0x2027A8u;
label_2027a8:
    // 0x2027a8: 0xdfa60010  ld          $a2, 0x10($sp)
    ctx->pc = 0x2027a8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2027ac: 0x28c2ffea  slti        $v0, $a2, -0x16
    ctx->pc = 0x2027acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967274) ? 1 : 0);
    // 0x2027b0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2027B0u;
    {
        const bool branch_taken_0x2027b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2027B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2027B0u;
        // 0x2027b4: 0x2931023  subu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2027b0) {
            ctx->pc = 0x2027E0u;
            goto label_2027e0;
        }
    }
    ctx->pc = 0x2027B8u;
    // 0x2027b8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x2027b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x2027bc: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x2027bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2027c0: 0x24424f98  addiu       $v0, $v0, 0x4F98
    ctx->pc = 0x2027c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20376));
    // 0x2027c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2027c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2027c8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2027c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2027cc: 0xc0820d8  jal         func_208360
    ctx->pc = 0x2027CCu;
    SET_GPR_U32(ctx, 31, 0x2027D4u);
    ctx->pc = 0x2027D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2027CCu;
    // 0x2027d0: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x2027CCu, 0x2027D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2027D4u;
label_2027d4:
    // 0x2027d4: 0x10000245  b           . + 4 + (0x245 << 2)
    ctx->pc = 0x2027D4u;
    {
        const bool branch_taken_0x2027d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2027D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2027D4u;
        // 0x2027d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2027d4) {
            ctx->pc = 0x2030ECu;
            goto label_2030ec;
        }
    }
    ctx->pc = 0x2027DCu;
label_2027dc:
    // 0x2027dc: 0x2931023  subu        $v0, $s4, $s3
    ctx->pc = 0x2027dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_2027e0:
    // 0x2027e0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2027e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2027e4: 0x1a000057  blez        $s0, . + 4 + (0x57 << 2)
    ctx->pc = 0x2027E4u;
    {
        const bool branch_taken_0x2027e4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2027E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2027E4u;
        // 0x2027e8: 0x3207000f  andi        $a3, $s0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2027e4) {
            ctx->pc = 0x202944u;
            goto label_202944;
        }
    }
    ctx->pc = 0x2027ECu;
    // 0x2027ec: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2027ECu;
    {
        const bool branch_taken_0x2027ec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2027F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2027ECu;
        // 0x2027f0: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2027ec) {
            ctx->pc = 0x202810u;
            goto label_202810;
        }
    }
    ctx->pc = 0x2027F4u;
    // 0x2027f4: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x2027f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2027f8: 0x24424f98  addiu       $v0, $v0, 0x4F98
    ctx->pc = 0x2027f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20376));
    // 0x2027fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2027fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202800: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x202800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x202804: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x202804u;
    SET_GPR_U32(ctx, 31, 0x20280Cu);
    ctx->pc = 0x202808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202804u;
    // 0x202808: 0xdc640000  ld          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x202804u, 0x20280Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20280Cu;
label_20280c:
    // 0x20280c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20280cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_202810:
    // 0x202810: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x202810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x202814: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x202814u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x202818: 0x1200009a  beqz        $s0, . + 4 + (0x9A << 2)
    ctx->pc = 0x202818u;
    {
        const bool branch_taken_0x202818 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202818u;
        // 0x20281c: 0x2a020135  slti        $v0, $s0, 0x135 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)309) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202818) {
            ctx->pc = 0x202A84u;
            goto label_202a84;
        }
    }
    ctx->pc = 0x202820u;
    // 0x202820: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x202820u;
    {
        const bool branch_taken_0x202820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202820) {
            ctx->pc = 0x202824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202820u;
            // 0x202824: 0x108103  sra         $s0, $s0, 4 (Delay Slot)
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202848u;
            goto label_202848;
        }
    }
    ctx->pc = 0x202828u;
label_202828:
    // 0x202828: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x202828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_20282c:
    // 0x20282c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x20282cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x202830: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x202830u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x202834: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x202834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202838: 0x1440021d  bnez        $v0, . + 4 + (0x21D << 2)
    ctx->pc = 0x202838u;
    {
        const bool branch_taken_0x202838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202838u;
        // 0x20283c: 0xdc714d58  ld          $s1, 0x4D58($v1) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 19800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202838) {
            ctx->pc = 0x2030B0u;
            goto label_2030b0;
        }
    }
    ctx->pc = 0x202840u;
    // 0x202840: 0x1000022b  b           . + 4 + (0x22B << 2)
    ctx->pc = 0x202840u;
    {
        const bool branch_taken_0x202840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202840u;
        // 0x202844: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202840) {
            ctx->pc = 0x2030F0u;
            goto label_2030f0;
        }
    }
    ctx->pc = 0x202848u;
label_202848:
    // 0x202848: 0x1200008e  beqz        $s0, . + 4 + (0x8E << 2)
    ctx->pc = 0x202848u;
    {
        const bool branch_taken_0x202848 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20284Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202848u;
        // 0x20284c: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202848) {
            ctx->pc = 0x202A84u;
            goto label_202a84;
        }
    }
    ctx->pc = 0x202850u;
    // 0x202850: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x202850u;
    {
        const bool branch_taken_0x202850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202850u;
        // 0x202854: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202850) {
            ctx->pc = 0x20289Cu;
            goto label_20289c;
        }
    }
    ctx->pc = 0x202858u;
    // 0x202858: 0x3c120022  lui         $s2, 0x22
    ctx->pc = 0x202858u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
    // 0x20285c: 0x0  nop
    ctx->pc = 0x20285cu;
    // NOP
label_202860:
    // 0x202860: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x202860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x202864: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x202864u;
    {
        const bool branch_taken_0x202864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202864u;
        // 0x202868: 0x26435060  addiu       $v1, $s2, 0x5060 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 20576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202864) {
            ctx->pc = 0x202884u;
            goto label_202884;
        }
    }
    ctx->pc = 0x20286Cu;
    // 0x20286c: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x20286cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x202870: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x202870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x202874: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x202874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202878: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x202878u;
    SET_GPR_U32(ctx, 31, 0x202880u);
    ctx->pc = 0x20287Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202878u;
    // 0x20287c: 0xdc440000  ld          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x202878u, 0x202880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202880u;
label_202880:
    // 0x202880: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x202880u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_202884:
    // 0x202884: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x202884u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x202888: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x202888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x20288c: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x20288Cu;
    {
        const bool branch_taken_0x20288c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20288Cu;
        // 0x202890: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20288c) {
            ctx->pc = 0x202860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202860;
        }
    }
    ctx->pc = 0x202894u;
    // 0x202894: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x202894u;
    {
        const bool branch_taken_0x202894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202894u;
        // 0x202898: 0x26445060  addiu       $a0, $s2, 0x5060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202894) {
            ctx->pc = 0x2028A4u;
            goto label_2028a4;
        }
    }
    ctx->pc = 0x20289Cu;
label_20289c:
    // 0x20289c: 0x3c120022  lui         $s2, 0x22
    ctx->pc = 0x20289cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
    // 0x2028a0: 0x26445060  addiu       $a0, $s2, 0x5060
    ctx->pc = 0x2028a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20576));
label_2028a4:
    // 0x2028a4: 0x11283f  dsra32      $a1, $s1, 0
    ctx->pc = 0x2028a4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x2028a8: 0x3c02fcb0  lui         $v0, 0xFCB0
    ctx->pc = 0x2028a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64688 << 16));
    // 0x2028ac: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x2028acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2028b0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2028b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2028b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2028b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2028b8: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x2028b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x2028bc: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x2028bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x2028c0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2028c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2028c4: 0x2308824  and         $s1, $s1, $s0
    ctx->pc = 0x2028c4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x2028c8: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x2028c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2028cc: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x2028CCu;
    SET_GPR_U32(ctx, 31, 0x2028D4u);
    ctx->pc = 0x2028D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2028CCu;
    // 0x2028d0: 0x2252825  or          $a1, $s1, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x2028CCu, 0x2028D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2028D4u;
label_2028d4:
    // 0x2028d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2028d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2028d8: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x2028d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x2028dc: 0x11203f  dsra32      $a0, $s1, 0
    ctx->pc = 0x2028dcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x2028e0: 0x3c027ca0  lui         $v0, 0x7CA0
    ctx->pc = 0x2028e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31904 << 16));
    // 0x2028e4: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x2028e4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2028e8: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x2028e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2028ec: 0x0  nop
    ctx->pc = 0x2028ecu;
    // NOP
    // 0x2028f0: 0x0  nop
    ctx->pc = 0x2028f0u;
    // NOP
    // 0x2028f4: 0x0  nop
    ctx->pc = 0x2028f4u;
    // NOP
    // 0x2028f8: 0x0  nop
    ctx->pc = 0x2028f8u;
    // NOP
    // 0x2028fc: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x2028FCu;
    {
        const bool branch_taken_0x2028fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2028FCu;
        // 0x202900: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2028fc) {
            ctx->pc = 0x20282Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20282c;
        }
    }
    ctx->pc = 0x202904u;
    // 0x202904: 0x3c027c90  lui         $v0, 0x7C90
    ctx->pc = 0x202904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31888 << 16));
    // 0x202908: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x202908u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x20290c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20290Cu;
    {
        const bool branch_taken_0x20290c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20290Cu;
        // 0x202910: 0x3c020350  lui         $v0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)848 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20290c) {
            ctx->pc = 0x202930u;
            goto label_202930;
        }
    }
    ctx->pc = 0x202914u;
    // 0x202914: 0x2308824  and         $s1, $s1, $s0
    ctx->pc = 0x202914u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x202918: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x202918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x20291c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x20291cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x202920: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x202920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x202924: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x202924u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x202928: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x202928u;
    {
        const bool branch_taken_0x202928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202928u;
        // 0x20292c: 0x2308825  or          $s1, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202928) {
            ctx->pc = 0x202A84u;
            goto label_202a84;
        }
    }
    ctx->pc = 0x202930u;
label_202930:
    // 0x202930: 0x2308824  and         $s1, $s1, $s0
    ctx->pc = 0x202930u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x202934: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x202934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x202938: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x202938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x20293c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x20293Cu;
    {
        const bool branch_taken_0x20293c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20293Cu;
        // 0x202940: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20293c) {
            ctx->pc = 0x202A84u;
            goto label_202a84;
        }
    }
    ctx->pc = 0x202944u;
label_202944:
    // 0x202944: 0x6010050  bgez        $s0, . + 4 + (0x50 << 2)
    ctx->pc = 0x202944u;
    {
        const bool branch_taken_0x202944 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x202948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202944u;
        // 0x202948: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202944) {
            ctx->pc = 0x202A88u;
            goto label_202a88;
        }
    }
    ctx->pc = 0x20294Cu;
    // 0x20294c: 0x108023  negu        $s0, $s0
    ctx->pc = 0x20294cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x202950: 0x3207000f  andi        $a3, $s0, 0xF
    ctx->pc = 0x202950u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x202954: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x202954u;
    {
        const bool branch_taken_0x202954 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x202958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202954u;
        // 0x202958: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202954) {
            ctx->pc = 0x202978u;
            goto label_202978;
        }
    }
    ctx->pc = 0x20295Cu;
    // 0x20295c: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x20295cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x202960: 0x24424f98  addiu       $v0, $v0, 0x4F98
    ctx->pc = 0x202960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20376));
    // 0x202964: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x202964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202968: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x202968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20296c: 0xc0820d8  jal         func_208360
    ctx->pc = 0x20296Cu;
    SET_GPR_U32(ctx, 31, 0x202974u);
    ctx->pc = 0x202970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20296Cu;
    // 0x202970: 0xdc650000  ld          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x20296Cu, 0x202974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202974u;
label_202974:
    // 0x202974: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x202974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_202978:
    // 0x202978: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x202978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x20297c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x20297cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x202980: 0x12000040  beqz        $s0, . + 4 + (0x40 << 2)
    ctx->pc = 0x202980u;
    {
        const bool branch_taken_0x202980 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x202984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202980u;
        // 0x202984: 0x108103  sra         $s0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202980) {
            ctx->pc = 0x202A84u;
            goto label_202a84;
        }
    }
    ctx->pc = 0x202988u;
    // 0x202988: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x202988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x20298c: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x20298Cu;
    {
        const bool branch_taken_0x20298c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20298Cu;
        // 0x202990: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20298c) {
            ctx->pc = 0x202A4Cu;
            goto label_202a4c;
        }
    }
    ctx->pc = 0x202994u;
    // 0x202994: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x202994u;
    {
        const bool branch_taken_0x202994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202994u;
        // 0x202998: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202994) {
            ctx->pc = 0x2029DCu;
            goto label_2029dc;
        }
    }
    ctx->pc = 0x20299Cu;
    // 0x20299c: 0x3c120022  lui         $s2, 0x22
    ctx->pc = 0x20299cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
label_2029a0:
    // 0x2029a0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2029a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2029a4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2029A4u;
    {
        const bool branch_taken_0x2029a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2029A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2029A4u;
        // 0x2029a8: 0x26435088  addiu       $v1, $s2, 0x5088 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 20616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2029a4) {
            ctx->pc = 0x2029C4u;
            goto label_2029c4;
        }
    }
    ctx->pc = 0x2029ACu;
    // 0x2029ac: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x2029acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2029b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2029b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2029b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2029b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2029b8: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x2029B8u;
    SET_GPR_U32(ctx, 31, 0x2029C0u);
    ctx->pc = 0x2029BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2029B8u;
    // 0x2029bc: 0xdc440000  ld          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x2029B8u, 0x2029C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2029C0u;
label_2029c0:
    // 0x2029c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2029c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2029c4:
    // 0x2029c4: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x2029c4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x2029c8: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2029c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2029cc: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2029CCu;
    {
        const bool branch_taken_0x2029cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2029D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2029CCu;
        // 0x2029d0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2029cc) {
            ctx->pc = 0x2029A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2029a0;
        }
    }
    ctx->pc = 0x2029D4u;
    // 0x2029d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2029D4u;
    {
        const bool branch_taken_0x2029d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2029D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2029D4u;
        // 0x2029d8: 0x26425088  addiu       $v0, $s2, 0x5088 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 20616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2029d4) {
            ctx->pc = 0x2029E4u;
            goto label_2029e4;
        }
    }
    ctx->pc = 0x2029DCu;
label_2029dc:
    // 0x2029dc: 0x3c120022  lui         $s2, 0x22
    ctx->pc = 0x2029dcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)34 << 16));
    // 0x2029e0: 0x26425088  addiu       $v0, $s2, 0x5088
    ctx->pc = 0x2029e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 20616));
label_2029e4:
    // 0x2029e4: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x2029e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2029e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2029e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2029ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2029ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2029f0: 0xdc700000  ld          $s0, 0x0($v1)
    ctx->pc = 0x2029f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2029f4: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x2029f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2029f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2029f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2029fc: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x2029FCu;
    SET_GPR_U32(ctx, 31, 0x202A04u);
    ctx->pc = 0x202A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2029FCu;
    // 0x202a00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x2029FCu, 0x202A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202A04u;
label_202a04:
    // 0x202a04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x202a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x202a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a0c: 0xc082178  jal         func_2085E0
    ctx->pc = 0x202A0Cu;
    SET_GPR_U32(ctx, 31, 0x202A14u);
    ctx->pc = 0x202A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202A0Cu;
    // 0x202a10: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x202A0Cu, 0x202A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202A14u;
label_202a14:
    // 0x202a14: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x202A14u;
    {
        const bool branch_taken_0x202a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A14u;
        // 0x202a18: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202a14) {
            ctx->pc = 0x202A88u;
            goto label_202a88;
        }
    }
    ctx->pc = 0x202A1Cu;
    // 0x202a1c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x202a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a20: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x202A20u;
    SET_GPR_U32(ctx, 31, 0x202A28u);
    ctx->pc = 0x202A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202A20u;
    // 0x202a24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x202A20u, 0x202A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202A28u;
label_202a28:
    // 0x202a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a2c: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x202A2Cu;
    SET_GPR_U32(ctx, 31, 0x202A34u);
    ctx->pc = 0x202A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202A2Cu;
    // 0x202a30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x202A2Cu, 0x202A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202A34u;
label_202a34:
    // 0x202a34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x202a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x202a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a3c: 0xc082178  jal         func_2085E0
    ctx->pc = 0x202A3Cu;
    SET_GPR_U32(ctx, 31, 0x202A44u);
    ctx->pc = 0x202A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202A3Cu;
    // 0x202a40: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x202A3Cu, 0x202A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202A44u;
label_202a44:
    // 0x202a44: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x202A44u;
    {
        const bool branch_taken_0x202a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A44u;
        // 0x202a48: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202a44) {
            ctx->pc = 0x202A84u;
            goto label_202a84;
        }
    }
    ctx->pc = 0x202A4Cu;
label_202a4c:
    // 0x202a4c: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x202a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_202a50:
    // 0x202a50: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x202a50u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x202a54: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x202a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202a58: 0x14600195  bnez        $v1, . + 4 + (0x195 << 2)
    ctx->pc = 0x202A58u;
    {
        const bool branch_taken_0x202a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x202A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A58u;
        // 0x202a5c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202a58) {
            ctx->pc = 0x2030B0u;
            goto label_2030b0;
        }
    }
    ctx->pc = 0x202A60u;
    // 0x202a60: 0x100001a3  b           . + 4 + (0x1A3 << 2)
    ctx->pc = 0x202A60u;
    {
        const bool branch_taken_0x202a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A60u;
        // 0x202a64: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202a60) {
            ctx->pc = 0x2030F0u;
            goto label_2030f0;
        }
    }
    ctx->pc = 0x202A68u;
label_202a68:
    // 0x202a68: 0xc080176  jal         func_2005D8
    ctx->pc = 0x202A68u;
    SET_GPR_U32(ctx, 31, 0x202A70u);
    ctx->pc = 0x202A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202A68u;
    // 0x202a6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2005D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2005D8u, 0x202A68u, 0x202A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202A70u;
label_202a70:
    // 0x202a70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x202a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a74: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x202A74u;
    SET_GPR_U32(ctx, 31, 0x202A7Cu);
    ctx->pc = 0x202A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202A74u;
    // 0x202a78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x202A74u, 0x202A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202A7Cu;
label_202a7c:
    // 0x202a7c: 0x1000018c  b           . + 4 + (0x18C << 2)
    ctx->pc = 0x202A7Cu;
    {
        const bool branch_taken_0x202a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A7Cu;
        // 0x202a80: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202a7c) {
            ctx->pc = 0x2030B0u;
            goto label_2030b0;
        }
    }
    ctx->pc = 0x202A84u;
label_202a84:
    // 0x202a84: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x202a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_202a88:
    // 0x202a88: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x202a88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a8c: 0x8fa80020  lw          $t0, 0x20($sp)
    ctx->pc = 0x202a8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202a90: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x202a90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a94: 0xc07ff1c  jal         func_1FFC70
    ctx->pc = 0x202A94u;
    SET_GPR_U32(ctx, 31, 0x202A9Cu);
    ctx->pc = 0x202A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202A94u;
    // 0x202a98: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFC70u, 0x202A94u, 0x202A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202A9Cu;
label_202a9c:
    // 0x202a9c: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x202a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x202aa0: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x202aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x202aa4: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x202aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x202aa8: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x202aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x202aac: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x202AACu;
    {
        const bool branch_taken_0x202aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202AACu;
        // 0x202ab0: 0xafa60044  sw          $a2, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202aac) {
            ctx->pc = 0x202ED4u;
            goto label_202ed4;
        }
    }
    ctx->pc = 0x202AB4u;
    // 0x202ab4: 0x0  nop
    ctx->pc = 0x202ab4u;
    // NOP
label_202ab8:
    // 0x202ab8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x202ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202abc: 0xc08009a  jal         func_200268
    ctx->pc = 0x202ABCu;
    SET_GPR_U32(ctx, 31, 0x202AC4u);
    ctx->pc = 0x202AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202ABCu;
    // 0x202ac0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200268u, 0x202ABCu, 0x202AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202AC4u;
label_202ac4:
    // 0x202ac4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x202ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x202ac8: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x202ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x202acc: 0xc0800f8  jal         func_2003E0
    ctx->pc = 0x202ACCu;
    SET_GPR_U32(ctx, 31, 0x202AD4u);
    ctx->pc = 0x202AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202ACCu;
    // 0x202ad0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2003E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2003E0u, 0x202ACCu, 0x202AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202AD4u;
label_202ad4:
    // 0x202ad4: 0x1c400017  bgtz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x202AD4u;
    {
        const bool branch_taken_0x202ad4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x202AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202AD4u;
        // 0x202ad8: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202ad4) {
            ctx->pc = 0x202B34u;
            goto label_202b34;
        }
    }
    ctx->pc = 0x202ADCu;
    // 0x202adc: 0x10000175  b           . + 4 + (0x175 << 2)
    ctx->pc = 0x202ADCu;
    {
        const bool branch_taken_0x202adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202adc) {
            ctx->pc = 0x2030B4u;
            goto label_2030b4;
        }
    }
    ctx->pc = 0x202AE4u;
label_202ae4:
    // 0x202ae4: 0x14e00037  bnez        $a3, . + 4 + (0x37 << 2)
    ctx->pc = 0x202AE4u;
    {
        const bool branch_taken_0x202ae4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x202AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202AE4u;
        // 0x202ae8: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202ae4) {
            ctx->pc = 0x202BC4u;
            goto label_202bc4;
        }
    }
    ctx->pc = 0x202AECu;
    // 0x202aec: 0x1280000c  beqz        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x202AECu;
    {
        const bool branch_taken_0x202aec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x202aec) {
            ctx->pc = 0x202B20u;
            goto label_202b20;
        }
    }
    ctx->pc = 0x202AF4u;
    // 0x202af4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x202af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x202af8: 0x31b3a  dsrl        $v1, $v1, 12
    ctx->pc = 0x202af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 12);
    // 0x202afc: 0x2231024  and         $v0, $s1, $v1
    ctx->pc = 0x202afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x202b00: 0x1443001c  bne         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x202B00u;
    {
        const bool branch_taken_0x202b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x202B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B00u;
        // 0x202b04: 0x3c037ff0  lui         $v1, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b00) {
            ctx->pc = 0x202B74u;
            goto label_202b74;
        }
    }
    ctx->pc = 0x202B08u;
    // 0x202b08: 0x11103f  dsra32      $v0, $s1, 0
    ctx->pc = 0x202b08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x202b0c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x202b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x202b10: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x202b10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x202b14: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x202b14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x202b18: 0x10000165  b           . + 4 + (0x165 << 2)
    ctx->pc = 0x202B18u;
    {
        const bool branch_taken_0x202b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B18u;
        // 0x202b1c: 0x2883c  dsll32      $s1, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b18) {
            ctx->pc = 0x2030B0u;
            goto label_2030b0;
        }
    }
    ctx->pc = 0x202B20u;
label_202b20:
    // 0x202b20: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x202b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x202b24: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x202b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x202b28: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x202b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x202b2c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x202B2Cu;
    {
        const bool branch_taken_0x202b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202b2c) {
            ctx->pc = 0x202B74u;
            goto label_202b74;
        }
    }
    ctx->pc = 0x202B34u;
label_202b34:
    // 0x202b34: 0x11103f  dsra32      $v0, $s1, 0
    ctx->pc = 0x202b34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x202b38: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x202b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x202b3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x202b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x202b40: 0x3c04fff0  lui         $a0, 0xFFF0
    ctx->pc = 0x202b40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65520 << 16));
    // 0x202b44: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x202b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x202b48: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x202b48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x202b4c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x202b4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x202b50: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x202b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x202b54: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x202b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x202b58: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x202b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x202b5c: 0x31b3a  dsrl        $v1, $v1, 12
    ctx->pc = 0x202b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 12);
    // 0x202b60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x202b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x202b64: 0x2258824  and         $s1, $s1, $a1
    ctx->pc = 0x202b64u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 5));
    // 0x202b68: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x202b68u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x202b6c: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x202B6Cu;
    {
        const bool branch_taken_0x202b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B6Cu;
        // 0x202b70: 0x2258825  or          $s1, $s1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b6c) {
            ctx->pc = 0x2030B0u;
            goto label_2030b0;
        }
    }
    ctx->pc = 0x202B74u;
label_202b74:
    // 0x202b74: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x202b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x202b78: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x202b78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x202b7c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x202b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x202b80: 0x1040014c  beqz        $v0, . + 4 + (0x14C << 2)
    ctx->pc = 0x202B80u;
    {
        const bool branch_taken_0x202b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202B80u;
        // 0x202b84: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202b80) {
            ctx->pc = 0x2030B4u;
            goto label_2030b4;
        }
    }
    ctx->pc = 0x202B88u;
    // 0x202b88: 0x1680ffb7  bnez        $s4, . + 4 + (-0x49 << 2)
    ctx->pc = 0x202B88u;
    {
        const bool branch_taken_0x202b88 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x202b88) {
            ctx->pc = 0x202A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202a68;
        }
    }
    ctx->pc = 0x202B90u;
    // 0x202b90: 0xc080176  jal         func_2005D8
    ctx->pc = 0x202B90u;
    SET_GPR_U32(ctx, 31, 0x202B98u);
    ctx->pc = 0x202B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202B90u;
    // 0x202b94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2005D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2005D8u, 0x202B90u, 0x202B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202B98u;
label_202b98:
    // 0x202b98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x202b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202b9c: 0xc082014  jal         func_208050
    ctx->pc = 0x202B9Cu;
    SET_GPR_U32(ctx, 31, 0x202BA4u);
    ctx->pc = 0x202BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202B9Cu;
    // 0x202ba0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x202B9Cu, 0x202BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202BA4u;
label_202ba4:
    // 0x202ba4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x202ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202ba8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x202ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202bac: 0xc082178  jal         func_2085E0
    ctx->pc = 0x202BACu;
    SET_GPR_U32(ctx, 31, 0x202BB4u);
    ctx->pc = 0x202BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202BACu;
    // 0x202bb0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x202BACu, 0x202BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202BB4u;
label_202bb4:
    // 0x202bb4: 0x1040ffa5  beqz        $v0, . + 4 + (-0x5B << 2)
    ctx->pc = 0x202BB4u;
    {
        const bool branch_taken_0x202bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202BB4u;
        // 0x202bb8: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202bb4) {
            ctx->pc = 0x202A4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202a4c;
        }
    }
    ctx->pc = 0x202BBCu;
    // 0x202bbc: 0x1000013d  b           . + 4 + (0x13D << 2)
    ctx->pc = 0x202BBCu;
    {
        const bool branch_taken_0x202bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202bbc) {
            ctx->pc = 0x2030B4u;
            goto label_2030b4;
        }
    }
    ctx->pc = 0x202BC4u;
label_202bc4:
    // 0x202bc4: 0xc08025a  jal         func_200968
    ctx->pc = 0x202BC4u;
    SET_GPR_U32(ctx, 31, 0x202BCCu);
    ctx->pc = 0x202BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202BC4u;
    // 0x202bc8: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200968u, 0x202BC4u, 0x202BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202BCCu;
label_202bcc:
    // 0x202bcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x202bccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202bd0: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x202bd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x202bd4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x202bd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x202bd8: 0xc082178  jal         func_2085E0
    ctx->pc = 0x202BD8u;
    SET_GPR_U32(ctx, 31, 0x202BE0u);
    ctx->pc = 0x202BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202BD8u;
    // 0x202bdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x202BD8u, 0x202BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202BE0u;
label_202be0:
    // 0x202be0: 0x1c400024  bgtz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x202BE0u;
    {
        const bool branch_taken_0x202be0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x202be0) {
            ctx->pc = 0x202C74u;
            goto label_202c74;
        }
    }
    ctx->pc = 0x202BE8u;
    // 0x202be8: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x202BE8u;
    {
        const bool branch_taken_0x202be8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x202be8) {
            ctx->pc = 0x202C00u;
            goto label_202c00;
        }
    }
    ctx->pc = 0x202BF0u;
    // 0x202bf0: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x202bf0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x202bf4: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x202bf4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x202bf8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x202BF8u;
    {
        const bool branch_taken_0x202bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202BF8u;
        // 0x202bfc: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202bf8) {
            ctx->pc = 0x202CA0u;
            goto label_202ca0;
        }
    }
    ctx->pc = 0x202C00u;
label_202c00:
    // 0x202c00: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x202c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x202c04: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x202c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x202c08: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x202c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x202c0c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x202C0Cu;
    {
        const bool branch_taken_0x202c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C0Cu;
        // 0x202c10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c0c) {
            ctx->pc = 0x202C34u;
            goto label_202c34;
        }
    }
    ctx->pc = 0x202C14u;
    // 0x202c14: 0x1222ff8e  beq         $s1, $v0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x202C14u;
    {
        const bool branch_taken_0x202c14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x202C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C14u;
        // 0x202c18: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c14) {
            ctx->pc = 0x202A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202a50;
        }
    }
    ctx->pc = 0x202C1Cu;
    // 0x202c1c: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x202c1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x202c20: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x202c20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x202c24: 0x3412bff0  ori         $s2, $zero, 0xBFF0
    ctx->pc = 0x202c24u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x202c28: 0x12943c  dsll32      $s2, $s2, 16
    ctx->pc = 0x202c28u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 16));
    // 0x202c2c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x202C2Cu;
    {
        const bool branch_taken_0x202c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202c2c) {
            ctx->pc = 0x202CA0u;
            goto label_202ca0;
        }
    }
    ctx->pc = 0x202C34u;
label_202c34:
    // 0x202c34: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x202c34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x202c38: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x202c38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x202c3c: 0xc082178  jal         func_2085E0
    ctx->pc = 0x202C3Cu;
    SET_GPR_U32(ctx, 31, 0x202C44u);
    ctx->pc = 0x202C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202C3Cu;
    // 0x202c40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x202C3Cu, 0x202C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202C44u;
label_202c44:
    // 0x202c44: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x202C44u;
    {
        const bool branch_taken_0x202c44 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x202C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C44u;
        // 0x202c48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c44) {
            ctx->pc = 0x202C5Cu;
            goto label_202c5c;
        }
    }
    ctx->pc = 0x202C4Cu;
    // 0x202c4c: 0x3410ff80  ori         $s0, $zero, 0xFF80
    ctx->pc = 0x202c4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x202c50: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x202c50u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x202c54: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x202C54u;
    {
        const bool branch_taken_0x202c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202c54) {
            ctx->pc = 0x202C94u;
            goto label_202c94;
        }
    }
    ctx->pc = 0x202C5Cu;
label_202c5c:
    // 0x202c5c: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x202c5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x202c60: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x202c60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x202c64: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x202C64u;
    SET_GPR_U32(ctx, 31, 0x202C6Cu);
    ctx->pc = 0x202C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202C64u;
    // 0x202c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x202C64u, 0x202C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202C6Cu;
label_202c6c:
    // 0x202c6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x202C6Cu;
    {
        const bool branch_taken_0x202c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C6Cu;
        // 0x202c70: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c6c) {
            ctx->pc = 0x202C90u;
            goto label_202c90;
        }
    }
    ctx->pc = 0x202C74u;
label_202c74:
    // 0x202c74: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x202c74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x202c78: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x202c78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x202c7c: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x202C7Cu;
    SET_GPR_U32(ctx, 31, 0x202C84u);
    ctx->pc = 0x202C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202C7Cu;
    // 0x202c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x202C7Cu, 0x202C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202C84u;
label_202c84:
    // 0x202c84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x202c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202c88: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x202C88u;
    {
        const bool branch_taken_0x202c88 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x202C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C88u;
        // 0x202c8c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c88) {
            ctx->pc = 0x202CA0u;
            goto label_202ca0;
        }
    }
    ctx->pc = 0x202C90u;
label_202c90:
    // 0x202c90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x202c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202c94:
    // 0x202c94: 0xc082014  jal         func_208050
    ctx->pc = 0x202C94u;
    SET_GPR_U32(ctx, 31, 0x202C9Cu);
    ctx->pc = 0x202C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202C94u;
    // 0x202c98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x202C94u, 0x202C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202C9Cu;
label_202c9c:
    // 0x202c9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x202c9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_202ca0:
    // 0x202ca0: 0x11183f  dsra32      $v1, $s1, 0
    ctx->pc = 0x202ca0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x202ca4: 0x3c1e7ff0  lui         $fp, 0x7FF0
    ctx->pc = 0x202ca4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)32752 << 16));
    // 0x202ca8: 0x7e1024  and         $v0, $v1, $fp
    ctx->pc = 0x202ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 30));
    // 0x202cac: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x202cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x202cb0: 0x3c027fe0  lui         $v0, 0x7FE0
    ctx->pc = 0x202cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32736 << 16));
    // 0x202cb4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x202cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202cb8: 0x1482002f  bne         $a0, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x202CB8u;
    {
        const bool branch_taken_0x202cb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x202CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202CB8u;
        // 0x202cbc: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202cb8) {
            ctx->pc = 0x202D78u;
            goto label_202d78;
        }
    }
    ctx->pc = 0x202CC0u;
    // 0x202cc0: 0x3c02fcb0  lui         $v0, 0xFCB0
    ctx->pc = 0x202cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64688 << 16));
    // 0x202cc4: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x202cc4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202cc8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x202cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x202ccc: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x202cccu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x202cd0: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x202cd0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x202cd4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x202cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x202cd8: 0x2338824  and         $s1, $s1, $s3
    ctx->pc = 0x202cd8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 19));
    // 0x202cdc: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x202cdcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x202ce0: 0xc080176  jal         func_2005D8
    ctx->pc = 0x202CE0u;
    SET_GPR_U32(ctx, 31, 0x202CE8u);
    ctx->pc = 0x202CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202CE0u;
    // 0x202ce4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2005D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2005D8u, 0x202CE0u, 0x202CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202CE8u;
label_202ce8:
    // 0x202ce8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x202ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202cec: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x202CECu;
    SET_GPR_U32(ctx, 31, 0x202CF4u);
    ctx->pc = 0x202CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202CECu;
    // 0x202cf0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x202CECu, 0x202CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202CF4u;
label_202cf4:
    // 0x202cf4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x202cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202cf8: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x202CF8u;
    SET_GPR_U32(ctx, 31, 0x202D00u);
    ctx->pc = 0x202CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202CF8u;
    // 0x202cfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x202CF8u, 0x202D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202D00u;
label_202d00:
    // 0x202d00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x202d00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202d04: 0x3c037c9f  lui         $v1, 0x7C9F
    ctx->pc = 0x202d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31903 << 16));
    // 0x202d08: 0x11203f  dsra32      $a0, $s1, 0
    ctx->pc = 0x202d08u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x202d0c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x202d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x202d10: 0x9e1024  and         $v0, $a0, $fp
    ctx->pc = 0x202d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 30));
    // 0x202d14: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x202d14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x202d18: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x202D18u;
    {
        const bool branch_taken_0x202d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x202D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D18u;
        // 0x202d1c: 0x3c020350  lui         $v0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)848 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d18) {
            ctx->pc = 0x202D64u;
            goto label_202d64;
        }
    }
    ctx->pc = 0x202D20u;
    // 0x202d20: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x202d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x202d24: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x202d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x202d28: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x202d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x202d2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x202d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x202d30: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x202d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x202d34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x202d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x202d38: 0x0  nop
    ctx->pc = 0x202d38u;
    // NOP
    // 0x202d3c: 0x0  nop
    ctx->pc = 0x202d3cu;
    // NOP
    // 0x202d40: 0x0  nop
    ctx->pc = 0x202d40u;
    // NOP
    // 0x202d44: 0x12c2feb8  beq         $s6, $v0, . + 4 + (-0x148 << 2)
    ctx->pc = 0x202D44u;
    {
        const bool branch_taken_0x202d44 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x202D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D44u;
        // 0x202d48: 0x2338824  and         $s1, $s1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d44) {
            ctx->pc = 0x202828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202828;
        }
    }
    ctx->pc = 0x202D4Cu;
    // 0x202d4c: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x202d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x202d50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x202d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x202d54: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x202d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x202d58: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x202d58u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x202d5c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x202D5Cu;
    {
        const bool branch_taken_0x202d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D5Cu;
        // 0x202d60: 0x2338825  or          $s1, $s1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d5c) {
            ctx->pc = 0x202EA4u;
            goto label_202ea4;
        }
    }
    ctx->pc = 0x202D64u;
label_202d64:
    // 0x202d64: 0x2338824  and         $s1, $s1, $s3
    ctx->pc = 0x202d64u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 19));
    // 0x202d68: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x202d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x202d6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x202d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x202d70: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x202D70u;
    {
        const bool branch_taken_0x202d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202D70u;
        // 0x202d74: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d70) {
            ctx->pc = 0x202DFCu;
            goto label_202dfc;
        }
    }
    ctx->pc = 0x202D78u;
label_202d78:
    // 0x202d78: 0x3c020340  lui         $v0, 0x340
    ctx->pc = 0x202d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)832 << 16));
    // 0x202d7c: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x202d7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x202d80: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x202D80u;
    {
        const bool branch_taken_0x202d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202d80) {
            ctx->pc = 0x202DD8u;
            goto label_202dd8;
        }
    }
    ctx->pc = 0x202D88u;
    // 0x202d88: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x202d88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x202d8c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x202d8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x202d90: 0xc082178  jal         func_2085E0
    ctx->pc = 0x202D90u;
    SET_GPR_U32(ctx, 31, 0x202D98u);
    ctx->pc = 0x202D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202D90u;
    // 0x202d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x202D90u, 0x202D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202D98u;
label_202d98:
    // 0x202d98: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x202D98u;
    {
        const bool branch_taken_0x202d98 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x202d98) {
            ctx->pc = 0x202DD8u;
            goto label_202dd8;
        }
    }
    ctx->pc = 0x202DA0u;
    // 0x202da0: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x202da0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x202da4: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x202da4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x202da8: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x202DA8u;
    SET_GPR_U32(ctx, 31, 0x202DB0u);
    ctx->pc = 0x202DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202DA8u;
    // 0x202dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x202DA8u, 0x202DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202DB0u;
label_202db0:
    // 0x202db0: 0xc0821ba  jal         func_2086E8
    ctx->pc = 0x202DB0u;
    SET_GPR_U32(ctx, 31, 0x202DB8u);
    ctx->pc = 0x202DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202DB0u;
    // 0x202db4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2086E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2086E8u, 0x202DB0u, 0x202DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202DB8u;
label_202db8:
    // 0x202db8: 0xc08218c  jal         func_208630
    ctx->pc = 0x202DB8u;
    SET_GPR_U32(ctx, 31, 0x202DC0u);
    ctx->pc = 0x202DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202DB8u;
    // 0x202dbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x202DB8u, 0x202DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202DC0u;
label_202dc0:
    // 0x202dc0: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x202DC0u;
    {
        const bool branch_taken_0x202dc0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x202DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202DC0u;
        // 0x202dc4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202dc0) {
            ctx->pc = 0x202DD8u;
            goto label_202dd8;
        }
    }
    ctx->pc = 0x202DC8u;
    // 0x202dc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x202dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202dcc: 0xc082014  jal         func_208050
    ctx->pc = 0x202DCCu;
    SET_GPR_U32(ctx, 31, 0x202DD4u);
    ctx->pc = 0x202DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202DCCu;
    // 0x202dd0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x202DCCu, 0x202DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202DD4u;
label_202dd4:
    // 0x202dd4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x202dd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_202dd8:
    // 0x202dd8: 0xc080176  jal         func_2005D8
    ctx->pc = 0x202DD8u;
    SET_GPR_U32(ctx, 31, 0x202DE0u);
    ctx->pc = 0x202DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202DD8u;
    // 0x202ddc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2005D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2005D8u, 0x202DD8u, 0x202DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202DE0u;
label_202de0:
    // 0x202de0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x202de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202de4: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x202DE4u;
    SET_GPR_U32(ctx, 31, 0x202DECu);
    ctx->pc = 0x202DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202DE4u;
    // 0x202de8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x202DE4u, 0x202DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202DECu;
label_202dec:
    // 0x202dec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x202decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202df0: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x202DF0u;
    SET_GPR_U32(ctx, 31, 0x202DF8u);
    ctx->pc = 0x202DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202DF0u;
    // 0x202df4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x202DF0u, 0x202DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202DF8u;
label_202df8:
    // 0x202df8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x202df8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_202dfc:
    // 0x202dfc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x202dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202e00: 0x11203f  dsra32      $a0, $s1, 0
    ctx->pc = 0x202e00u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x202e04: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x202e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202e08: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x202e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x202e0c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x202e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x202e10: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x202e10u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x202e14: 0x14520024  bne         $v0, $s2, . + 4 + (0x24 << 2)
    ctx->pc = 0x202E14u;
    {
        const bool branch_taken_0x202e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x202E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E14u;
        // 0x202e18: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202e14) {
            ctx->pc = 0x202EA8u;
            goto label_202ea8;
        }
    }
    ctx->pc = 0x202E1Cu;
    // 0x202e1c: 0xc081a0c  jal         func_206830
    ctx->pc = 0x202E1Cu;
    SET_GPR_U32(ctx, 31, 0x202E24u);
    ctx->pc = 0x202E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E1Cu;
    // 0x202e20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206830u, 0x202E1Cu, 0x202E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202E24u;
label_202e24:
    // 0x202e24: 0xc081a60  jal         func_206980
    ctx->pc = 0x202E24u;
    SET_GPR_U32(ctx, 31, 0x202E2Cu);
    ctx->pc = 0x202E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E24u;
    // 0x202e28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206980u, 0x202E24u, 0x202E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202E2Cu;
label_202e2c:
    // 0x202e2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202e30: 0xc082014  jal         func_208050
    ctx->pc = 0x202E30u;
    SET_GPR_U32(ctx, 31, 0x202E38u);
    ctx->pc = 0x202E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E30u;
    // 0x202e34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x202E30u, 0x202E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202E38u;
label_202e38:
    // 0x202e38: 0x16800006  bnez        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x202E38u;
    {
        const bool branch_taken_0x202e38 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x202E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E38u;
        // 0x202e3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202e38) {
            ctx->pc = 0x202E54u;
            goto label_202e54;
        }
    }
    ctx->pc = 0x202E40u;
    // 0x202e40: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x202e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x202e44: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x202e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x202e48: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x202e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x202e4c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x202E4Cu;
    {
        const bool branch_taken_0x202e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202e4c) {
            ctx->pc = 0x202E8Cu;
            goto label_202e8c;
        }
    }
    ctx->pc = 0x202E54u;
label_202e54:
    // 0x202e54: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x202e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x202e58: 0xdc255168  ld          $a1, 0x5168($at)
    ctx->pc = 0x202e58u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x225168u));
    // 0x202e5c: 0xc082178  jal         func_2085E0
    ctx->pc = 0x202E5Cu;
    SET_GPR_U32(ctx, 31, 0x202E64u);
    ctx->pc = 0x202E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E5Cu;
    // 0x202e60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x202E5Cu, 0x202E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202E64u;
label_202e64:
    // 0x202e64: 0x4400093  bltz        $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x202E64u;
    {
        const bool branch_taken_0x202e64 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x202E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E64u;
        // 0x202e68: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202e64) {
            ctx->pc = 0x2030B4u;
            goto label_2030b4;
        }
    }
    ctx->pc = 0x202E6Cu;
    // 0x202e6c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x202e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x202e70: 0xdc255170  ld          $a1, 0x5170($at)
    ctx->pc = 0x202e70u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x225170u));
    // 0x202e74: 0xc082178  jal         func_2085E0
    ctx->pc = 0x202E74u;
    SET_GPR_U32(ctx, 31, 0x202E7Cu);
    ctx->pc = 0x202E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E74u;
    // 0x202e78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x202E74u, 0x202E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202E7Cu;
label_202e7c:
    // 0x202e7c: 0x1c40008c  bgtz        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x202E7Cu;
    {
        const bool branch_taken_0x202e7c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x202E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202E7Cu;
        // 0x202e80: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202e7c) {
            ctx->pc = 0x2030B0u;
            goto label_2030b0;
        }
    }
    ctx->pc = 0x202E84u;
    // 0x202e84: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x202E84u;
    {
        const bool branch_taken_0x202e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202e84) {
            ctx->pc = 0x202EA8u;
            goto label_202ea8;
        }
    }
    ctx->pc = 0x202E8Cu;
label_202e8c:
    // 0x202e8c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x202e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x202e90: 0xdc255178  ld          $a1, 0x5178($at)
    ctx->pc = 0x202e90u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x225178u));
    // 0x202e94: 0xc082178  jal         func_2085E0
    ctx->pc = 0x202E94u;
    SET_GPR_U32(ctx, 31, 0x202E9Cu);
    ctx->pc = 0x202E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202E94u;
    // 0x202e98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x202E94u, 0x202E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202E9Cu;
label_202e9c:
    // 0x202e9c: 0x4420085  bltzl       $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x202E9Cu;
    {
        const bool branch_taken_0x202e9c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x202e9c) {
            ctx->pc = 0x202EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202E9Cu;
            // 0x202ea0: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2030B4u;
            goto label_2030b4;
        }
    }
    ctx->pc = 0x202EA4u;
label_202ea4:
    // 0x202ea4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x202ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_202ea8:
    // 0x202ea8: 0xc07feca  jal         func_1FFB28
    ctx->pc = 0x202EA8u;
    SET_GPR_U32(ctx, 31, 0x202EB0u);
    ctx->pc = 0x202EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202EA8u;
    // 0x202eac: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB28u, 0x202EA8u, 0x202EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202EB0u;
label_202eb0:
    // 0x202eb0: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x202eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x202eb4: 0xc07feca  jal         func_1FFB28
    ctx->pc = 0x202EB4u;
    SET_GPR_U32(ctx, 31, 0x202EBCu);
    ctx->pc = 0x202EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202EB4u;
    // 0x202eb8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB28u, 0x202EB4u, 0x202EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202EBCu;
label_202ebc:
    // 0x202ebc: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x202ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x202ec0: 0xc07feca  jal         func_1FFB28
    ctx->pc = 0x202EC0u;
    SET_GPR_U32(ctx, 31, 0x202EC8u);
    ctx->pc = 0x202EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202EC0u;
    // 0x202ec4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB28u, 0x202EC0u, 0x202EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202EC8u;
label_202ec8:
    // 0x202ec8: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x202ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202ecc: 0xc07feca  jal         func_1FFB28
    ctx->pc = 0x202ECCu;
    SET_GPR_U32(ctx, 31, 0x202ED4u);
    ctx->pc = 0x202ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202ECCu;
    // 0x202ed0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB28u, 0x202ECCu, 0x202ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202ED4u;
label_202ed4:
    // 0x202ed4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x202ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202ed8: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x202ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x202edc: 0xc07fea0  jal         func_1FFA80
    ctx->pc = 0x202EDCu;
    SET_GPR_U32(ctx, 31, 0x202EE4u);
    ctx->pc = 0x202EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202EDCu;
    // 0x202ee0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA80u, 0x202EDCu, 0x202EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202EE4u;
label_202ee4:
    // 0x202ee4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x202ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202ee8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x202ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x202eec: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x202eecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x202ef0: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x202ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x202ef4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x202ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x202ef8: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x202ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x202efc: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x202EFCu;
    SET_GPR_U32(ctx, 31, 0x202F04u);
    ctx->pc = 0x202F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202EFCu;
    // 0x202f00: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x202EFCu, 0x202F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202F04u;
label_202f04:
    // 0x202f04: 0x8fa70044  lw          $a3, 0x44($sp)
    ctx->pc = 0x202f04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x202f08: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x202f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202f0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x202f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202f10: 0xc0801fa  jal         func_2007E8
    ctx->pc = 0x202F10u;
    SET_GPR_U32(ctx, 31, 0x202F18u);
    ctx->pc = 0x202F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202F10u;
    // 0x202f14: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2007E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2007E8u, 0x202F10u, 0x202F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202F18u;
label_202f18:
    // 0x202f18: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x202f18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x202f1c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x202f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202f20: 0xc07ffc0  jal         func_1FFF00
    ctx->pc = 0x202F20u;
    SET_GPR_U32(ctx, 31, 0x202F28u);
    ctx->pc = 0x202F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202F20u;
    // 0x202f24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFF00u, 0x202F20u, 0x202F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202F28u;
label_202f28:
    // 0x202f28: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x202f28u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202f2c: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x202F2Cu;
    {
        const bool branch_taken_0x202f2c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x202F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F2Cu;
        // 0x202f30: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f2c) {
            ctx->pc = 0x202F48u;
            goto label_202f48;
        }
    }
    ctx->pc = 0x202F34u;
    // 0x202f34: 0x8fb0004c  lw          $s0, 0x4C($sp)
    ctx->pc = 0x202f34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x202f38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x202f38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202f3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x202f3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202f40: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x202F40u;
    {
        const bool branch_taken_0x202f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F40u;
        // 0x202f44: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f40) {
            ctx->pc = 0x202F5Cu;
            goto label_202f5c;
        }
    }
    ctx->pc = 0x202F48u;
label_202f48:
    // 0x202f48: 0x8fa6004c  lw          $a2, 0x4C($sp)
    ctx->pc = 0x202f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x202f4c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x202f4cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202f50: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x202f50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202f54: 0x69023  negu        $s2, $a2
    ctx->pc = 0x202f54u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x202f58: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x202f58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_202f5c:
    // 0x202f5c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x202f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202f60: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x202F60u;
    {
        const bool branch_taken_0x202f60 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x202F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F60u;
        // 0x202f64: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f60) {
            ctx->pc = 0x202F70u;
            goto label_202f70;
        }
    }
    ctx->pc = 0x202F68u;
    // 0x202f68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x202F68u;
    {
        const bool branch_taken_0x202f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F68u;
        // 0x202f6c: 0x2449021  addu        $s2, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f68) {
            ctx->pc = 0x202F74u;
            goto label_202f74;
        }
    }
    ctx->pc = 0x202F70u;
label_202f70:
    // 0x202f70: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x202f70u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_202f74:
    // 0x202f74: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x202f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x202f78: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x202f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x202f7c: 0x2447ffff  addiu       $a3, $v0, -0x1
    ctx->pc = 0x202f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x202f80: 0x28e3fc02  slti        $v1, $a3, -0x3FE
    ctx->pc = 0x202f80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x202f84: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x202F84u;
    {
        const bool branch_taken_0x202f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x202F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F84u;
        // 0x202f88: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f84) {
            ctx->pc = 0x202F94u;
            goto label_202f94;
        }
    }
    ctx->pc = 0x202F8Cu;
    // 0x202f8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x202F8Cu;
    {
        const bool branch_taken_0x202f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202F8Cu;
        // 0x202f90: 0x24930433  addiu       $s3, $a0, 0x433 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1075));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f8c) {
            ctx->pc = 0x202F9Cu;
            goto label_202f9c;
        }
    }
    ctx->pc = 0x202F94u;
label_202f94:
    // 0x202f94: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x202f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x202f98: 0x459823  subu        $s3, $v0, $a1
    ctx->pc = 0x202f98u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_202f9c:
    // 0x202f9c: 0x2133821  addu        $a3, $s0, $s3
    ctx->pc = 0x202f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x202fa0: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x202fa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x202fa4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x202fa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202fa8: 0x247102a  slt         $v0, $s2, $a3
    ctx->pc = 0x202fa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x202fac: 0x242380b  movn        $a3, $s2, $v0
    ctx->pc = 0x202facu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 18));
    // 0x202fb0: 0x287182a  slt         $v1, $s4, $a3
    ctx->pc = 0x202fb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x202fb4: 0x283380b  movn        $a3, $s4, $v1
    ctx->pc = 0x202fb4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 20));
    // 0x202fb8: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x202FB8u;
    {
        const bool branch_taken_0x202fb8 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x202fb8) {
            ctx->pc = 0x202FCCu;
            goto label_202fcc;
        }
    }
    ctx->pc = 0x202FC0u;
    // 0x202fc0: 0x287a023  subu        $s4, $s4, $a3
    ctx->pc = 0x202fc0u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x202fc4: 0x2479023  subu        $s2, $s2, $a3
    ctx->pc = 0x202fc4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x202fc8: 0x2078023  subu        $s0, $s0, $a3
    ctx->pc = 0x202fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_202fcc:
    // 0x202fcc: 0x18c0000c  blez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x202FCCu;
    {
        const bool branch_taken_0x202fcc = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x202FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202FCCu;
        // 0x202fd0: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202fcc) {
            ctx->pc = 0x203000u;
            goto label_203000;
        }
    }
    ctx->pc = 0x202FD4u;
    // 0x202fd4: 0xc08005a  jal         func_200168
    ctx->pc = 0x202FD4u;
    SET_GPR_U32(ctx, 31, 0x202FDCu);
    ctx->pc = 0x202FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202FD4u;
    // 0x202fd8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200168u, 0x202FD4u, 0x202FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202FDCu;
label_202fdc:
    // 0x202fdc: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x202fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x202fe0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x202fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202fe4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x202fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x202fe8: 0xc07ffce  jal         func_1FFF38
    ctx->pc = 0x202FE8u;
    SET_GPR_U32(ctx, 31, 0x202FF0u);
    ctx->pc = 0x202FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202FE8u;
    // 0x202fec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFF38u, 0x202FE8u, 0x202FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202FF0u;
label_202ff0:
    // 0x202ff0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x202ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x202ff4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x202ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202ff8: 0xc07feca  jal         func_1FFB28
    ctx->pc = 0x202FF8u;
    SET_GPR_U32(ctx, 31, 0x203000u);
    ctx->pc = 0x202FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202FF8u;
    // 0x202ffc: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB28u, 0x202FF8u, 0x203000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203000u;
label_203000:
    // 0x203000: 0x1a400005  blez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x203000u;
    {
        const bool branch_taken_0x203000 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x203004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203000u;
        // 0x203004: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203000) {
            ctx->pc = 0x203018u;
            goto label_203018;
        }
    }
    ctx->pc = 0x203008u;
    // 0x203008: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x203008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20300c: 0xc08009a  jal         func_200268
    ctx->pc = 0x20300Cu;
    SET_GPR_U32(ctx, 31, 0x203014u);
    ctx->pc = 0x203010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20300Cu;
    // 0x203010: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200268u, 0x20300Cu, 0x203014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203014u;
label_203014:
    // 0x203014: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x203014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_203018:
    // 0x203018: 0x1ac00005  blez        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x203018u;
    {
        const bool branch_taken_0x203018 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x20301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203018u;
        // 0x20301c: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203018) {
            ctx->pc = 0x203030u;
            goto label_203030;
        }
    }
    ctx->pc = 0x203020u;
    // 0x203020: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x203020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203024: 0xc08005a  jal         func_200168
    ctx->pc = 0x203024u;
    SET_GPR_U32(ctx, 31, 0x20302Cu);
    ctx->pc = 0x203028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203024u;
    // 0x203028: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200168u, 0x203024u, 0x20302Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20302Cu;
label_20302c:
    // 0x20302c: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x20302cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_203030:
    // 0x203030: 0x1a000005  blez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x203030u;
    {
        const bool branch_taken_0x203030 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x203034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203030u;
        // 0x203034: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203030) {
            ctx->pc = 0x203048u;
            goto label_203048;
        }
    }
    ctx->pc = 0x203038u;
    // 0x203038: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x203038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20303c: 0xc08009a  jal         func_200268
    ctx->pc = 0x20303Cu;
    SET_GPR_U32(ctx, 31, 0x203044u);
    ctx->pc = 0x203040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20303Cu;
    // 0x203040: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200268u, 0x20303Cu, 0x203044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203044u;
label_203044:
    // 0x203044: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x203044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_203048:
    // 0x203048: 0x1a800005  blez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x203048u;
    {
        const bool branch_taken_0x203048 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x20304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203048u;
        // 0x20304c: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203048) {
            ctx->pc = 0x203060u;
            goto label_203060;
        }
    }
    ctx->pc = 0x203050u;
    // 0x203050: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x203050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203054: 0xc08009a  jal         func_200268
    ctx->pc = 0x203054u;
    SET_GPR_U32(ctx, 31, 0x20305Cu);
    ctx->pc = 0x203058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203054u;
    // 0x203058: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200268u, 0x203054u, 0x20305Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20305Cu;
label_20305c:
    // 0x20305c: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x20305cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_203060:
    // 0x203060: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x203060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x203064: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x203064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203068: 0xc080112  jal         func_200448
    ctx->pc = 0x203068u;
    SET_GPR_U32(ctx, 31, 0x203070u);
    ctx->pc = 0x20306Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203068u;
    // 0x20306c: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200448u, 0x203068u, 0x203070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203070u;
label_203070:
    // 0x203070: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x203070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x203074: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x203074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x203078: 0x8c54000c  lw          $s4, 0xC($v0)
    ctx->pc = 0x203078u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x20307c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20307cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203080: 0xc0800f8  jal         func_2003E0
    ctx->pc = 0x203080u;
    SET_GPR_U32(ctx, 31, 0x203088u);
    ctx->pc = 0x203084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203080u;
    // 0x203084: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2003E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2003E0u, 0x203080u, 0x203088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203088u;
label_203088:
    // 0x203088: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x203088u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20308c: 0x4e1fe95  bgez        $a3, . + 4 + (-0x16B << 2)
    ctx->pc = 0x20308Cu;
    {
        const bool branch_taken_0x20308c = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x20308c) {
            ctx->pc = 0x202AE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202ae4;
        }
    }
    ctx->pc = 0x203094u;
    // 0x203094: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x203094u;
    {
        const bool branch_taken_0x203094 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x203098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203094u;
        // 0x203098: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203094) {
            ctx->pc = 0x2030B4u;
            goto label_2030b4;
        }
    }
    ctx->pc = 0x20309Cu;
    // 0x20309c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20309cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2030a0: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x2030a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x2030a4: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x2030a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x2030a8: 0x1040fe83  beqz        $v0, . + 4 + (-0x17D << 2)
    ctx->pc = 0x2030A8u;
    {
        const bool branch_taken_0x2030a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2030ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2030A8u;
        // 0x2030ac: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2030a8) {
            ctx->pc = 0x202AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202ab8;
        }
    }
    ctx->pc = 0x2030B0u;
label_2030b0:
    // 0x2030b0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2030b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2030b4:
    // 0x2030b4: 0xc07feca  jal         func_1FFB28
    ctx->pc = 0x2030B4u;
    SET_GPR_U32(ctx, 31, 0x2030BCu);
    ctx->pc = 0x2030B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2030B4u;
    // 0x2030b8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB28u, 0x2030B4u, 0x2030BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2030BCu;
label_2030bc:
    // 0x2030bc: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x2030bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2030c0: 0xc07feca  jal         func_1FFB28
    ctx->pc = 0x2030C0u;
    SET_GPR_U32(ctx, 31, 0x2030C8u);
    ctx->pc = 0x2030C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2030C0u;
    // 0x2030c4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB28u, 0x2030C0u, 0x2030C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2030C8u;
label_2030c8:
    // 0x2030c8: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x2030c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2030cc: 0xc07feca  jal         func_1FFB28
    ctx->pc = 0x2030CCu;
    SET_GPR_U32(ctx, 31, 0x2030D4u);
    ctx->pc = 0x2030D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2030CCu;
    // 0x2030d0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB28u, 0x2030CCu, 0x2030D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2030D4u;
label_2030d4:
    // 0x2030d4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2030d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2030d8: 0xc07feca  jal         func_1FFB28
    ctx->pc = 0x2030D8u;
    SET_GPR_U32(ctx, 31, 0x2030E0u);
    ctx->pc = 0x2030DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2030D8u;
    // 0x2030dc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB28u, 0x2030D8u, 0x2030E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2030E0u;
label_2030e0:
    // 0x2030e0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2030e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2030e4: 0xc07feca  jal         func_1FFB28
    ctx->pc = 0x2030E4u;
    SET_GPR_U32(ctx, 31, 0x2030ECu);
    ctx->pc = 0x2030E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2030E4u;
    // 0x2030e8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB28u, 0x2030E4u, 0x2030ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2030ECu;
label_2030ec:
    // 0x2030ec: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2030ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2030f0:
    // 0x2030f0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2030F0u;
    {
        const bool branch_taken_0x2030f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2030f0) {
            ctx->pc = 0x2030F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2030F0u;
            // 0x2030f4: 0xac550000  sw          $s5, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2030F8u;
            goto label_2030f8;
        }
    }
    ctx->pc = 0x2030F8u;
label_2030f8:
    // 0x2030f8: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2030f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2030fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2030FCu;
    {
        const bool branch_taken_0x2030fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x203100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2030FCu;
        // 0x203100: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2030fc) {
            ctx->pc = 0x203110u;
            goto label_203110;
        }
    }
    ctx->pc = 0x203104u;
    // 0x203104: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x203104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203108: 0xc082014  jal         func_208050
    ctx->pc = 0x203108u;
    SET_GPR_U32(ctx, 31, 0x203110u);
    ctx->pc = 0x20310Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203108u;
    // 0x20310c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x203108u, 0x203110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203110u;
label_203110:
    // 0x203110: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x203110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x203114: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x203114u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x203118: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x203118u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x20311c: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x20311cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x203120: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x203120u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x203124: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x203124u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x203128: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x203128u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20312c: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x20312cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x203130: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x203130u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x203134: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x203134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x203138: 0x3e00008  jr          $ra
    ctx->pc = 0x203138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203138u;
        // 0x20313c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203140u;
}
