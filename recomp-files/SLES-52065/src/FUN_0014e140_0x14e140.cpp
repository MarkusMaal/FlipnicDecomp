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

// Function: FUN_0014e140
// Address: 0x14e140 - 0x14e79c
void FUN_0014e140_0x14e140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014e140_0x14e140");
#endif

    switch (ctx->pc) {
        case 0x14e1c0u: goto label_14e1c0;
        case 0x14e1c8u: goto label_14e1c8;
        case 0x14e234u: goto label_14e234;
        case 0x14e244u: goto label_14e244;
        case 0x14e250u: goto label_14e250;
        case 0x14e258u: goto label_14e258;
        case 0x14e270u: goto label_14e270;
        case 0x14e284u: goto label_14e284;
        case 0x14e2b4u: goto label_14e2b4;
        case 0x14e2c4u: goto label_14e2c4;
        case 0x14e2d0u: goto label_14e2d0;
        case 0x14e2d8u: goto label_14e2d8;
        case 0x14e2f0u: goto label_14e2f0;
        case 0x14e304u: goto label_14e304;
        case 0x14e34cu: goto label_14e34c;
        case 0x14e35cu: goto label_14e35c;
        case 0x14e368u: goto label_14e368;
        case 0x14e370u: goto label_14e370;
        case 0x14e388u: goto label_14e388;
        case 0x14e39cu: goto label_14e39c;
        case 0x14e404u: goto label_14e404;
        case 0x14e418u: goto label_14e418;
        case 0x14e430u: goto label_14e430;
        case 0x14e440u: goto label_14e440;
        case 0x14e458u: goto label_14e458;
        case 0x14e46cu: goto label_14e46c;
        case 0x14e4c4u: goto label_14e4c4;
        case 0x14e508u: goto label_14e508;
        case 0x14e52cu: goto label_14e52c;
        case 0x14e534u: goto label_14e534;
        case 0x14e564u: goto label_14e564;
        case 0x14e574u: goto label_14e574;
        case 0x14e580u: goto label_14e580;
        case 0x14e588u: goto label_14e588;
        case 0x14e5a0u: goto label_14e5a0;
        case 0x14e5b4u: goto label_14e5b4;
        case 0x14e5e0u: goto label_14e5e0;
        case 0x14e5f0u: goto label_14e5f0;
        case 0x14e5fcu: goto label_14e5fc;
        case 0x14e604u: goto label_14e604;
        case 0x14e61cu: goto label_14e61c;
        case 0x14e630u: goto label_14e630;
        case 0x14e654u: goto label_14e654;
        case 0x14e664u: goto label_14e664;
        case 0x14e670u: goto label_14e670;
        case 0x14e678u: goto label_14e678;
        case 0x14e690u: goto label_14e690;
        case 0x14e6a4u: goto label_14e6a4;
        case 0x14e6dcu: goto label_14e6dc;
        case 0x14e72cu: goto label_14e72c;
        case 0x14e734u: goto label_14e734;
        case 0x14e740u: goto label_14e740;
        case 0x14e76cu: goto label_14e76c;
        default: break;
    }

    ctx->pc = 0x14e140u;

    // 0x14e140: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x14e140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x14e144: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x14e144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x14e148: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x14e148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x14e14c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x14e14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x14e150: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14e150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x14e154: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14e154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14e158: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14e158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14e15c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x14e15cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e160: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14e160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14e164: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x14e164u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e168: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14e168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14e16c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x14e16cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e170: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14e170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14e174: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x14e174u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e178: 0x1260017c  beqz        $s3, . + 4 + (0x17C << 2)
    ctx->pc = 0x14E178u;
    {
        const bool branch_taken_0x14e178 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E178u;
        // 0x14e17c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e178) {
            ctx->pc = 0x14E76Cu;
            goto label_14e76c;
        }
    }
    ctx->pc = 0x14E180u;
    // 0x14e180: 0x3c031555  lui         $v1, 0x1555
    ctx->pc = 0x14e180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5461 << 16));
    // 0x14e184: 0x34635555  ori         $v1, $v1, 0x5555
    ctx->pc = 0x14e184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21845);
    // 0x14e188: 0x73082b  sltu        $at, $v1, $s3
    ctx->pc = 0x14e188u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x14e18c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x14E18Cu;
    {
        const bool branch_taken_0x14e18c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e18c) {
            ctx->pc = 0x14E1A8u;
            goto label_14e1a8;
        }
    }
    ctx->pc = 0x14E194u;
    // 0x14e194: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x14e194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14e198: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x14e198u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x14e19c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x14e19cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14e1a0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x14E1A0u;
    {
        const bool branch_taken_0x14e1a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e1a0) {
            ctx->pc = 0x14E1C8u;
            goto label_14e1c8;
        }
    }
    ctx->pc = 0x14E1A8u;
label_14e1a8:
    // 0x14e1a8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14e1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14e1ac: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14e1acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14e1b0: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14e1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x14e1b4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14e1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14e1b8: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14E1B8u;
    SET_GPR_U32(ctx, 31, 0x14E1C0u);
    ctx->pc = 0x14E1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E1B8u;
    // 0x14e1bc: 0x24a5f2a0  addiu       $a1, $a1, -0xD60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14E1B8u, 0x14E1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E1C0u;
