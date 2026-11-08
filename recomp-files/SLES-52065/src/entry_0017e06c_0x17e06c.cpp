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

// Function: entry_0017e06c
// Address: 0x17e06c - 0x17e0cc
void entry_0017e06c_0x17e06c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e06c_0x17e06c");
#endif

    switch (ctx->pc) {
        case 0x17e0b8u: goto label_17e0b8;
        default: break;
    }

    ctx->pc = 0x17e06cu;

    // 0x17e06c: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x17e06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17e070: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x17e070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x17e074: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x17e074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e078: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x17e078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e07c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17e07cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e080: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17e080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e084: 0x46150841  sub.s       $f1, $f1, $f21
    ctx->pc = 0x17e084u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x17e088: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x17e088u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x17e08c: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x17e08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x17e090: 0x46170843  div.s       $f1, $f1, $f23
    ctx->pc = 0x17e090u;
    { if (ctx->f[23] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[23]); }
    // 0x17e094: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x17e094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x17e098: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x17e098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x17e09c: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x17e09cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x17e0a0: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x17e0a0u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x17e0a4: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x17e0a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x17e0a8: 0x0  nop
    ctx->pc = 0x17e0a8u;
    // NOP
    // 0x17e0ac: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x17e0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x17e0b0: 0xc05faf8  jal         func_17EBE0
    ctx->pc = 0x17E0B0u;
    SET_GPR_U32(ctx, 31, 0x17E0B8u);
    ctx->pc = 0x17E0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E0B0u;
    // 0x17e0b4: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EBE0u, 0x17E0B0u, 0x17E0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E0B8u;
label_17e0b8:
    // 0x17e0b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E0B8u;
    {
        const bool branch_taken_0x17e0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e0b8) {
            ctx->pc = 0x17E0CCu;
            return;
        }
    }
    ctx->pc = 0x17E0C0u;
    // 0x17e0c0: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x17e0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x17e0c4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E0C4u;
    {
        const bool branch_taken_0x17e0c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e0c4) {
            ctx->pc = 0x17E0D8u;
            return;
        }
    }
    ctx->pc = 0x17E0CCu;
}
