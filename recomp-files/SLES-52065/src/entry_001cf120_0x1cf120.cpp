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

// Function: entry_001cf120
// Address: 0x1cf120 - 0x1cf1a0
void entry_001cf120_0x1cf120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf120_0x1cf120");
#endif

    switch (ctx->pc) {
        case 0x1cf150u: goto label_1cf150;
        case 0x1cf168u: goto label_1cf168;
        default: break;
    }

    ctx->pc = 0x1cf120u;

    // 0x1cf120: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1cf120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1cf124: 0x24a59820  addiu       $a1, $a1, -0x67E0
    ctx->pc = 0x1cf124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940704));
    // 0x1cf128: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1cf128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1cf12c: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x1cf12cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cf130: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x1cf130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf134: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cf134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cf138: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1cf138u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1cf13c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1cf13cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x1cf140: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1cf140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1cf144: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1cf144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1cf148: 0xc06282c  jal         func_18A0B0
    ctx->pc = 0x1CF148u;
    SET_GPR_U32(ctx, 31, 0x1CF150u);
    ctx->pc = 0x1CF14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF148u;
    // 0x1cf14c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0B0u, 0x1CF148u, 0x1CF150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF150u;
label_1cf150:
    // 0x1cf150: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf154: 0xc42cfb58  lwc1        $f12, -0x4A8($at)
    ctx->pc = 0x1cf154u;
    { uint32_t bits = FAST_READ32(0x36FB58u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cf158: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf15c: 0xc42dfb68  lwc1        $f13, -0x498($at)
    ctx->pc = 0x1cf15cu;
    { uint32_t bits = FAST_READ32(0x36FB68u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cf160: 0xc06285c  jal         func_18A170
    ctx->pc = 0x1CF160u;
    SET_GPR_U32(ctx, 31, 0x1CF168u);
    ctx->pc = 0x1CF164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF160u;
    // 0x1cf164: 0x8ea40060  lw          $a0, 0x60($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A170u, 0x1CF160u, 0x1CF168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF168u;
label_1cf168:
    // 0x1cf168: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf16c: 0x8c23fba8  lw          $v1, -0x458($at)
    ctx->pc = 0x1cf16cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36FBA8u));
    // 0x1cf170: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf174: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cf174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cf178: 0x8022fbb8  lb          $v0, -0x448($at)
    ctx->pc = 0x1cf178u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FBB8u));
    // 0x1cf17c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf17cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf180: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CF180u;
    {
        const bool branch_taken_0x1cf180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF180u;
        // 0x1cf184: 0xac23fba8  sw          $v1, -0x458($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294966184), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf180) {
            ctx->pc = 0x1CF1A0u;
            return;
        }
    }
    ctx->pc = 0x1CF188u;
    // 0x1cf188: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1cf188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cf18c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf190: 0xac23fbb0  sw          $v1, -0x450($at)
    ctx->pc = 0x1cf190u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FBB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FBB0u, _value); } while (0);
    // 0x1cf194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cf194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf198: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cf198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cf19c: 0xa022fbb8  sb          $v0, -0x448($at)
    ctx->pc = 0x1cf19cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FBB8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FBB8u, _value); } while (0);
    ctx->pc = 0x1cf1a0u;
}