label_14e1c0:
    // 0x14e1c0: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14E1C0u;
    SET_GPR_U32(ctx, 31, 0x14E1C8u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14E1C0u, 0x14E1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E1C8u;
label_14e1c8:
    // 0x14e1c8: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x14e1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14e1cc: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x14e1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14e1d0: 0xb32021  addu        $a0, $a1, $s3
    ctx->pc = 0x14e1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x14e1d4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x14e1d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x14e1d8: 0x142000aa  bnez        $at, . + 4 + (0xAA << 2)
    ctx->pc = 0x14E1D8u;
    {
        const bool branch_taken_0x14e1d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e1d8) {
            ctx->pc = 0x14E484u;
            goto label_14e484;
        }
    }
    ctx->pc = 0x14E1E0u;
    // 0x14e1e0: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x14e1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14e1e4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x14e1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x14e1e8: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x14e1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x14e1ec: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x14e1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14e1f0: 0x3c032aaa  lui         $v1, 0x2AAA
    ctx->pc = 0x14e1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
    // 0x14e1f4: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x14e1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x14e1f8: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x14e1f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14e1fc: 0x2342023  subu        $a0, $s1, $s4
    ctx->pc = 0x14e1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x14e200: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x14e200u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x14e204: 0x0  nop
    ctx->pc = 0x14e204u;
    // NOP
    // 0x14e208: 0x0  nop
    ctx->pc = 0x14e208u;
    // NOP
    // 0x14e20c: 0x1810  mfhi        $v1
    ctx->pc = 0x14e20cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x14e210: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x14e210u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x14e214: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x14e214u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x14e218: 0x64b821  addu        $s7, $v1, $a0
    ctx->pc = 0x14e218u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14e21c: 0x2f3082b  sltu        $at, $s7, $s3
    ctx->pc = 0x14e21cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x14e220: 0x10200042  beqz        $at, . + 4 + (0x42 << 2)
    ctx->pc = 0x14E220u;
    {
        const bool branch_taken_0x14e220 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E220u;
        // 0x14e224: 0x131840  sll         $v1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e220) {
            ctx->pc = 0x14E32Cu;
            goto label_14e32c;
        }
    }
    ctx->pc = 0x14E228u;
    // 0x14e228: 0x2f3082b  sltu        $at, $s7, $s3
    ctx->pc = 0x14e228u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x14e22c: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x14E22Cu;
    {
        const bool branch_taken_0x14e22c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E22Cu;
        // 0x14e230: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e22c) {
            ctx->pc = 0x14E2A4u;
            goto label_14e2a4;
        }
    }
    ctx->pc = 0x14E234u;
label_14e234:
    // 0x14e234: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x14E234u;
    {
        const bool branch_taken_0x14e234 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E234u;
        // 0x14e238: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e234) {
            ctx->pc = 0x14E284u;
            goto label_14e284;
        }
    }
    ctx->pc = 0x14E23Cu;
    // 0x14e23c: 0xc053a00  jal         func_14E800
    ctx->pc = 0x14E23Cu;
    SET_GPR_U32(ctx, 31, 0x14E244u);
    ctx->pc = 0x14E240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E23Cu;
    // 0x14e240: 0xafb000c0  sw          $s0, 0xC0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E800u, 0x14E23Cu, 0x14E244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E244u;
label_14e244:
    // 0x14e244: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x14e244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x14e248: 0xc0539f8  jal         func_14E7E0
    ctx->pc = 0x14E248u;
    SET_GPR_U32(ctx, 31, 0x14E250u);
    ctx->pc = 0x14E24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E248u;
    // 0x14e24c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7E0u, 0x14E248u, 0x14E250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E250u;
label_14e250:
    // 0x14e250: 0xc0539f4  jal         func_14E7D0
    ctx->pc = 0x14E250u;
    SET_GPR_U32(ctx, 31, 0x14E258u);
    ctx->pc = 0x14E254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E250u;
    // 0x14e254: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7D0u, 0x14E250u, 0x14E258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E258u;
label_14e258:
    // 0x14e258: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x14e258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14e25c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14e25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e260: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e264: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14e264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14e268: 0xc0539f4  jal         func_14E7D0
    ctx->pc = 0x14E268u;
    SET_GPR_U32(ctx, 31, 0x14E270u);
    ctx->pc = 0x14E26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E268u;
    // 0x14e26c: 0x43b021  addu        $s6, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7D0u, 0x14E268u, 0x14E270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E270u;
label_14e270:
    // 0x14e270: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14e270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e274: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x14e274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x14e278: 0x83a700bc  lb          $a3, 0xBC($sp)
    ctx->pc = 0x14e278u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x14e27c: 0xc053ad0  jal         func_14EB40
    ctx->pc = 0x14E27Cu;
    SET_GPR_U32(ctx, 31, 0x14E284u);
    ctx->pc = 0x14E280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E27Cu;
    // 0x14e280: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EB40u, 0x14E27Cu, 0x14E284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E284u;
label_14e284:
    // 0x14e284: 0x0  nop
    ctx->pc = 0x14e284u;
    // NOP
    // 0x14e288: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x14e288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14e28c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x14e28cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x14e290: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x14e290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x14e294: 0x2f3082b  sltu        $at, $s7, $s3
    ctx->pc = 0x14e294u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x14e298: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14e298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14e29c: 0x1420ffe5  bnez        $at, . + 4 + (-0x1B << 2)
    ctx->pc = 0x14E29Cu;
    {
        const bool branch_taken_0x14e29c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E29Cu;
        // 0x14e2a0: 0xaea30004  sw          $v1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e29c) {
            ctx->pc = 0x14E234u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e234;
        }
    }
    ctx->pc = 0x14E2A4u;
