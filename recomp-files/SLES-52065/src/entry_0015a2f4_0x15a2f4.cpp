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

// Function: entry_0015a2f4
// Address: 0x15a2f4 - 0x15a350
void entry_0015a2f4_0x15a2f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a2f4_0x15a2f4");
#endif

    switch (ctx->pc) {
        case 0x15a334u: goto label_15a334;
        case 0x15a348u: goto label_15a348;
        default: break;
    }

    ctx->pc = 0x15a2f4u;

    // 0x15a2f4: 0x862301f4  lh          $v1, 0x1F4($s1)
    ctx->pc = 0x15a2f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 500)));
    // 0x15a2f8: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x15a2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x15a2fc: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x15a2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x15a300: 0x8e2401f0  lw          $a0, 0x1F0($s1)
    ctx->pc = 0x15a300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x15a304: 0xc60c01c0  lwc1        $f12, 0x1C0($s0)
    ctx->pc = 0x15a304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15a308: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x15a308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15a30c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x15a30cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15a310: 0x26080300  addiu       $t0, $s0, 0x300
    ctx->pc = 0x15a310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x15a314: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x15a314u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a318: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x15a318u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x15a31c: 0x0  nop
    ctx->pc = 0x15a31cu;
    // NOP
    // 0x15a320: 0x0  nop
    ctx->pc = 0x15a320u;
    // NOP
    // 0x15a324: 0x1010  mfhi        $v0
    ctx->pc = 0x15a324u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x15a328: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x15a328u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x15a32c: 0xc054a44  jal         func_152910
    ctx->pc = 0x15A32Cu;
    SET_GPR_U32(ctx, 31, 0x15A334u);
    ctx->pc = 0x15A330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A32Cu;
    // 0x15a330: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152910u, 0x15A32Cu, 0x15A334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A334u;
label_15a334:
    // 0x15a334: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15A334u;
    {
        const bool branch_taken_0x15a334 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x15A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A334u;
        // 0x15a338: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a334) {
            ctx->pc = 0x15A350u;
            return;
        }
    }
    ctx->pc = 0x15A33Cu;
    // 0x15a33c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15a33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a340: 0xc042118  jal         func_108460
    ctx->pc = 0x15A340u;
    SET_GPR_U32(ctx, 31, 0x15A348u);
    ctx->pc = 0x15A344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A340u;
    // 0x15a344: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x15A340u, 0x15A348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A348u;
label_15a348:
    // 0x15a348: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15a348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a34c: 0xae230210  sw          $v1, 0x210($s1)
    ctx->pc = 0x15a34cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 3));
    ctx->pc = 0x15a350u;
}
