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

// Function: entry_001a01d8
// Address: 0x1a01d8 - 0x1a0248
void entry_001a01d8_0x1a01d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a01d8_0x1a01d8");
#endif

    switch (ctx->pc) {
        case 0x1a01f4u: goto label_1a01f4;
        case 0x1a0208u: goto label_1a0208;
        default: break;
    }

    ctx->pc = 0x1a01d8u;

label_1a01d8:
    // 0x1a01d8: 0x8cc30038  lw          $v1, 0x38($a2)
    ctx->pc = 0x1a01d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_1a01dc:
    // 0x1a01dc: 0x1860001a  blez        $v1, . + 4 + (0x1A << 2)
label_1a01e0:
    if (ctx->pc == 0x1A01E0u) {
        ctx->pc = 0x1A01E4u;
        goto label_1a01e4;
    }
    ctx->pc = 0x1A01DCu;
    {
        const bool branch_taken_0x1a01dc = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1a01dc) {
            ctx->pc = 0x1A0248u;
            return;
        }
    }
    ctx->pc = 0x1A01E4u;
label_1a01e4:
    // 0x1a01e4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1a01e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a01e8:
    // 0x1a01e8: 0x8f390098  lw          $t9, 0x98($t9)
    ctx->pc = 0x1a01e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 152)));
label_1a01ec:
    // 0x1a01ec: 0x320f809  jalr        $t9
label_1a01f0:
    if (ctx->pc == 0x1A01F0u) {
        ctx->pc = 0x1A01F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A01ECu;
        // 0x1a01f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A01F4u;
        goto label_1a01f4;
    }
    ctx->pc = 0x1A01ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A01F4u);
        ctx->pc = 0x1A01F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A01ECu;
        // 0x1a01f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A01ECu, 0x1A01F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A01F4u;
label_1a01f4:
    // 0x1a01f4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1a01f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a01f8:
    // 0x1a01f8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1a01f8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1a01fc:
    // 0x1a01fc: 0x8f39009c  lw          $t9, 0x9C($t9)
    ctx->pc = 0x1a01fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 156)));
label_1a0200:
    // 0x1a0200: 0x320f809  jalr        $t9
label_1a0204:
    if (ctx->pc == 0x1A0204u) {
        ctx->pc = 0x1A0204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0200u;
        // 0x1a0204: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A0208u;
        goto label_1a0208;
    }
    ctx->pc = 0x1A0200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A0208u);
        ctx->pc = 0x1A0204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0200u;
        // 0x1a0204: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0200u, 0x1A0208u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A0208u;
label_1a0208:
    // 0x1a0208: 0x0  nop
    ctx->pc = 0x1a0208u;
    // NOP
label_1a020c:
    // 0x1a020c: 0x0  nop
    ctx->pc = 0x1a020cu;
    // NOP
label_1a0210:
    // 0x1a0210: 0x4600a043  div.s       $f1, $f20, $f0
    ctx->pc = 0x1a0210u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_1a0214:
    // 0x1a0214: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x1a0214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
label_1a0218:
    // 0x1a0218: 0x8e430664  lw          $v1, 0x664($s2)
    ctx->pc = 0x1a0218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1636)));
label_1a021c:
    // 0x1a021c: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x1a021cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1a0220:
    // 0x1a0220: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1a0220u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a0224:
    // 0x1a0224: 0x0  nop
    ctx->pc = 0x1a0224u;
    // NOP
label_1a0228:
    // 0x1a0228: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a0228u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1a022c:
    // 0x1a022c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a022cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1a0230:
    // 0x1a0230: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1a0230u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1a0234:
    // 0x1a0234: 0x0  nop
    ctx->pc = 0x1a0234u;
    // NOP
label_1a0238:
    // 0x1a0238: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1a0238u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a023c:
    // 0x1a023c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1a0240:
    if (ctx->pc == 0x1A0240u) {
        ctx->pc = 0x1A0244u;
        goto label_1a0244;
    }
    ctx->pc = 0x1A023Cu;
    {
        const bool branch_taken_0x1a023c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a023c) {
            ctx->pc = 0x1A0248u;
            return;
        }
    }
    ctx->pc = 0x1A0244u;
label_1a0244:
    // 0x1a0244: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a0244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a0248u;
}
