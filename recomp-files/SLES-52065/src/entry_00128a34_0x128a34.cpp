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

// Function: entry_00128a34
// Address: 0x128a34 - 0x128a68
void entry_00128a34_0x128a34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128a34_0x128a34");
#endif

    switch (ctx->pc) {
        case 0x128a60u: goto label_128a60;
        default: break;
    }

    ctx->pc = 0x128a34u;

    // 0x128a34: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x128a34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x128a38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x128a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128a3c: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x128a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x128a40: 0x7fa20220  sq          $v0, 0x220($sp)
    ctx->pc = 0x128a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 2));
    // 0x128a44: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x128a44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x128a48: 0x7fa20230  sq          $v0, 0x230($sp)
    ctx->pc = 0x128a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 2));
    // 0x128a4c: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x128a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128a50: 0xe7a00240  swc1        $f0, 0x240($sp)
    ctx->pc = 0x128a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
    // 0x128a54: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x128a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128a58: 0xc049948  jal         func_126520
    ctx->pc = 0x128A58u;
    SET_GPR_U32(ctx, 31, 0x128A60u);
    ctx->pc = 0x128A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128A58u;
    // 0x128a5c: 0xe7a00244  swc1        $f0, 0x244($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x126520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126520u, 0x128A58u, 0x128A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128A60u;
label_128a60:
    // 0x128a60: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x128A60u;
    {
        const bool branch_taken_0x128a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128a60) {
            ctx->pc = 0x128B7Cu;
            return;
        }
    }
    ctx->pc = 0x128A68u;
}