label_14e2a4:
    // 0x14e2a4: 0x0  nop
    ctx->pc = 0x14e2a4u;
    // NOP
    // 0x14e2a8: 0x291082b  sltu        $at, $s4, $s1
    ctx->pc = 0x14e2a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14e2ac: 0x1020005d  beqz        $at, . + 4 + (0x5D << 2)
    ctx->pc = 0x14E2ACu;
    {
        const bool branch_taken_0x14e2ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E2ACu;
        // 0x14e2b0: 0x280b02d  daddu       $s6, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e2ac) {
            ctx->pc = 0x14E424u;
            goto label_14e424;
        }
    }
    ctx->pc = 0x14E2B4u;
label_14e2b4:
    // 0x14e2b4: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x14E2B4u;
    {
        const bool branch_taken_0x14e2b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E2B4u;
        // 0x14e2b8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e2b4) {
            ctx->pc = 0x14E304u;
            goto label_14e304;
        }
    }
    ctx->pc = 0x14E2BCu;
    // 0x14e2bc: 0xc053a00  jal         func_14E800
    ctx->pc = 0x14E2BCu;
    SET_GPR_U32(ctx, 31, 0x14E2C4u);
    ctx->pc = 0x14E2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E2BCu;
    // 0x14e2c0: 0xafb000c8  sw          $s0, 0xC8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E800u, 0x14E2BCu, 0x14E2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E2C4u;
label_14e2c4:
    // 0x14e2c4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x14e2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x14e2c8: 0xc0539f8  jal         func_14E7E0
    ctx->pc = 0x14E2C8u;
    SET_GPR_U32(ctx, 31, 0x14E2D0u);
    ctx->pc = 0x14E2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E2C8u;
    // 0x14e2cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7E0u, 0x14E2C8u, 0x14E2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E2D0u;
label_14e2d0:
    // 0x14e2d0: 0xc0539f4  jal         func_14E7D0
    ctx->pc = 0x14E2D0u;
    SET_GPR_U32(ctx, 31, 0x14E2D8u);
    ctx->pc = 0x14E2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E2D0u;
    // 0x14e2d4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7D0u, 0x14E2D0u, 0x14E2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E2D8u;
label_14e2d8:
    // 0x14e2d8: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x14e2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x14e2dc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x14e2dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e2e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e2e4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14e2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14e2e8: 0xc0539f4  jal         func_14E7D0
    ctx->pc = 0x14E2E8u;
    SET_GPR_U32(ctx, 31, 0x14E2F0u);
    ctx->pc = 0x14E2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E2E8u;
    // 0x14e2ec: 0x43b821  addu        $s7, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7D0u, 0x14E2E8u, 0x14E2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E2F0u;
label_14e2f0:
    // 0x14e2f0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14e2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e2f4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x14e2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x14e2f8: 0x83a700c4  lb          $a3, 0xC4($sp)
    ctx->pc = 0x14e2f8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x14e2fc: 0xc053ad0  jal         func_14EB40
    ctx->pc = 0x14E2FCu;
    SET_GPR_U32(ctx, 31, 0x14E304u);
    ctx->pc = 0x14E300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E2FCu;
    // 0x14e300: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EB40u, 0x14E2FCu, 0x14E304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E304u;
label_14e304:
    // 0x14e304: 0x0  nop
    ctx->pc = 0x14e304u;
    // NOP
    // 0x14e308: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x14e308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14e30c: 0x26d6000c  addiu       $s6, $s6, 0xC
    ctx->pc = 0x14e30cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
    // 0x14e310: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x14e310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x14e314: 0x2d1182b  sltu        $v1, $s6, $s1
    ctx->pc = 0x14e314u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14e318: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14e318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14e31c: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x14E31Cu;
    {
        const bool branch_taken_0x14e31c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E31Cu;
        // 0x14e320: 0xaea40004  sw          $a0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e31c) {
            ctx->pc = 0x14E2B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e2b4;
        }
    }
    ctx->pc = 0x14E324u;
    // 0x14e324: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x14E324u;
    {
        const bool branch_taken_0x14e324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e324) {
            ctx->pc = 0x14E424u;
            goto label_14e424;
        }
    }
    ctx->pc = 0x14E32Cu;
label_14e32c:
    // 0x14e32c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x14e32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x14e330: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14e330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14e334: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x14e334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x14e338: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x14e338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14e33c: 0x2238023  subu        $s0, $s1, $v1
    ctx->pc = 0x14e33cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x14e340: 0x211082b  sltu        $at, $s0, $s1
    ctx->pc = 0x14e340u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14e344: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x14E344u;
    {
        const bool branch_taken_0x14e344 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E344u;
        // 0x14e348: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e344) {
            ctx->pc = 0x14E3BCu;
            goto label_14e3bc;
        }
    }
    ctx->pc = 0x14E34Cu;
label_14e34c:
    // 0x14e34c: 0x12c00013  beqz        $s6, . + 4 + (0x13 << 2)
    ctx->pc = 0x14E34Cu;
    {
        const bool branch_taken_0x14e34c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E34Cu;
        // 0x14e350: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e34c) {
            ctx->pc = 0x14E39Cu;
            goto label_14e39c;
        }
    }
    ctx->pc = 0x14E354u;
    // 0x14e354: 0xc053a00  jal         func_14E800
    ctx->pc = 0x14E354u;
    SET_GPR_U32(ctx, 31, 0x14E35Cu);
    ctx->pc = 0x14E358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E354u;
    // 0x14e358: 0xafb600d0  sw          $s6, 0xD0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E800u, 0x14E354u, 0x14E35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E35Cu;
label_14e35c:
    // 0x14e35c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x14e35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x14e360: 0xc0539f8  jal         func_14E7E0
    ctx->pc = 0x14E360u;
    SET_GPR_U32(ctx, 31, 0x14E368u);
    ctx->pc = 0x14E364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E360u;
    // 0x14e364: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7E0u, 0x14E360u, 0x14E368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E368u;
