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

// Function: FUN_0013d160
// Address: 0x13d160 - 0x13d248
void FUN_0013d160_0x13d160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013d160_0x13d160");
#endif

    switch (ctx->pc) {
        case 0x13d160u: goto label_13d160;
        case 0x13d164u: goto label_13d164;
        case 0x13d168u: goto label_13d168;
        case 0x13d16cu: goto label_13d16c;
        case 0x13d170u: goto label_13d170;
        case 0x13d174u: goto label_13d174;
        case 0x13d178u: goto label_13d178;
        case 0x13d17cu: goto label_13d17c;
        case 0x13d180u: goto label_13d180;
        case 0x13d184u: goto label_13d184;
        case 0x13d188u: goto label_13d188;
        case 0x13d18cu: goto label_13d18c;
        case 0x13d190u: goto label_13d190;
        case 0x13d194u: goto label_13d194;
        case 0x13d198u: goto label_13d198;
        case 0x13d19cu: goto label_13d19c;
        case 0x13d1a0u: goto label_13d1a0;
        case 0x13d1a4u: goto label_13d1a4;
        case 0x13d1a8u: goto label_13d1a8;
        case 0x13d1acu: goto label_13d1ac;
        case 0x13d1b0u: goto label_13d1b0;
        case 0x13d1b4u: goto label_13d1b4;
        case 0x13d1b8u: goto label_13d1b8;
        case 0x13d1bcu: goto label_13d1bc;
        case 0x13d1c0u: goto label_13d1c0;
        case 0x13d1c4u: goto label_13d1c4;
        case 0x13d1c8u: goto label_13d1c8;
        case 0x13d1ccu: goto label_13d1cc;
        case 0x13d1d0u: goto label_13d1d0;
        case 0x13d1d4u: goto label_13d1d4;
        case 0x13d1d8u: goto label_13d1d8;
        case 0x13d1dcu: goto label_13d1dc;
        case 0x13d1e0u: goto label_13d1e0;
        case 0x13d1e4u: goto label_13d1e4;
        case 0x13d1e8u: goto label_13d1e8;
        case 0x13d1ecu: goto label_13d1ec;
        case 0x13d1f0u: goto label_13d1f0;
        case 0x13d1f4u: goto label_13d1f4;
        case 0x13d1f8u: goto label_13d1f8;
        case 0x13d1fcu: goto label_13d1fc;
        case 0x13d200u: goto label_13d200;
        case 0x13d204u: goto label_13d204;
        case 0x13d208u: goto label_13d208;
        case 0x13d20cu: goto label_13d20c;
        case 0x13d210u: goto label_13d210;
        case 0x13d214u: goto label_13d214;
        case 0x13d218u: goto label_13d218;
        case 0x13d21cu: goto label_13d21c;
        case 0x13d220u: goto label_13d220;
        case 0x13d224u: goto label_13d224;
        case 0x13d228u: goto label_13d228;
        case 0x13d22cu: goto label_13d22c;
        case 0x13d230u: goto label_13d230;
        case 0x13d234u: goto label_13d234;
        case 0x13d238u: goto label_13d238;
        case 0x13d23cu: goto label_13d23c;
        case 0x13d240u: goto label_13d240;
        case 0x13d244u: goto label_13d244;
        default: break;
    }

    ctx->pc = 0x13d160u;

label_13d160:
    // 0x13d160: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x13d160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_13d164:
    // 0x13d164: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x13d164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_13d168:
    // 0x13d168: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13d168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_13d16c:
    // 0x13d16c: 0x24420ee0  addiu       $v0, $v0, 0xEE0
    ctx->pc = 0x13d16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3808));
label_13d170:
    // 0x13d170: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13d170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13d174:
    // 0x13d174: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x13d174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_13d178:
    // 0x13d178: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13d178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13d17c:
    // 0x13d17c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13d17cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13d180:
    // 0x13d180: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x13d180u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_13d184:
    // 0x13d184: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13d184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13d188:
    // 0x13d188: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x13d188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_13d18c:
    // 0x13d18c: 0xc04c554  jal         func_131550
label_13d190:
    if (ctx->pc == 0x13D190u) {
        ctx->pc = 0x13D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D18Cu;
        // 0x13d190: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D194u;
        goto label_13d194;
    }
    ctx->pc = 0x13D18Cu;
    SET_GPR_U32(ctx, 31, 0x13D194u);
    ctx->pc = 0x13D190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D18Cu;
    // 0x13d190: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131550u, 0x13D18Cu, 0x13D194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D194u;
label_13d194:
    // 0x13d194: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x13d194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13d198:
    // 0x13d198: 0xc04c54c  jal         func_131530
