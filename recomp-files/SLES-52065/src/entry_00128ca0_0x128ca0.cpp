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

// Function: entry_00128ca0
// Address: 0x128ca0 - 0x128d10
void entry_00128ca0_0x128ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128ca0_0x128ca0");
#endif

    switch (ctx->pc) {
        case 0x128cb8u: goto label_128cb8;
        default: break;
    }

    ctx->pc = 0x128ca0u;

label_128ca0:
    // 0x128ca0: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x128ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x128ca4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x128ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x128ca8: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x128ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
    // 0x128cac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x128cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128cb0: 0xc07d36a  jal         func_1F4DA8
    ctx->pc = 0x128CB0u;
    SET_GPR_U32(ctx, 31, 0x128CB8u);
    ctx->pc = 0x128CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128CB0u;
    // 0x128cb4: 0x503021  addu        $a2, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DA8u, 0x128CB0u, 0x128CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128CB8u;
label_128cb8:
    // 0x128cb8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x128cb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x128cbc: 0x2a43000a  slti        $v1, $s2, 0xA
    ctx->pc = 0x128cbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x128cc0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x128CC0u;
    {
        const bool branch_taken_0x128cc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x128CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128CC0u;
        // 0x128cc4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128cc0) {
            ctx->pc = 0x128CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128ca0;
        }
    }
    ctx->pc = 0x128CC8u;
    // 0x128cc8: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x128cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128ccc: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x128cccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x128cd0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x128cd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x128cd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x128cd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128cd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x128cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128cdc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x128cdcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x128ce0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x128ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x128ce4: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x128ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128ce8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x128ce8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x128cec: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x128cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x128cf0: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x128cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128cf4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x128cf4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x128cf8: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x128cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x128cfc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x128cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x128d00: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x128d00u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x128d04: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x128d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x128d08: 0x32a40008  andi        $a0, $s5, 0x8
    ctx->pc = 0x128d08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8);
    // 0x128d0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x128d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x128d10u;
}