label_14e368:
    // 0x14e368: 0xc0539f4  jal         func_14E7D0
    ctx->pc = 0x14E368u;
    SET_GPR_U32(ctx, 31, 0x14E370u);
    ctx->pc = 0x14E36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E368u;
    // 0x14e36c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7D0u, 0x14E368u, 0x14E370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E370u;
label_14e370:
    // 0x14e370: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x14e370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14e374: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14e374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e378: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e37c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14e37cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14e380: 0xc0539f4  jal         func_14E7D0
    ctx->pc = 0x14E380u;
    SET_GPR_U32(ctx, 31, 0x14E388u);
    ctx->pc = 0x14E384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E380u;
    // 0x14e384: 0x43f021  addu        $fp, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7D0u, 0x14E380u, 0x14E388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E388u;
label_14e388:
    // 0x14e388: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14e388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e38c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x14e38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x14e390: 0x83a700cc  lb          $a3, 0xCC($sp)
    ctx->pc = 0x14e390u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x14e394: 0xc053ad0  jal         func_14EB40
    ctx->pc = 0x14E394u;
    SET_GPR_U32(ctx, 31, 0x14E39Cu);
    ctx->pc = 0x14E398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E394u;
    // 0x14e398: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EB40u, 0x14E394u, 0x14E39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E39Cu;
label_14e39c:
    // 0x14e39c: 0x0  nop
    ctx->pc = 0x14e39cu;
    // NOP
    // 0x14e3a0: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x14e3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14e3a4: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x14e3a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x14e3a8: 0x26d6000c  addiu       $s6, $s6, 0xC
    ctx->pc = 0x14e3a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
    // 0x14e3ac: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x14e3acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14e3b0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14e3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14e3b4: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x14E3B4u;
    {
        const bool branch_taken_0x14e3b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E3B4u;
        // 0x14e3b8: 0xaea40004  sw          $a0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e3b4) {
            ctx->pc = 0x14E34Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e34c;
        }
    }
    ctx->pc = 0x14E3BCu;
label_14e3bc:
    // 0x14e3bc: 0x0  nop
    ctx->pc = 0x14e3bcu;
    // NOP
    // 0x14e3c0: 0x2f32023  subu        $a0, $s7, $s3
    ctx->pc = 0x14e3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 19)));
    // 0x14e3c4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x14e3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x14e3c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14e3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14e3cc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x14e3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14e3d0: 0x2241823  subu        $v1, $s1, $a0
    ctx->pc = 0x14e3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x14e3d4: 0x243082b  sltu        $at, $s2, $v1
    ctx->pc = 0x14e3d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14e3d8: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x14E3D8u;
    {
        const bool branch_taken_0x14e3d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E3D8u;
        // 0x14e3dc: 0x2848021  addu        $s0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e3d8) {
            ctx->pc = 0x14E3F8u;
            goto label_14e3f8;
        }
    }
    ctx->pc = 0x14E3E0u;
    // 0x14e3e0: 0x251082b  sltu        $at, $s2, $s1
    ctx->pc = 0x14e3e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14e3e4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E3E4u;
    {
        const bool branch_taken_0x14e3e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e3e4) {
            ctx->pc = 0x14E3F4u;
            goto label_14e3f4;
        }
    }
    ctx->pc = 0x14E3ECu;
    // 0x14e3ec: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x14e3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14e3f0: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x14e3f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_14e3f4:
    // 0x14e3f4: 0x2848021  addu        $s0, $s4, $a0
    ctx->pc = 0x14e3f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_14e3f8:
    // 0x14e3f8: 0x290082b  sltu        $at, $s4, $s0
    ctx->pc = 0x14e3f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x14e3fc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x14E3FCu;
    {
        const bool branch_taken_0x14e3fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e3fc) {
            ctx->pc = 0x14E424u;
            goto label_14e424;
        }
    }
    ctx->pc = 0x14E404u;
label_14e404:
    // 0x14e404: 0x2610fff4  addiu       $s0, $s0, -0xC
    ctx->pc = 0x14e404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
    // 0x14e408: 0x2631fff4  addiu       $s1, $s1, -0xC
    ctx->pc = 0x14e408u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967284));
    // 0x14e40c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14e40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e410: 0xc05383c  jal         func_14E0F0
    ctx->pc = 0x14E410u;
    SET_GPR_U32(ctx, 31, 0x14E418u);
    ctx->pc = 0x14E414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E410u;
    // 0x14e414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E0F0u, 0x14E410u, 0x14E418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E418u;
label_14e418:
    // 0x14e418: 0x290082b  sltu        $at, $s4, $s0
    ctx->pc = 0x14e418u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x14e41c: 0x1420fff9  bnez        $at, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14E41Cu;
    {
        const bool branch_taken_0x14e41c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e41c) {
            ctx->pc = 0x14E404u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e404;
        }
    }
    ctx->pc = 0x14E424u;
label_14e424:
    // 0x14e424: 0x0  nop
    ctx->pc = 0x14e424u;
    // NOP
    // 0x14e428: 0x126000d0  beqz        $s3, . + 4 + (0xD0 << 2)
    ctx->pc = 0x14E428u;
    {
        const bool branch_taken_0x14e428 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e428) {
            ctx->pc = 0x14E76Cu;
            goto label_14e76c;
        }
    }
    ctx->pc = 0x14E430u;
