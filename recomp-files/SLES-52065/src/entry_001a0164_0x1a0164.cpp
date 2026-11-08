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

// Function: entry_001a0164
// Address: 0x1a0164 - 0x1a01d8
void entry_001a0164_0x1a0164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0164_0x1a0164");
#endif

    switch (ctx->pc) {
        case 0x1a0180u: goto label_1a0180;
        case 0x1a0194u: goto label_1a0194;
        default: break;
    }

    ctx->pc = 0x1a0164u;

label_1a0164:
    // 0x1a0164: 0x8cc30034  lw          $v1, 0x34($a2)
    ctx->pc = 0x1a0164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1a0168:
    // 0x1a0168: 0x18600037  blez        $v1, . + 4 + (0x37 << 2)
label_1a016c:
    if (ctx->pc == 0x1A016Cu) {
        ctx->pc = 0x1A0170u;
        goto label_1a0170;
    }
    ctx->pc = 0x1A0168u;
    {
        const bool branch_taken_0x1a0168 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1a0168) {
            ctx->pc = 0x1A0248u;
            return;
        }
    }
    ctx->pc = 0x1A0170u;
label_1a0170:
    // 0x1a0170: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1a0170u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a0174:
    // 0x1a0174: 0x8f390098  lw          $t9, 0x98($t9)
    ctx->pc = 0x1a0174u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 152)));
label_1a0178:
    // 0x1a0178: 0x320f809  jalr        $t9
label_1a017c:
    if (ctx->pc == 0x1A017Cu) {
        ctx->pc = 0x1A017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0178u;
        // 0x1a017c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0180u;
        goto label_1a0180;
    }
    ctx->pc = 0x1A0178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A0180u);
        ctx->pc = 0x1A017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0178u;
        // 0x1a017c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0178u, 0x1A0180u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A0180u;
label_1a0180:
    // 0x1a0180: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1a0180u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a0184:
    // 0x1a0184: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1a0184u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1a0188:
    // 0x1a0188: 0x8f39009c  lw          $t9, 0x9C($t9)
    ctx->pc = 0x1a0188u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 156)));
label_1a018c:
    // 0x1a018c: 0x320f809  jalr        $t9
label_1a0190:
    if (ctx->pc == 0x1A0190u) {
        ctx->pc = 0x1A0190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A018Cu;
        // 0x1a0190: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0194u;
        goto label_1a0194;
    }
    ctx->pc = 0x1A018Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A0194u);
        ctx->pc = 0x1A0190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A018Cu;
        // 0x1a0190: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A018Cu, 0x1A0194u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A0194u;
label_1a0194:
    // 0x1a0194: 0x0  nop
    ctx->pc = 0x1a0194u;
    // NOP
label_1a0198:
    // 0x1a0198: 0x0  nop
    ctx->pc = 0x1a0198u;
    // NOP
label_1a019c:
    // 0x1a019c: 0x4600a043  div.s       $f1, $f20, $f0
    ctx->pc = 0x1a019cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_1a01a0:
    // 0x1a01a0: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x1a01a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
label_1a01a4:
    // 0x1a01a4: 0x8e430664  lw          $v1, 0x664($s2)
    ctx->pc = 0x1a01a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
label_1a01a8:
    // 0x1a01a8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x1a01a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1a01ac:
    // 0x1a01ac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1a01acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a01b0:
    // 0x1a01b0: 0x0  nop
    ctx->pc = 0x1a01b0u;
    // NOP
label_1a01b4:
    // 0x1a01b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a01b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1a01b8:
    // 0x1a01b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a01b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a01bc:
    // 0x1a01bc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1a01bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1a01c0:
    // 0x1a01c0: 0x0  nop
    ctx->pc = 0x1a01c0u;
    // NOP
label_1a01c4:
    // 0x1a01c4: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1a01c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a01c8:
    // 0x1a01c8: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
label_1a01cc:
    if (ctx->pc == 0x1A01CCu) {
        ctx->pc = 0x1A01D0u;
        goto label_1a01d0;
    }
    ctx->pc = 0x1A01C8u;
    {
        const bool branch_taken_0x1a01c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a01c8) {
            ctx->pc = 0x1A0248u;
            return;
        }
    }
    ctx->pc = 0x1A01D0u;
label_1a01d0:
    // 0x1a01d0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1a01d4:
    if (ctx->pc == 0x1A01D4u) {
        ctx->pc = 0x1A01D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A01D0u;
        // 0x1a01d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A01D8u;
        goto label_fallthrough_0x1a01d0;
    }
    ctx->pc = 0x1A01D0u;
    {
        const bool branch_taken_0x1a01d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A01D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A01D0u;
        // 0x1a01d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a01d0) {
            ctx->pc = 0x1A0248u;
            return;
        }
    }
label_fallthrough_0x1a01d0:
    ctx->pc = 0x1A01D8u;
}
