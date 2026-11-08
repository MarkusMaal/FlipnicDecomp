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

// Function: entry_0016a528
// Address: 0x16a528 - 0x16a594
void entry_0016a528_0x16a528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a528_0x16a528");
#endif

    switch (ctx->pc) {
        case 0x16a568u: goto label_16a568;
        case 0x16a578u: goto label_16a578;
        default: break;
    }

    ctx->pc = 0x16a528u;

    // 0x16a528: 0x4c0003f  bltz        $a2, . + 4 + (0x3F << 2)
    ctx->pc = 0x16A528u;
    {
        const bool branch_taken_0x16a528 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x16A52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A528u;
        // 0x16a52c: 0x61840  sll         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a528) {
            ctx->pc = 0x16A628u;
            return;
        }
    }
    ctx->pc = 0x16A530u;
    // 0x16a530: 0x80a2006a  lb          $v0, 0x6A($a1)
    ctx->pc = 0x16a530u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 106)));
    // 0x16a534: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16a534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x16a538: 0x90640048  lbu         $a0, 0x48($v1)
    ctx->pc = 0x16a538u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x16a53c: 0x90630049  lbu         $v1, 0x49($v1)
    ctx->pc = 0x16a53cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 73)));
    // 0x16a540: 0x2484ff80  addiu       $a0, $a0, -0x80
    ctx->pc = 0x16a540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967168));
    // 0x16a544: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x16a544u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a548: 0x0  nop
    ctx->pc = 0x16a548u;
    // NOP
    // 0x16a54c: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x16a54cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x16a550: 0x2463ff80  addiu       $v1, $v1, -0x80
    ctx->pc = 0x16a550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x16a554: 0x31823  negu        $v1, $v1
    ctx->pc = 0x16a554u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x16a558: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x16a558u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16a55c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16a55cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a560: 0xc07ef40  jal         func_1FBD00
    ctx->pc = 0x16A560u;
    SET_GPR_U32(ctx, 31, 0x16A568u);
    ctx->pc = 0x16A564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A560u;
    // 0x16a564: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBD00u, 0x16A560u, 0x16A568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A568u;
label_16a568:
    // 0x16a568: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x16a568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a56c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16a56cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16a570: 0xc0548a8  jal         func_1522A0
    ctx->pc = 0x16A570u;
    SET_GPR_U32(ctx, 31, 0x16A578u);
    ctx->pc = 0x16A574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A570u;
    // 0x16a574: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1522A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1522A0u, 0x16A570u, 0x16A578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A578u;
label_16a578:
    // 0x16a578: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16a578u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16a57c: 0x0  nop
    ctx->pc = 0x16a57cu;
    // NOP
    // 0x16a580: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16a580u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a584: 0x0  nop
    ctx->pc = 0x16a584u;
    // NOP
    // 0x16a588: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16A588u;
    {
        const bool branch_taken_0x16a588 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A588u;
        // 0x16a58c: 0x3c033fc9  lui         $v1, 0x3FC9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a588) {
            ctx->pc = 0x16A594u;
            return;
        }
    }
    ctx->pc = 0x16A590u;
    // 0x16a590: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x16a590u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    ctx->pc = 0x16a594u;
}
