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

// Function: entry_0013c80c
// Address: 0x13c80c - 0x13c864
void entry_0013c80c_0x13c80c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c80c_0x13c80c");
#endif

    ctx->pc = 0x13c80cu;

    // 0x13c80c: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x13c80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x13c810: 0xc6200070  lwc1        $f0, 0x70($s1)
    ctx->pc = 0x13c810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c814: 0xc441006c  lwc1        $f1, 0x6C($v0)
    ctx->pc = 0x13c814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13c818: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13c818u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13c81c: 0xe620006c  swc1        $f0, 0x6C($s1)
    ctx->pc = 0x13c81cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
    // 0x13c820: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x13c820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x13c824: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x13c824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13c828: 0xc4410068  lwc1        $f1, 0x68($v0)
    ctx->pc = 0x13c828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13c82c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13c82cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13c830: 0xe6200068  swc1        $f0, 0x68($s1)
    ctx->pc = 0x13c830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    // 0x13c834: 0x8e220124  lw          $v0, 0x124($s1)
    ctx->pc = 0x13c834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x13c838: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x13C838u;
    {
        const bool branch_taken_0x13c838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C838u;
        // 0x13c83c: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c838) {
            ctx->pc = 0x13C868u;
            return;
        }
    }
    ctx->pc = 0x13C840u;
    // 0x13c840: 0x8e220180  lw          $v0, 0x180($s1)
    ctx->pc = 0x13c840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x13c844: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13C844u;
    {
        const bool branch_taken_0x13c844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c844) {
            ctx->pc = 0x13C864u;
            return;
        }
    }
    ctx->pc = 0x13C84Cu;
    // 0x13c84c: 0x8e23017c  lw          $v1, 0x17C($s1)
    ctx->pc = 0x13c84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
    // 0x13c850: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13c850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13c854: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C854u;
    {
        const bool branch_taken_0x13c854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13c854) {
            ctx->pc = 0x13C864u;
            return;
        }
    }
    ctx->pc = 0x13C85Cu;
    // 0x13c85c: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13C85Cu;
    SET_GPR_U32(ctx, 31, 0x13C864u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13C85Cu, 0x13C864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C864u;
}