label_14e430:
    // 0x14e430: 0x1292000e  beq         $s4, $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x14E430u;
    {
        const bool branch_taken_0x14e430 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 18));
        ctx->pc = 0x14E434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E430u;
        // 0x14e434: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e430) {
            ctx->pc = 0x14E46Cu;
            goto label_14e46c;
        }
    }
    ctx->pc = 0x14E438u;
    // 0x14e438: 0xc0539f4  jal         func_14E7D0
    ctx->pc = 0x14E438u;
    SET_GPR_U32(ctx, 31, 0x14E440u);
    ctx->pc = 0x14E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7D0u, 0x14E438u, 0x14E440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E440u;
label_14e440:
    // 0x14e440: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x14e440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14e444: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14e444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e448: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e44c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14e44cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14e450: 0xc0539f4  jal         func_14E7D0
    ctx->pc = 0x14E450u;
    SET_GPR_U32(ctx, 31, 0x14E458u);
    ctx->pc = 0x14E454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E450u;
    // 0x14e454: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7D0u, 0x14E450u, 0x14E458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E458u;
label_14e458:
    // 0x14e458: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14e458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e45c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14e45cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e460: 0x83a700d4  lb          $a3, 0xD4($sp)
    ctx->pc = 0x14e460u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x14e464: 0xc053b14  jal         func_14EC50
    ctx->pc = 0x14E464u;
    SET_GPR_U32(ctx, 31, 0x14E46Cu);
    ctx->pc = 0x14E468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E464u;
    // 0x14e468: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC50u, 0x14E464u, 0x14E46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E46Cu;
label_14e46c:
    // 0x14e46c: 0x0  nop
    ctx->pc = 0x14e46cu;
    // NOP
    // 0x14e470: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x14e470u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x14e474: 0x1660ffee  bnez        $s3, . + 4 + (-0x12 << 2)
    ctx->pc = 0x14E474u;
    {
        const bool branch_taken_0x14e474 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E474u;
        // 0x14e478: 0x2694000c  addiu       $s4, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e474) {
            ctx->pc = 0x14E430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e430;
        }
    }
    ctx->pc = 0x14E47Cu;
    // 0x14e47c: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x14E47Cu;
    {
        const bool branch_taken_0x14e47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E47Cu;
        // 0x14e480: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e47c) {
            ctx->pc = 0x14E770u;
            goto label_14e770;
        }
    }
    ctx->pc = 0x14E484u;
label_14e484:
    // 0x14e484: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x14e484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x14e488: 0x27b600b4  addiu       $s6, $sp, 0xB4
    ctx->pc = 0x14e488u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x14e48c: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x14e48cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x14e490: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x14e490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x14e494: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14e494u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x14e498: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x14e498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14e49c: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x14e49cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x14e4a0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E4A0u;
    {
        const bool branch_taken_0x14e4a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E4A0u;
        // 0x14e4a4: 0x531821  addu        $v1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e4a0) {
            ctx->pc = 0x14E4B0u;
            goto label_14e4b0;
        }
    }
    ctx->pc = 0x14E4A8u;
    // 0x14e4a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14E4A8u;
    {
        const bool branch_taken_0x14e4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E4A8u;
        // 0x14e4ac: 0x203082b  sltu        $at, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e4a8) {
            ctx->pc = 0x14E4B8u;
            goto label_14e4b8;
        }
    }
    ctx->pc = 0x14E4B0u;
label_14e4b0:
    // 0x14e4b0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x14e4b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e4b4: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x14e4b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_14e4b8:
    // 0x14e4b8: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x14E4B8u;
    {
        const bool branch_taken_0x14e4b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E4B8u;
        // 0x14e4bc: 0x3c021555  lui         $v0, 0x1555 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5461 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e4b8) {
            ctx->pc = 0x14E4F4u;
            goto label_14e4f4;
        }
    }
    ctx->pc = 0x14E4C0u;
    // 0x14e4c0: 0x3c010aaa  lui         $at, 0xAAA
    ctx->pc = 0x14e4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2730 << 16));
label_14e4c4:
    // 0x14e4c4: 0x3421aaaa  ori         $at, $at, 0xAAAA
    ctx->pc = 0x14e4c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43690);
    // 0x14e4c8: 0x201082b  sltu        $at, $s0, $at
    ctx->pc = 0x14e4c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x14e4cc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E4CCu;
    {
        const bool branch_taken_0x14e4cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e4cc) {
            ctx->pc = 0x14E4DCu;
            goto label_14e4dc;
        }
    }
    ctx->pc = 0x14E4D4u;
    // 0x14e4d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14E4D4u;
    {
        const bool branch_taken_0x14e4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E4D4u;
        // 0x14e4d8: 0x108040  sll         $s0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e4d4) {
            ctx->pc = 0x14E4E4u;
            goto label_14e4e4;
        }
    }
    ctx->pc = 0x14E4DCu;
label_14e4dc:
    // 0x14e4dc: 0x0  nop
    ctx->pc = 0x14e4dcu;
    // NOP
    // 0x14e4e0: 0x34505555  ori         $s0, $v0, 0x5555
    ctx->pc = 0x14e4e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21845);
label_14e4e4:
    // 0x14e4e4: 0x0  nop
    ctx->pc = 0x14e4e4u;
    // NOP
    // 0x14e4e8: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x14e4e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14e4ec: 0x1420fff5  bnez        $at, . + 4 + (-0xB << 2)
    ctx->pc = 0x14E4ECu;
    {
        const bool branch_taken_0x14e4ec = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E4ECu;
        // 0x14e4f0: 0x3c010aaa  lui         $at, 0xAAA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2730 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e4ec) {
            ctx->pc = 0x14E4C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e4c4;
        }
    }
    ctx->pc = 0x14E4F4u;
