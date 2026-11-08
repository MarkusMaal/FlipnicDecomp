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

// Function: entry_00176108
// Address: 0x176108 - 0x176260
void entry_00176108_0x176108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176108_0x176108");
#endif

    switch (ctx->pc) {
        case 0x1761e8u: goto label_1761e8;
        case 0x17621cu: goto label_17621c;
        default: break;
    }

    ctx->pc = 0x176108u;

label_176108:
    // 0x176108: 0x2642821  addu        $a1, $s3, $a0
    ctx->pc = 0x176108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x17610c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x17610cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x176110: 0xaca00040  sw          $zero, 0x40($a1)
    ctx->pc = 0x176110u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
    // 0x176114: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x176114u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x176118: 0xaca00044  sw          $zero, 0x44($a1)
    ctx->pc = 0x176118u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 0));
    // 0x17611c: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x17611cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x176120: 0xaca00048  sw          $zero, 0x48($a1)
    ctx->pc = 0x176120u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 0));
    // 0x176124: 0xa0a0004c  sb          $zero, 0x4C($a1)
    ctx->pc = 0x176124u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x176128: 0xaca00070  sw          $zero, 0x70($a1)
    ctx->pc = 0x176128u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 0));
    // 0x17612c: 0xaca00074  sw          $zero, 0x74($a1)
    ctx->pc = 0x17612cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 116), GPR_U32(ctx, 0));
    // 0x176130: 0xaca00078  sw          $zero, 0x78($a1)
    ctx->pc = 0x176130u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 120), GPR_U32(ctx, 0));
    // 0x176134: 0xa0a0007c  sb          $zero, 0x7C($a1)
    ctx->pc = 0x176134u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 124), (uint8_t)GPR_U32(ctx, 0));
    // 0x176138: 0xaca000a0  sw          $zero, 0xA0($a1)
    ctx->pc = 0x176138u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 160), GPR_U32(ctx, 0));
    // 0x17613c: 0xaca000a4  sw          $zero, 0xA4($a1)
    ctx->pc = 0x17613cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 164), GPR_U32(ctx, 0));
    // 0x176140: 0xaca000a8  sw          $zero, 0xA8($a1)
    ctx->pc = 0x176140u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 168), GPR_U32(ctx, 0));
    // 0x176144: 0xa0a000ac  sb          $zero, 0xAC($a1)
    ctx->pc = 0x176144u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 172), (uint8_t)GPR_U32(ctx, 0));
    // 0x176148: 0xaca000d0  sw          $zero, 0xD0($a1)
    ctx->pc = 0x176148u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 208), GPR_U32(ctx, 0));
    // 0x17614c: 0xaca000d4  sw          $zero, 0xD4($a1)
    ctx->pc = 0x17614cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 212), GPR_U32(ctx, 0));
    // 0x176150: 0xaca000d8  sw          $zero, 0xD8($a1)
    ctx->pc = 0x176150u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 216), GPR_U32(ctx, 0));
    // 0x176154: 0xa0a000dc  sb          $zero, 0xDC($a1)
    ctx->pc = 0x176154u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 220), (uint8_t)GPR_U32(ctx, 0));
    // 0x176158: 0xaca00100  sw          $zero, 0x100($a1)
    ctx->pc = 0x176158u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 256), GPR_U32(ctx, 0));
    // 0x17615c: 0xaca00104  sw          $zero, 0x104($a1)
    ctx->pc = 0x17615cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 260), GPR_U32(ctx, 0));
    // 0x176160: 0xaca00108  sw          $zero, 0x108($a1)
    ctx->pc = 0x176160u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 264), GPR_U32(ctx, 0));
    // 0x176164: 0xa0a0010c  sb          $zero, 0x10C($a1)
    ctx->pc = 0x176164u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 268), (uint8_t)GPR_U32(ctx, 0));
    // 0x176168: 0xaca00130  sw          $zero, 0x130($a1)
    ctx->pc = 0x176168u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 304), GPR_U32(ctx, 0));
    // 0x17616c: 0xaca00134  sw          $zero, 0x134($a1)
    ctx->pc = 0x17616cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 308), GPR_U32(ctx, 0));
    // 0x176170: 0xaca00138  sw          $zero, 0x138($a1)
    ctx->pc = 0x176170u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 312), GPR_U32(ctx, 0));
    // 0x176174: 0xa0a0013c  sb          $zero, 0x13C($a1)
    ctx->pc = 0x176174u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x176178: 0xaca00160  sw          $zero, 0x160($a1)
    ctx->pc = 0x176178u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 352), GPR_U32(ctx, 0));
    // 0x17617c: 0xaca00164  sw          $zero, 0x164($a1)
    ctx->pc = 0x17617cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 356), GPR_U32(ctx, 0));
    // 0x176180: 0xaca00168  sw          $zero, 0x168($a1)
    ctx->pc = 0x176180u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 360), GPR_U32(ctx, 0));
    // 0x176184: 0xa0a0016c  sb          $zero, 0x16C($a1)
    ctx->pc = 0x176184u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 364), (uint8_t)GPR_U32(ctx, 0));
    // 0x176188: 0xaca00190  sw          $zero, 0x190($a1)
    ctx->pc = 0x176188u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 400), GPR_U32(ctx, 0));
    // 0x17618c: 0xaca00194  sw          $zero, 0x194($a1)
    ctx->pc = 0x17618cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 404), GPR_U32(ctx, 0));
    // 0x176190: 0xaca00198  sw          $zero, 0x198($a1)
    ctx->pc = 0x176190u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 408), GPR_U32(ctx, 0));
    // 0x176194: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x176194u;
    {
        const bool branch_taken_0x176194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176194u;
        // 0x176198: 0xa0a0019c  sb          $zero, 0x19C($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 412), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176194) {
            ctx->pc = 0x176108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176108;
        }
    }
    ctx->pc = 0x17619Cu;
    // 0x17619c: 0xae600c20  sw          $zero, 0xC20($s3)
    ctx->pc = 0x17619cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3104), GPR_U32(ctx, 0));
    // 0x1761a0: 0x27b00058  addiu       $s0, $sp, 0x58
    ctx->pc = 0x1761a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1761a4: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x1761a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x1761a8: 0x27b10054  addiu       $s1, $sp, 0x54
    ctx->pc = 0x1761a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x1761ac: 0xa2600c24  sb          $zero, 0xC24($s3)
    ctx->pc = 0x1761acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 3108), (uint8_t)GPR_U32(ctx, 0));
    // 0x1761b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1761b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1761b4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1761b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1761b8: 0x27b2005c  addiu       $s2, $sp, 0x5C
    ctx->pc = 0x1761b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1761bc: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1761bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1761c0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1761c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1761c4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1761c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1761c8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1761c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1761cc: 0x8e630c20  lw          $v1, 0xC20($s3)
    ctx->pc = 0x1761ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3104)));
    // 0x1761d0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1761d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1761d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1761d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1761d8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1761d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1761dc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1761dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1761e0: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x1761E0u;
    SET_GPR_U32(ctx, 31, 0x1761E8u);
    ctx->pc = 0x1761E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1761E0u;
    // 0x1761e4: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1761E0u, 0x1761E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1761E8u;