label_13d19c:
    if (ctx->pc == 0x13D19Cu) {
        ctx->pc = 0x13D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D198u;
        // 0x13d19c: 0x27a4006c  addiu       $a0, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D1A0u;
        goto label_13d1a0;
    }
    ctx->pc = 0x13D198u;
    SET_GPR_U32(ctx, 31, 0x13D1A0u);
    ctx->pc = 0x13D19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D198u;
    // 0x13d19c: 0x27a4006c  addiu       $a0, $sp, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131530u, 0x13D198u, 0x13D1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D1A0u;
label_13d1a0:
    // 0x13d1a0: 0x8fa5006c  lw          $a1, 0x6C($sp)
    ctx->pc = 0x13d1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_13d1a4:
    // 0x13d1a4: 0x27a30068  addiu       $v1, $sp, 0x68
    ctx->pc = 0x13d1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_13d1a8:
    // 0x13d1a8: 0x27a20064  addiu       $v0, $sp, 0x64
    ctx->pc = 0x13d1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_13d1ac:
    // 0x13d1ac: 0xafa50068  sw          $a1, 0x68($sp)
    ctx->pc = 0x13d1acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
label_13d1b0:
    // 0x13d1b0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x13d1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13d1b4:
    // 0x13d1b4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x13d1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_13d1b8:
    // 0x13d1b8: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x13d1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_13d1bc:
    // 0x13d1bc: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x13d1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_13d1c0:
    // 0x13d1c0: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x13d1c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_13d1c4:
    // 0x13d1c4: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x13d1c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_13d1c8:
    // 0x13d1c8: 0x320f809  jalr        $t9
label_13d1cc:
    if (ctx->pc == 0x13D1CCu) {
        ctx->pc = 0x13D1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D1C8u;
        // 0x13d1cc: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D1D0u;
        goto label_13d1d0;
    }
    ctx->pc = 0x13D1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13D1D0u);
        ctx->pc = 0x13D1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D1C8u;
        // 0x13d1cc: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D1C8u, 0x13D1D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13D1D0u;
label_13d1d0:
    // 0x13d1d0: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x13d1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_13d1d4:
    // 0x13d1d4: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x13d1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_13d1d8:
    // 0x13d1d8: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x13d1d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_13d1dc:
    // 0x13d1dc: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x13d1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_13d1e0:
    // 0x13d1e0: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x13d1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13d1e4:
    // 0x13d1e4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x13d1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13d1e8:
    // 0x13d1e8: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x13d1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13d1ec:
    // 0x13d1ec: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x13d1ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_13d1f0:
    // 0x13d1f0: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x13d1f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_13d1f4:
    // 0x13d1f4: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x13d1f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_13d1f8:
    // 0x13d1f8: 0xc050c3c  jal         func_1430F0
label_13d1fc:
    if (ctx->pc == 0x13D1FCu) {
        ctx->pc = 0x13D1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D1F8u;
        // 0x13d1fc: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D200u;
        goto label_13d200;
    }
    ctx->pc = 0x13D1F8u;
    SET_GPR_U32(ctx, 31, 0x13D200u);
    ctx->pc = 0x13D1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D1F8u;
    // 0x13d1fc: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1430F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1430F0u, 0x13D1F8u, 0x13D200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D200u;
label_13d200:
    // 0x13d200: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x13d200u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_13d204:
    // 0x13d204: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x13d204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_13d208:
    // 0x13d208: 0x9d2021  addu        $a0, $a0, $sp
    ctx->pc = 0x13d208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_13d20c:
    // 0x13d20c: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x13d20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_13d210:
    // 0x13d210: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x13d210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_13d214:
    // 0x13d214: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x13d214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_13d218:
    // 0x13d218: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x13d218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13d21c:
    // 0x13d21c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x13d21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13d220:
    // 0x13d220: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x13d220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13d224:
    // 0x13d224: 0xe6230000  swc1        $f3, 0x0($s1)
    ctx->pc = 0x13d224u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_13d228:
    // 0x13d228: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x13d228u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_13d22c:
    // 0x13d22c: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x13d22cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_13d230:
    // 0x13d230: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x13d230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_13d234:
    // 0x13d234: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13d234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13d238:
    // 0x13d238: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13d238u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13d23c:
    // 0x13d23c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d23cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13d240:
    // 0x13d240: 0x3e00008  jr          $ra
label_13d244:
    if (ctx->pc == 0x13D244u) {
        ctx->pc = 0x13D244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D240u;
        // 0x13d244: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13D248u;
        goto label_fallthrough_0x13d240;
    }
    ctx->pc = 0x13D240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D240u;
        // 0x13d244: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13d240:
    ctx->pc = 0x13D248u;
}