label_14e4f4:
    // 0x14e4f4: 0x0  nop
    ctx->pc = 0x14e4f4u;
    // NOP
    // 0x14e4f8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x14e4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x14e4fc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x14e4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14e500: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x14E500u;
    SET_GPR_U32(ctx, 31, 0x14E508u);
    ctx->pc = 0x14E504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E500u;
    // 0x14e504: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x14E500u, 0x14E508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E508u;
label_14e508:
    // 0x14e508: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14e508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e50c: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x14E50Cu;
    {
        const bool branch_taken_0x14e50c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E50Cu;
        // 0x14e510: 0x27a300b8  addiu       $v1, $sp, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e50c) {
            ctx->pc = 0x14E538u;
            goto label_14e538;
        }
    }
    ctx->pc = 0x14E514u;
    // 0x14e514: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14e514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14e518: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14e518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14e51c: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14e51cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x14e520: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14e520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14e524: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14E524u;
    SET_GPR_U32(ctx, 31, 0x14E52Cu);
    ctx->pc = 0x14E528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E524u;
    // 0x14e528: 0x24a5f2c0  addiu       $a1, $a1, -0xD40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14E524u, 0x14E52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E52Cu;
label_14e52c:
    // 0x14e52c: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14E52Cu;
    SET_GPR_U32(ctx, 31, 0x14E534u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14E52Cu, 0x14E534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E534u;
label_14e534:
    // 0x14e534: 0x27a300b8  addiu       $v1, $sp, 0xB8
    ctx->pc = 0x14e534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_14e538:
    // 0x14e538: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x14e538u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x14e53c: 0xafb000b0  sw          $s0, 0xB0($sp)
    ctx->pc = 0x14e53cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 16));
    // 0x14e540: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x14e540u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e544: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x14e544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14e548: 0x8eb10008  lw          $s1, 0x8($s5)
    ctx->pc = 0x14e548u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14e54c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x14e54cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x14e550: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14e550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14e554: 0x234082b  sltu        $at, $s1, $s4
    ctx->pc = 0x14e554u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x14e558: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14e558u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14e55c: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x14E55Cu;
    {
        const bool branch_taken_0x14e55c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E55Cu;
        // 0x14e560: 0x223b821  addu        $s7, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e55c) {
            ctx->pc = 0x14E5D4u;
            goto label_14e5d4;
        }
    }
    ctx->pc = 0x14E564u;
label_14e564:
    // 0x14e564: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x14E564u;
    {
        const bool branch_taken_0x14e564 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E564u;
        // 0x14e568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e564) {
            ctx->pc = 0x14E5B4u;
            goto label_14e5b4;
        }
    }
    ctx->pc = 0x14E56Cu;
    // 0x14e56c: 0xc053a00  jal         func_14E800
    ctx->pc = 0x14E56Cu;
    SET_GPR_U32(ctx, 31, 0x14E574u);
    ctx->pc = 0x14E570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E56Cu;
    // 0x14e570: 0xafb000dc  sw          $s0, 0xDC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E800u, 0x14E56Cu, 0x14E574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E574u;
label_14e574:
    // 0x14e574: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x14e574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x14e578: 0xc0539f8  jal         func_14E7E0
    ctx->pc = 0x14E578u;
    SET_GPR_U32(ctx, 31, 0x14E580u);
    ctx->pc = 0x14E57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E578u;
    // 0x14e57c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7E0u, 0x14E578u, 0x14E580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E580u;
label_14e580:
    // 0x14e580: 0xc0539f4  jal         func_14E7D0
    ctx->pc = 0x14E580u;
    SET_GPR_U32(ctx, 31, 0x14E588u);
    ctx->pc = 0x14E584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E580u;
    // 0x14e584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7D0u, 0x14E580u, 0x14E588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E588u;
label_14e588:
    // 0x14e588: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x14e588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14e58c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e590: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e594: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14e594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14e598: 0xc0539f4  jal         func_14E7D0
    ctx->pc = 0x14E598u;
    SET_GPR_U32(ctx, 31, 0x14E5A0u);
    ctx->pc = 0x14E59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E598u;
    // 0x14e59c: 0x43f021  addu        $fp, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7D0u, 0x14E598u, 0x14E5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E5A0u;
label_14e5a0:
    // 0x14e5a0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14e5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e5a4: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x14e5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x14e5a8: 0x83a700d8  lb          $a3, 0xD8($sp)
    ctx->pc = 0x14e5a8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x14e5ac: 0xc053ad0  jal         func_14EB40
    ctx->pc = 0x14E5ACu;
    SET_GPR_U32(ctx, 31, 0x14E5B4u);
    ctx->pc = 0x14E5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E5ACu;
    // 0x14e5b0: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EB40u, 0x14E5ACu, 0x14E5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E5B4u;
label_14e5b4:
    // 0x14e5b4: 0x0  nop
    ctx->pc = 0x14e5b4u;
    // NOP
    // 0x14e5b8: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x14e5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14e5bc: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x14e5bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x14e5c0: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x14e5c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x14e5c4: 0x234182b  sltu        $v1, $s1, $s4
    ctx->pc = 0x14e5c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x14e5c8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14e5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14e5cc: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x14E5CCu;
    {
        const bool branch_taken_0x14e5cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E5CCu;
        // 0x14e5d0: 0xaec40000  sw          $a0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e5cc) {
            ctx->pc = 0x14E564u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e564;
        }
    }
    ctx->pc = 0x14E5D4u;
