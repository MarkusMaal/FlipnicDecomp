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

// Function: FUN_001ead20
// Address: 0x1ead20 - 0x1ead84
void FUN_001ead20_0x1ead20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ead20_0x1ead20");
#endif

    switch (ctx->pc) {
        case 0x1ead20u: goto label_1ead20;
        case 0x1ead24u: goto label_1ead24;
        case 0x1ead28u: goto label_1ead28;
        case 0x1ead2cu: goto label_1ead2c;
        case 0x1ead30u: goto label_1ead30;
        case 0x1ead34u: goto label_1ead34;
        case 0x1ead38u: goto label_1ead38;
        case 0x1ead3cu: goto label_1ead3c;
        case 0x1ead40u: goto label_1ead40;
        case 0x1ead44u: goto label_1ead44;
        case 0x1ead48u: goto label_1ead48;
        case 0x1ead4cu: goto label_1ead4c;
        case 0x1ead50u: goto label_1ead50;
        case 0x1ead54u: goto label_1ead54;
        case 0x1ead58u: goto label_1ead58;
        case 0x1ead5cu: goto label_1ead5c;
        case 0x1ead60u: goto label_1ead60;
        case 0x1ead64u: goto label_1ead64;
        case 0x1ead68u: goto label_1ead68;
        case 0x1ead6cu: goto label_1ead6c;
        case 0x1ead70u: goto label_1ead70;
        case 0x1ead74u: goto label_1ead74;
        case 0x1ead78u: goto label_1ead78;
        case 0x1ead7cu: goto label_1ead7c;
        case 0x1ead80u: goto label_1ead80;
        default: break;
    }

    ctx->pc = 0x1ead20u;

label_1ead20:
    // 0x1ead20: 0x78900120  lq          $s0, 0x120($a0)
    ctx->pc = 0x1ead20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 4), 288)));
label_1ead24:
    // 0x1ead24: 0x78910130  lq          $s1, 0x130($a0)
    ctx->pc = 0x1ead24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 4), 304)));
label_1ead28:
    // 0x1ead28: 0x78920140  lq          $s2, 0x140($a0)
    ctx->pc = 0x1ead28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 4), 320)));
label_1ead2c:
    // 0x1ead2c: 0x78930150  lq          $s3, 0x150($a0)
    ctx->pc = 0x1ead2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 4), 336)));
label_1ead30:
    // 0x1ead30: 0x78940160  lq          $s4, 0x160($a0)
    ctx->pc = 0x1ead30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 4), 352)));
label_1ead34:
    // 0x1ead34: 0x78950170  lq          $s5, 0x170($a0)
    ctx->pc = 0x1ead34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 4), 368)));
label_1ead38:
    // 0x1ead38: 0x78960180  lq          $s6, 0x180($a0)
    ctx->pc = 0x1ead38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 4), 384)));
label_1ead3c:
    // 0x1ead3c: 0x78970190  lq          $s7, 0x190($a0)
    ctx->pc = 0x1ead3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 4), 400)));
label_1ead40:
    // 0x1ead40: 0x789e0200  lq          $fp, 0x200($a0)
    ctx->pc = 0x1ead40u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 4), 512)));
label_1ead44:
    // 0x1ead44: 0xc4940288  lwc1        $f20, 0x288($a0)
    ctx->pc = 0x1ead44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1ead48:
    // 0x1ead48: 0xc495028c  lwc1        $f21, 0x28C($a0)
    ctx->pc = 0x1ead48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1ead4c:
    // 0x1ead4c: 0xc4960290  lwc1        $f22, 0x290($a0)
    ctx->pc = 0x1ead4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1ead50:
    // 0x1ead50: 0xc4970294  lwc1        $f23, 0x294($a0)
    ctx->pc = 0x1ead50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1ead54:
    // 0x1ead54: 0xc4980298  lwc1        $f24, 0x298($a0)
    ctx->pc = 0x1ead54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_1ead58:
    // 0x1ead58: 0xc499029c  lwc1        $f25, 0x29C($a0)
    ctx->pc = 0x1ead58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_1ead5c:
    // 0x1ead5c: 0xc49a02a0  lwc1        $f26, 0x2A0($a0)
    ctx->pc = 0x1ead5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_1ead60:
    // 0x1ead60: 0xc49b02a4  lwc1        $f27, 0x2A4($a0)
    ctx->pc = 0x1ead60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_1ead64:
    // 0x1ead64: 0xc49c02a8  lwc1        $f28, 0x2A8($a0)
    ctx->pc = 0x1ead64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_1ead68:
    // 0x1ead68: 0xc49d02ac  lwc1        $f29, 0x2AC($a0)
    ctx->pc = 0x1ead68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_1ead6c:
    // 0x1ead6c: 0xc49e02b0  lwc1        $f30, 0x2B0($a0)
    ctx->pc = 0x1ead6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_1ead70:
    // 0x1ead70: 0xc49f02b4  lwc1        $f31, 0x2B4($a0)
    ctx->pc = 0x1ead70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_1ead74:
    // 0x1ead74: 0x8c9d001c  lw          $sp, 0x1C($a0)
    ctx->pc = 0x1ead74u;
    SET_GPR_S32(ctx, 29, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_1ead78:
    // 0x1ead78: 0x8c820224  lw          $v0, 0x224($a0)
    ctx->pc = 0x1ead78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
label_1ead7c:
    // 0x1ead7c: 0xc00008  jr          $a2
label_1ead80:
    if (ctx->pc == 0x1EAD80u) {
        ctx->pc = 0x1EAD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAD7Cu;
        // 0x1ead80: 0x3a2e822  sub         $sp, $sp, $v0 (Delay Slot)
        { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 29), GPR_U32(ctx, 2), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAD84u;
        goto label_fallthrough_0x1ead7c;
    }
    ctx->pc = 0x1EAD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        ctx->pc = 0x1EAD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAD7Cu;
        // 0x1ead80: 0x3a2e822  sub         $sp, $sp, $v0 (Delay Slot)
        { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 29), GPR_U32(ctx, 2), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 29, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAD7Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1ead7c:
    ctx->pc = 0x1EAD84u;
}
