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

// Function: entry_00136c10
// Address: 0x136c10 - 0x136c58
void entry_00136c10_0x136c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136c10_0x136c10");
#endif

    switch (ctx->pc) {
        case 0x136c28u: goto label_136c28;
        case 0x136c30u: goto label_136c30;
        case 0x136c4cu: goto label_136c4c;
        case 0x136c54u: goto label_136c54;
        default: break;
    }

    ctx->pc = 0x136c10u;

label_136c10:
    // 0x136c10: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x136c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_136c14:
    // 0x136c14: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x136c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_136c18:
    // 0x136c18: 0xc7808578  lwc1        $f0, -0x7A88($gp)
    ctx->pc = 0x136c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_136c1c:
    // 0x136c1c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x136c1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_136c20:
    // 0x136c20: 0xc061c5c  jal         func_187170
label_136c24:
    if (ctx->pc == 0x136C24u) {
        ctx->pc = 0x136C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C20u;
        // 0x136c24: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x136C28u;
        goto label_136c28;
    }
    ctx->pc = 0x136C20u;
    SET_GPR_U32(ctx, 31, 0x136C28u);
    ctx->pc = 0x136C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136C20u;
    // 0x136c24: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x187170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187170u, 0x136C20u, 0x136C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136C28u;
label_136c28:
    // 0x136c28: 0xc04c724  jal         func_131C90
label_136c2c:
    if (ctx->pc == 0x136C2Cu) {
        ctx->pc = 0x136C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C28u;
        // 0x136c2c: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136C30u;
        goto label_136c30;
    }
    ctx->pc = 0x136C28u;
    SET_GPR_U32(ctx, 31, 0x136C30u);
    ctx->pc = 0x136C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136C28u;
    // 0x136c2c: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131C90u, 0x136C28u, 0x136C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136C30u;
label_136c30:
    // 0x136c30: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x136c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_136c34:
    // 0x136c34: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x136c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
label_136c38:
    // 0x136c38: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x136c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_136c3c:
    // 0x136c3c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x136c3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_136c40:
    // 0x136c40: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x136c40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_136c44:
    // 0x136c44: 0x320f809  jalr        $t9
label_136c48:
    if (ctx->pc == 0x136C48u) {
        ctx->pc = 0x136C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C44u;
        // 0x136c48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136C4Cu;
        goto label_136c4c;
    }
    ctx->pc = 0x136C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x136C4Cu);
        ctx->pc = 0x136C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C44u;
        // 0x136c48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136C44u, 0x136C4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x136C4Cu;
label_136c4c:
    // 0x136c4c: 0xc04dba4  jal         func_136E90
label_136c50:
    if (ctx->pc == 0x136C50u) {
        ctx->pc = 0x136C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C4Cu;
        // 0x136c50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136C54u;
        goto label_136c54;
    }
    ctx->pc = 0x136C4Cu;
    SET_GPR_U32(ctx, 31, 0x136C54u);
    ctx->pc = 0x136C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136C4Cu;
    // 0x136c50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136E90u, 0x136C4Cu, 0x136C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136C54u;
label_136c54:
    // 0x136c54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x136c58u;
}