label_14e5d4:
    // 0x14e5d4: 0x0  nop
    ctx->pc = 0x14e5d4u;
    // NOP
    // 0x14e5d8: 0x1260001b  beqz        $s3, . + 4 + (0x1B << 2)
    ctx->pc = 0x14E5D8u;
    {
        const bool branch_taken_0x14e5d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e5d8) {
            ctx->pc = 0x14E648u;
            goto label_14e648;
        }
    }
    ctx->pc = 0x14E5E0u;
label_14e5e0:
    // 0x14e5e0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x14E5E0u;
    {
        const bool branch_taken_0x14e5e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E5E0u;
        // 0x14e5e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e5e0) {
            ctx->pc = 0x14E630u;
            goto label_14e630;
        }
    }
    ctx->pc = 0x14E5E8u;
    // 0x14e5e8: 0xc053a00  jal         func_14E800
    ctx->pc = 0x14E5E8u;
    SET_GPR_U32(ctx, 31, 0x14E5F0u);
    ctx->pc = 0x14E5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E5E8u;
    // 0x14e5ec: 0xafb000e4  sw          $s0, 0xE4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E800u, 0x14E5E8u, 0x14E5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E5F0u;
label_14e5f0:
    // 0x14e5f0: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x14e5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x14e5f4: 0xc0539f8  jal         func_14E7E0
    ctx->pc = 0x14E5F4u;
    SET_GPR_U32(ctx, 31, 0x14E5FCu);
    ctx->pc = 0x14E5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E5F4u;
    // 0x14e5f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7E0u, 0x14E5F4u, 0x14E5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E5FCu;
label_14e5fc:
    // 0x14e5fc: 0xc0539f4  jal         func_14E7D0
    ctx->pc = 0x14E5FCu;
    SET_GPR_U32(ctx, 31, 0x14E604u);
    ctx->pc = 0x14E600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E5FCu;
    // 0x14e600: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7D0u, 0x14E5FCu, 0x14E604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E604u;
label_14e604:
    // 0x14e604: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x14e604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14e608: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14e608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e60c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e610: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14e610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14e614: 0xc0539f4  jal         func_14E7D0
    ctx->pc = 0x14E614u;
    SET_GPR_U32(ctx, 31, 0x14E61Cu);
    ctx->pc = 0x14E618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E614u;
    // 0x14e618: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7D0u, 0x14E614u, 0x14E61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E61Cu;
label_14e61c:
    // 0x14e61c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14e61cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e620: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x14e620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x14e624: 0x83a700e0  lb          $a3, 0xE0($sp)
    ctx->pc = 0x14e624u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x14e628: 0xc053ad0  jal         func_14EB40
    ctx->pc = 0x14E628u;
    SET_GPR_U32(ctx, 31, 0x14E630u);
    ctx->pc = 0x14E62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E628u;
    // 0x14e62c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EB40u, 0x14E628u, 0x14E630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E630u;
label_14e630:
    // 0x14e630: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x14e630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14e634: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x14e634u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x14e638: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x14e638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x14e63c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14e63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14e640: 0x1660ffe7  bnez        $s3, . + 4 + (-0x19 << 2)
    ctx->pc = 0x14E640u;
    {
        const bool branch_taken_0x14e640 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E640u;
        // 0x14e644: 0xaec30000  sw          $v1, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e640) {
            ctx->pc = 0x14E5E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e5e0;
        }
    }
    ctx->pc = 0x14E648u;
label_14e648:
    // 0x14e648: 0x237082b  sltu        $at, $s1, $s7
    ctx->pc = 0x14e648u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x14e64c: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x14E64Cu;
    {
        const bool branch_taken_0x14e64c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e64c) {
            ctx->pc = 0x14E6C4u;
            goto label_14e6c4;
        }
    }
    ctx->pc = 0x14E654u;
label_14e654:
    // 0x14e654: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x14E654u;
    {
        const bool branch_taken_0x14e654 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E654u;
        // 0x14e658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e654) {
            ctx->pc = 0x14E6A4u;
            goto label_14e6a4;
        }
    }
    ctx->pc = 0x14E65Cu;
    // 0x14e65c: 0xc053a00  jal         func_14E800
    ctx->pc = 0x14E65Cu;
    SET_GPR_U32(ctx, 31, 0x14E664u);
    ctx->pc = 0x14E660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E65Cu;
    // 0x14e660: 0xafb000ec  sw          $s0, 0xEC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E800u, 0x14E65Cu, 0x14E664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E664u;
label_14e664:
    // 0x14e664: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x14e664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x14e668: 0xc0539f8  jal         func_14E7E0
    ctx->pc = 0x14E668u;
    SET_GPR_U32(ctx, 31, 0x14E670u);
    ctx->pc = 0x14E66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E668u;
    // 0x14e66c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7E0u, 0x14E668u, 0x14E670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E670u;
label_14e670:
    // 0x14e670: 0xc0539f4  jal         func_14E7D0
    ctx->pc = 0x14E670u;
    SET_GPR_U32(ctx, 31, 0x14E678u);
    ctx->pc = 0x14E674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E670u;
    // 0x14e674: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7D0u, 0x14E670u, 0x14E678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E678u;
label_14e678:
    // 0x14e678: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x14e678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14e67c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e680: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14e680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e684: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14e684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14e688: 0xc0539f4  jal         func_14E7D0
    ctx->pc = 0x14E688u;
    SET_GPR_U32(ctx, 31, 0x14E690u);
    ctx->pc = 0x14E68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E688u;
    // 0x14e68c: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7D0u, 0x14E688u, 0x14E690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E690u;