label_1761e8:
    // 0x1761e8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1761e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1761ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1761ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1761f0: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x1761f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x1761f4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1761f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1761f8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1761f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1761fc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1761fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x176200: 0x8e630c20  lw          $v1, 0xC20($s3)
    ctx->pc = 0x176200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3104)));
    // 0x176204: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x176204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x176208: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17620c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17620cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176210: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x176210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x176214: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x176214u;
    SET_GPR_U32(ctx, 31, 0x17621Cu);
    ctx->pc = 0x176218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176214u;
    // 0x176218: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x176214u, 0x17621Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17621Cu;
label_17621c:
    // 0x17621c: 0x8e640c20  lw          $a0, 0xC20($s3)
    ctx->pc = 0x17621cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3104)));
    // 0x176220: 0x3c054120  lui         $a1, 0x4120
    ctx->pc = 0x176220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16672 << 16));
    // 0x176224: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x176224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x176228: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x176228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17622c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17622cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x176230: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x176230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x176234: 0xac650040  sw          $a1, 0x40($v1)
    ctx->pc = 0x176234u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 5));
    // 0x176238: 0x8e630c20  lw          $v1, 0xC20($s3)
    ctx->pc = 0x176238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3104)));
    // 0x17623c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17623cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x176240: 0xae630c20  sw          $v1, 0xC20($s3)
    ctx->pc = 0x176240u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3104), GPR_U32(ctx, 3));
    // 0x176244: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x176244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x176248: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x176248u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17624c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17624cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176250: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x176250u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176254: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x176254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176258: 0x3e00008  jr          $ra
    ctx->pc = 0x176258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176258u;
        // 0x17625c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176260u;
}
