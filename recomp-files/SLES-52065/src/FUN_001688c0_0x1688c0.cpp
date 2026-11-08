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

// Function: FUN_001688c0
// Address: 0x1688c0 - 0x168958
void FUN_001688c0_0x1688c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001688c0_0x1688c0");
#endif

    switch (ctx->pc) {
        case 0x1688c0u: goto label_1688c0;
        case 0x1688c4u: goto label_1688c4;
        case 0x1688c8u: goto label_1688c8;
        case 0x1688ccu: goto label_1688cc;
        case 0x1688d0u: goto label_1688d0;
        case 0x1688d4u: goto label_1688d4;
        case 0x1688d8u: goto label_1688d8;
        case 0x1688dcu: goto label_1688dc;
        case 0x1688e0u: goto label_1688e0;
        case 0x1688e4u: goto label_1688e4;
        case 0x1688e8u: goto label_1688e8;
        case 0x1688ecu: goto label_1688ec;
        case 0x1688f0u: goto label_1688f0;
        case 0x1688f4u: goto label_1688f4;
        case 0x1688f8u: goto label_1688f8;
        case 0x1688fcu: goto label_1688fc;
        case 0x168900u: goto label_168900;
        case 0x168904u: goto label_168904;
        case 0x168908u: goto label_168908;
        case 0x16890cu: goto label_16890c;
        case 0x168910u: goto label_168910;
        case 0x168914u: goto label_168914;
        case 0x168918u: goto label_168918;
        case 0x16891cu: goto label_16891c;
        case 0x168920u: goto label_168920;
        case 0x168924u: goto label_168924;
        case 0x168928u: goto label_168928;
        case 0x16892cu: goto label_16892c;
        case 0x168930u: goto label_168930;
        case 0x168934u: goto label_168934;
        case 0x168938u: goto label_168938;
        case 0x16893cu: goto label_16893c;
        case 0x168940u: goto label_168940;
        case 0x168944u: goto label_168944;
        case 0x168948u: goto label_168948;
        case 0x16894cu: goto label_16894c;
        case 0x168950u: goto label_168950;
        case 0x168954u: goto label_168954;
        default: break;
    }

    ctx->pc = 0x1688c0u;

label_1688c0:
    // 0x1688c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1688c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1688c4:
    // 0x1688c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1688c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1688c8:
    // 0x1688c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1688c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1688cc:
    // 0x1688cc: 0x8c830220  lw          $v1, 0x220($a0)
    ctx->pc = 0x1688ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
label_1688d0:
    // 0x1688d0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1688d4:
    if (ctx->pc == 0x1688D4u) {
        ctx->pc = 0x1688D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1688D0u;
        // 0x1688d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1688D8u;
        goto label_1688d8;
    }
    ctx->pc = 0x1688D0u;
    {
        const bool branch_taken_0x1688d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1688D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1688D0u;
        // 0x1688d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1688d0) {
            ctx->pc = 0x1688F8u;
            goto label_1688f8;
        }
    }
    ctx->pc = 0x1688D8u;
label_1688d8:
    // 0x1688d8: 0x846501e8  lh          $a1, 0x1E8($v1)
    ctx->pc = 0x1688d8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_1688dc:
    // 0x1688dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1688dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1688e0:
    // 0x1688e0: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
label_1688e4:
    if (ctx->pc == 0x1688E4u) {
        ctx->pc = 0x1688E8u;
        goto label_1688e8;
    }
    ctx->pc = 0x1688E0u;
    {
        const bool branch_taken_0x1688e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1688e0) {
            ctx->pc = 0x1688F8u;
            goto label_1688f8;
        }
    }
    ctx->pc = 0x1688E8u;
label_1688e8:
    // 0x1688e8: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x1688e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1688ec:
    // 0x1688ec: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x1688ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_1688f0:
    // 0x1688f0: 0x320f809  jalr        $t9
label_1688f4:
    if (ctx->pc == 0x1688F4u) {
        ctx->pc = 0x1688F8u;
        goto label_1688f8;
    }
    ctx->pc = 0x1688F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1688F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1688F0u, 0x1688F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1688F8u;
label_1688f8:
    // 0x1688f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1688f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1688fc:
    // 0x1688fc: 0xa2030079  sb          $v1, 0x79($s0)
    ctx->pc = 0x1688fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 121), (uint8_t)GPR_U32(ctx, 3));
label_168900:
    // 0x168900: 0x8e0301d4  lw          $v1, 0x1D4($s0)
    ctx->pc = 0x168900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_168904:
    // 0x168904: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_168908:
    if (ctx->pc == 0x168908u) {
        ctx->pc = 0x16890Cu;
        goto label_16890c;
    }
    ctx->pc = 0x168904u;
    {
        const bool branch_taken_0x168904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x168904) {
            ctx->pc = 0x168948u;
            goto label_168948;
        }
    }
    ctx->pc = 0x16890Cu;
label_16890c:
    // 0x16890c: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x16890cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_168910:
    // 0x168910: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x168910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_168914:
    // 0x168914: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x168914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_168918:
    // 0x168918: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x168918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_16891c:
    // 0x16891c: 0xc6030024  lwc1        $f3, 0x24($s0)
    ctx->pc = 0x16891cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_168920:
    // 0x168920: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x168920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_168924:
    // 0x168924: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x168924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168928:
    // 0x168928: 0x0  nop
    ctx->pc = 0x168928u;
    // NOP
label_16892c:
    // 0x16892c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x16892cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_168930:
    // 0x168930: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x168930u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_168934:
    // 0x168934: 0x0  nop
    ctx->pc = 0x168934u;
    // NOP
label_168938:
    // 0x168938: 0x0  nop
    ctx->pc = 0x168938u;
    // NOP
label_16893c:
    // 0x16893c: 0xc0548a8  jal         func_1522A0
label_168940:
    if (ctx->pc == 0x168940u) {
        ctx->pc = 0x168940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16893Cu;
        // 0x168940: 0x46001b00  add.s       $f12, $f3, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x168944u;
        goto label_168944;
    }
    ctx->pc = 0x16893Cu;
    SET_GPR_U32(ctx, 31, 0x168944u);
    ctx->pc = 0x168940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16893Cu;
    // 0x168940: 0x46001b00  add.s       $f12, $f3, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1522A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522A0u, 0x16893Cu, 0x168944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168944u;
label_168944:
    // 0x168944: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x168944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_168948:
    // 0x168948: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x168948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16894c:
    // 0x16894c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16894cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_168950:
    // 0x168950: 0x3e00008  jr          $ra
label_168954:
    if (ctx->pc == 0x168954u) {
        ctx->pc = 0x168954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168950u;
        // 0x168954: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168958u;
        goto label_fallthrough_0x168950;
    }
    ctx->pc = 0x168950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168950u;
        // 0x168954: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x168950:
    ctx->pc = 0x168958u;
}