label_14e690:
    // 0x14e690: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14e690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14e694: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x14e694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x14e698: 0x83a700e8  lb          $a3, 0xE8($sp)
    ctx->pc = 0x14e698u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x14e69c: 0xc053ad0  jal         func_14EB40
    ctx->pc = 0x14E69Cu;
    SET_GPR_U32(ctx, 31, 0x14E6A4u);
    ctx->pc = 0x14E6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E69Cu;
    // 0x14e6a0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EB40u, 0x14E69Cu, 0x14E6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E6A4u;
label_14e6a4:
    // 0x14e6a4: 0x0  nop
    ctx->pc = 0x14e6a4u;
    // NOP
    // 0x14e6a8: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x14e6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14e6ac: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x14e6acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x14e6b0: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x14e6b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x14e6b4: 0x237182b  sltu        $v1, $s1, $s7
    ctx->pc = 0x14e6b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x14e6b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x14e6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14e6bc: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x14E6BCu;
    {
        const bool branch_taken_0x14e6bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6BCu;
        // 0x14e6c0: 0xaec40000  sw          $a0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e6bc) {
            ctx->pc = 0x14E654u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e654;
        }
    }
    ctx->pc = 0x14E6C4u;
label_14e6c4:
    // 0x14e6c4: 0x0  nop
    ctx->pc = 0x14e6c4u;
    // NOP
    // 0x14e6c8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x14e6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x14e6cc: 0x1095000d  beq         $a0, $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x14E6CCu;
    {
        const bool branch_taken_0x14e6cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 21));
        ctx->pc = 0x14E6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E6CCu;
        // 0x14e6d0: 0x27a300b8  addiu       $v1, $sp, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e6cc) {
            ctx->pc = 0x14E704u;
            goto label_14e704;
        }
    }
    ctx->pc = 0x14E6D4u;
    // 0x14e6d4: 0xc0539ec  jal         func_14E7B0
    ctx->pc = 0x14E6D4u;
    SET_GPR_U32(ctx, 31, 0x14E6DCu);
    ctx->pc = 0x14E6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E6D4u;
    // 0x14e6d8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7B0u, 0x14E6D4u, 0x14E6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E6DCu;
label_14e6dc:
    // 0x14e6dc: 0x27a300b8  addiu       $v1, $sp, 0xB8
    ctx->pc = 0x14e6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x14e6e0: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x14e6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14e6e4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x14e6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e6e8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x14e6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x14e6ec: 0xaea50008  sw          $a1, 0x8($s5)
    ctx->pc = 0x14e6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 5));
    // 0x14e6f0: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x14e6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14e6f4: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x14e6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x14e6f8: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x14e6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x14e6fc: 0xaea40004  sw          $a0, 0x4($s5)
    ctx->pc = 0x14e6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
    // 0x14e700: 0x27a300b8  addiu       $v1, $sp, 0xB8
    ctx->pc = 0x14e700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_14e704:
    // 0x14e704: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x14e704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14e708: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x14e708u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e70c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x14e70cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x14e710: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14e710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14e714: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14e714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14e718: 0x2038821  addu        $s1, $s0, $v1
    ctx->pc = 0x14e718u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x14e71c: 0x211082b  sltu        $at, $s0, $s1
    ctx->pc = 0x14e71cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14e720: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x14E720u;
    {
        const bool branch_taken_0x14e720 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e720) {
            ctx->pc = 0x14E74Cu;
            goto label_14e74c;
        }
    }
    ctx->pc = 0x14E728u;
    // 0x14e728: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x14e728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_14e72c:
    // 0x14e72c: 0xc0539e8  jal         func_14E7A0
    ctx->pc = 0x14E72Cu;
    SET_GPR_U32(ctx, 31, 0x14E734u);
    ctx->pc = 0x14E730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E72Cu;
    // 0x14e730: 0x2631fff4  addiu       $s1, $s1, -0xC (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E7A0u, 0x14E72Cu, 0x14E734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E734u;
label_14e734:
    // 0x14e734: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e738: 0xc05363c  jal         func_14D8F0
    ctx->pc = 0x14E738u;
    SET_GPR_U32(ctx, 31, 0x14E740u);
    ctx->pc = 0x14E73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E738u;
    // 0x14e73c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D8F0u, 0x14E738u, 0x14E740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E740u;
label_14e740:
    // 0x14e740: 0x211082b  sltu        $at, $s0, $s1
    ctx->pc = 0x14e740u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14e744: 0x1420fff9  bnez        $at, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14E744u;
    {
        const bool branch_taken_0x14e744 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E744u;
        // 0x14e748: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e744) {
            ctx->pc = 0x14E72Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14e72c;
        }
    }
    ctx->pc = 0x14E74Cu;
label_14e74c:
    // 0x14e74c: 0x0  nop
    ctx->pc = 0x14e74cu;
    // NOP
    // 0x14e750: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x14e750u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x14e754: 0x27a300b8  addiu       $v1, $sp, 0xB8
    ctx->pc = 0x14e754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x14e758: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x14e758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e75c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E75Cu;
    {
        const bool branch_taken_0x14e75c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e75c) {
            ctx->pc = 0x14E76Cu;
            goto label_14e76c;
        }
    }
    ctx->pc = 0x14E764u;
    // 0x14e764: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14E764u;
    SET_GPR_U32(ctx, 31, 0x14E76Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14E764u, 0x14E76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E76Cu;
label_14e76c:
    // 0x14e76c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x14e76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_14e770:
    // 0x14e770: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x14e770u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14e774: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x14e774u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14e778: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x14e778u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14e77c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14e77cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14e780: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14e780u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14e784: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14e784u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14e788: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14e788u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14e78c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14e78cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e790: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14e790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e794: 0x3e00008  jr          $ra
    ctx->pc = 0x14E794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E794u;
        // 0x14e798: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E79Cu;
}
