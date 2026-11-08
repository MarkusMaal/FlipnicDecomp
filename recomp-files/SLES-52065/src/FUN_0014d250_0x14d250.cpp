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

// Function: FUN_0014d250
// Address: 0x14d250 - 0x14d3a8
void FUN_0014d250_0x14d250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014d250_0x14d250");
#endif

    switch (ctx->pc) {
        case 0x14d2e0u: goto label_14d2e0;
        case 0x14d2ecu: goto label_14d2ec;
        case 0x14d2f8u: goto label_14d2f8;
        case 0x14d324u: goto label_14d324;
        case 0x14d33cu: goto label_14d33c;
        default: break;
    }

    ctx->pc = 0x14d250u;

    // 0x14d250: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x14d250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x14d254: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x14d254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x14d258: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14d258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x14d25c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14d25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14d260: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x14d260u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d264: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14d264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14d268: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x14d268u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d26c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14d26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14d270: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x14d270u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d274: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14d274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14d278: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14d278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14d27c: 0x16b40003  bne         $s5, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D27Cu;
    {
        const bool branch_taken_0x14d27c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 20));
        ctx->pc = 0x14D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D27Cu;
        // 0x14d280: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d27c) {
            ctx->pc = 0x14D28Cu;
            goto label_14d28c;
        }
    }
    ctx->pc = 0x14D284u;
    // 0x14d284: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x14D284u;
    {
        const bool branch_taken_0x14d284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D284u;
        // 0x14d288: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d284) {
            ctx->pc = 0x14D380u;
            goto label_14d380;
        }
    }
    ctx->pc = 0x14D28Cu;
label_14d28c:
    // 0x14d28c: 0x8ec50004  lw          $a1, 0x4($s6)
    ctx->pc = 0x14d28cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x14d290: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x14d290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x14d294: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x14d294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x14d298: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x14d298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x14d29c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x14d29cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x14d2a0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14d2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14d2a4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x14d2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14d2a8: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x14d2a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14d2ac: 0x2741823  subu        $v1, $s3, $s4
    ctx->pc = 0x14d2acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x14d2b0: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x14d2b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x14d2b4: 0x0  nop
    ctx->pc = 0x14d2b4u;
    // NOP
    // 0x14d2b8: 0x0  nop
    ctx->pc = 0x14d2b8u;
    // NOP
    // 0x14d2bc: 0x1010  mfhi        $v0
    ctx->pc = 0x14d2bcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x14d2c0: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x14d2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x14d2c4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x14d2c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x14d2c8: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x14d2c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14d2cc: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x14D2CCu;
    {
        const bool branch_taken_0x14d2cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D2CCu;
        // 0x14d2d0: 0x293082b  sltu        $at, $s4, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d2cc) {
            ctx->pc = 0x14D308u;
            goto label_14d308;
        }
    }
    ctx->pc = 0x14D2D4u;
    // 0x14d2d4: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x14d2d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d2d8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x14D2D8u;
    {
        const bool branch_taken_0x14d2d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D2D8u;
        // 0x14d2dc: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d2d8) {
            ctx->pc = 0x14D308u;
            goto label_14d308;
        }
    }
    ctx->pc = 0x14D2E0u;
label_14d2e0:
    // 0x14d2e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14d2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d2e4: 0xc0537c0  jal         func_14DF00
    ctx->pc = 0x14D2E4u;
    SET_GPR_U32(ctx, 31, 0x14D2ECu);
    ctx->pc = 0x14D2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D2E4u;
    // 0x14d2e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DF00u, 0x14D2E4u, 0x14D2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D2ECu;
label_14d2ec:
    // 0x14d2ec: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x14d2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x14d2f0: 0xc0534ec  jal         func_14D3B0
    ctx->pc = 0x14D2F0u;
    SET_GPR_U32(ctx, 31, 0x14D2F8u);
    ctx->pc = 0x14D2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D2F0u;
    // 0x14d2f4: 0x2625000c  addiu       $a1, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D3B0u, 0x14D2F0u, 0x14D2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D2F8u;
label_14d2f8:
    // 0x14d2f8: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x14d2f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x14d2fc: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x14d2fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x14d300: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14D300u;
    {
        const bool branch_taken_0x14d300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D300u;
        // 0x14d304: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d300) {
            ctx->pc = 0x14D2E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d2e0;
        }
    }
    ctx->pc = 0x14D308u;
label_14d308:
    // 0x14d308: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x14d308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x14d30c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x14d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14d310: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14d310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14d314: 0x2a28021  addu        $s0, $s5, $v0
    ctx->pc = 0x14d314u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x14d318: 0x213082b  sltu        $at, $s0, $s3
    ctx->pc = 0x14d318u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x14d31c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x14D31Cu;
    {
        const bool branch_taken_0x14d31c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d31c) {
            ctx->pc = 0x14D350u;
            goto label_14d350;
        }
    }
    ctx->pc = 0x14D324u;
label_14d324:
    // 0x14d324: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14D324u;
    {
        const bool branch_taken_0x14d324 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d324) {
            ctx->pc = 0x14D33Cu;
            goto label_14d33c;
        }
    }
    ctx->pc = 0x14D32Cu;
    // 0x14d32c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D32Cu;
    {
        const bool branch_taken_0x14d32c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D32Cu;
        // 0x14d330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d32c) {
            ctx->pc = 0x14D33Cu;
            goto label_14d33c;
        }
    }
    ctx->pc = 0x14D334u;
    // 0x14d334: 0xc048414  jal         func_121050
    ctx->pc = 0x14D334u;
    SET_GPR_U32(ctx, 31, 0x14D33Cu);
    ctx->pc = 0x14D338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D334u;
    // 0x14d338: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121050u, 0x14D334u, 0x14D33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D33Cu;
label_14d33c:
    // 0x14d33c: 0x0  nop
    ctx->pc = 0x14d33cu;
    // NOP
    // 0x14d340: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x14d340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x14d344: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x14d344u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x14d348: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x14D348u;
    {
        const bool branch_taken_0x14d348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d348) {
            ctx->pc = 0x14D324u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d324;
        }
    }
    ctx->pc = 0x14D350u;
label_14d350:
    // 0x14d350: 0x3c032aaa  lui         $v1, 0x2AAA
    ctx->pc = 0x14d350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
    // 0x14d354: 0x2952023  subu        $a0, $s4, $s5
    ctx->pc = 0x14d354u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x14d358: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x14d358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x14d35c: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x14d35cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x14d360: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x14d360u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x14d364: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x14d364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d368: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x14d368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x14d36c: 0x2010  mfhi        $a0
    ctx->pc = 0x14d36cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x14d370: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x14d370u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x14d374: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14d374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14d378: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x14d378u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14d37c: 0xaec30004  sw          $v1, 0x4($s6)
    ctx->pc = 0x14d37cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 3));
label_14d380:
    // 0x14d380: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x14d380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14d384: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x14d384u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14d388: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14d388u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14d38c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14d38cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14d390: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14d390u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14d394: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14d394u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d398: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14d398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d39c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14d39cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x14D3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D3A0u;
        // 0x14d3a4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D3A8u;
}
