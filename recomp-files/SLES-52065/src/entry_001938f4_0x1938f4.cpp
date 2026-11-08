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

// Function: entry_001938f4
// Address: 0x1938f4 - 0x19394c
void entry_001938f4_0x1938f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001938f4_0x1938f4");
#endif

    switch (ctx->pc) {
        case 0x193944u: goto label_193944;
        default: break;
    }

    ctx->pc = 0x1938f4u;

    // 0x1938f4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1938f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1938f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1938f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1938fc: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x1938fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
    // 0x193900: 0x312200ff  andi        $v0, $t1, 0xFF
    ctx->pc = 0x193900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x193904: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x193904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x193908: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x193908u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x19390c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x19390cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x193910: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x193910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x193914: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x193914u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193918: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x193918u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19391c: 0x8f838384  lw          $v1, -0x7C7C($gp)
    ctx->pc = 0x19391cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
    // 0x193920: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x193920u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x193924: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x193924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193928: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x193928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19392c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19392cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x193930: 0x46800b60  cvt.s.w     $f13, $f1
    ctx->pc = 0x193930u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x193934: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x193934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x193938: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x193938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x19393c: 0xc04bce0  jal         func_12F380
    ctx->pc = 0x19393Cu;
    SET_GPR_U32(ctx, 31, 0x193944u);
    ctx->pc = 0x193940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19393Cu;
    // 0x193940: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x19393Cu, 0x193944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193944u;
label_193944:
    // 0x193944: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x193944u;
    {
        const bool branch_taken_0x193944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193944) {
            ctx->pc = 0x193AECu;
            return;
        }
    }
    ctx->pc = 0x19394Cu;
}
