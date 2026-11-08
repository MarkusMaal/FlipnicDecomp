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

// Function: entry_00172ca8
// Address: 0x172ca8 - 0x172d38
void entry_00172ca8_0x172ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172ca8_0x172ca8");
#endif

    switch (ctx->pc) {
        case 0x172cb0u: goto label_172cb0;
        case 0x172cc4u: goto label_172cc4;
        case 0x172d14u: goto label_172d14;
        case 0x172d1cu: goto label_172d1c;
        default: break;
    }

    ctx->pc = 0x172ca8u;

label_172ca8:
    // 0x172ca8: 0xc05c9f4  jal         func_1727D0
label_172cac:
    if (ctx->pc == 0x172CACu) {
        ctx->pc = 0x172CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172CA8u;
        // 0x172cac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172CB0u;
        goto label_172cb0;
    }
    ctx->pc = 0x172CA8u;
    SET_GPR_U32(ctx, 31, 0x172CB0u);
    ctx->pc = 0x172CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172CA8u;
    // 0x172cac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1727D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1727D0u, 0x172CA8u, 0x172CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172CB0u;
label_172cb0:
    // 0x172cb0: 0x8e244020  lw          $a0, 0x4020($s1)
    ctx->pc = 0x172cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16416)));
label_172cb4:
    // 0x172cb4: 0x8c990010  lw          $t9, 0x10($a0)
    ctx->pc = 0x172cb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_172cb8:
    // 0x172cb8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x172cb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_172cbc:
    // 0x172cbc: 0x320f809  jalr        $t9
label_172cc0:
    if (ctx->pc == 0x172CC0u) {
        ctx->pc = 0x172CC4u;
        goto label_172cc4;
    }
    ctx->pc = 0x172CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172CC4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172CBCu, 0x172CC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172CC4u;
label_172cc4:
    // 0x172cc4: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x172cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172cc8:
    // 0x172cc8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x172cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_172ccc:
    // 0x172ccc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x172cccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_172cd0:
    // 0x172cd0: 0x0  nop
    ctx->pc = 0x172cd0u;
    // NOP
label_172cd4:
    // 0x172cd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x172cd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_172cd8:
    // 0x172cd8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x172cd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_172cdc:
    // 0x172cdc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172cdcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_172ce0:
    // 0x172ce0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x172ce0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_172ce4:
    // 0x172ce4: 0x0  nop
    ctx->pc = 0x172ce4u;
    // NOP
label_172ce8:
    // 0x172ce8: 0xae226008  sw          $v0, 0x6008($s1)
    ctx->pc = 0x172ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24584), GPR_U32(ctx, 2));
label_172cec:
    // 0x172cec: 0xc6206008  lwc1        $f0, 0x6008($s1)
    ctx->pc = 0x172cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_172cf0:
    // 0x172cf0: 0x8e244020  lw          $a0, 0x4020($s1)
    ctx->pc = 0x172cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16416)));
label_172cf4:
    // 0x172cf4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x172cf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_172cf8:
    // 0x172cf8: 0x8c990010  lw          $t9, 0x10($a0)
    ctx->pc = 0x172cf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_172cfc:
    // 0x172cfc: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x172cfcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_172d00:
    // 0x172d00: 0x0  nop
    ctx->pc = 0x172d00u;
    // NOP
label_172d04:
    // 0x172d04: 0x0  nop
    ctx->pc = 0x172d04u;
    // NOP
label_172d08:
    // 0x172d08: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x172d08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_172d0c:
    // 0x172d0c: 0x320f809  jalr        $t9
label_172d10:
    if (ctx->pc == 0x172D10u) {
        ctx->pc = 0x172D14u;
        goto label_172d14;
    }
    ctx->pc = 0x172D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x172D14u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172D0Cu, 0x172D14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x172D14u;
label_172d14:
    // 0x172d14: 0xc05cc98  jal         func_173260
label_172d18:
    if (ctx->pc == 0x172D18u) {
        ctx->pc = 0x172D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D14u;
        // 0x172d18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172D1Cu;
        goto label_172d1c;
    }
    ctx->pc = 0x172D14u;
    SET_GPR_U32(ctx, 31, 0x172D1Cu);
    ctx->pc = 0x172D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172D14u;
    // 0x172d18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173260u, 0x172D14u, 0x172D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172D1Cu;
label_172d1c:
    // 0x172d1c: 0x8e226008  lw          $v0, 0x6008($s1)
    ctx->pc = 0x172d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24584)));
label_172d20:
    // 0x172d20: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x172d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_172d24:
    // 0x172d24: 0xae226008  sw          $v0, 0x6008($s1)
    ctx->pc = 0x172d24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24584), GPR_U32(ctx, 2));
label_172d28:
    // 0x172d28: 0x8e226014  lw          $v0, 0x6014($s1)
    ctx->pc = 0x172d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24596)));
label_172d2c:
    // 0x172d2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x172d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_172d30:
    // 0x172d30: 0x10000089  b           . + 4 + (0x89 << 2)
label_172d34:
    if (ctx->pc == 0x172D34u) {
        ctx->pc = 0x172D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D30u;
        // 0x172d34: 0xae226014  sw          $v0, 0x6014($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x172D38u;
        goto label_fallthrough_0x172d30;
    }
    ctx->pc = 0x172D30u;
    {
        const bool branch_taken_0x172d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172D30u;
        // 0x172d34: 0xae226014  sw          $v0, 0x6014($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172d30) {
            ctx->pc = 0x172F58u;
            return;
        }
    }
label_fallthrough_0x172d30:
    ctx->pc = 0x172D38u;
}
