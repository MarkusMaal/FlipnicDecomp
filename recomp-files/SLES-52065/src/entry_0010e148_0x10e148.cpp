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

// Function: entry_0010e148
// Address: 0x10e148 - 0x10e19c
void entry_0010e148_0x10e148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e148_0x10e148");
#endif

    switch (ctx->pc) {
        case 0x10e188u: goto label_10e188;
        default: break;
    }

    ctx->pc = 0x10e148u;

    // 0x10e148: 0x8e040210  lw          $a0, 0x210($s0)
    ctx->pc = 0x10e148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x10e14c: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x10e14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x10e150: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x10e150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x10e154: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x10e154u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10e158: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x10e158u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x10e15c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10e15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10e160: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x10e160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x10e164: 0x8c8301fc  lw          $v1, 0x1FC($a0)
    ctx->pc = 0x10e164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 508)));
    // 0x10e168: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x10e168u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10e16c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x10E16Cu;
    {
        const bool branch_taken_0x10e16c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e16c) {
            ctx->pc = 0x10E1B8u;
            return;
        }
    }
    ctx->pc = 0x10E174u;
    // 0x10e174: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x10e174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x10e178: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10e178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10e17c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10e17cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10e180: 0xc042584  jal         func_109610
    ctx->pc = 0x10E180u;
    SET_GPR_U32(ctx, 31, 0x10E188u);
    ctx->pc = 0x10E184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E180u;
    // 0x10e184: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109610u, 0x10E180u, 0x10E188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E188u;
label_10e188:
    // 0x10e188: 0x8e020230  lw          $v0, 0x230($s0)
    ctx->pc = 0x10e188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x10e18c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10e18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e190: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10e190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10e194: 0xc0438f0  jal         func_10E3C0
    ctx->pc = 0x10E194u;
    SET_GPR_U32(ctx, 31, 0x10E19Cu);
    ctx->pc = 0x10E198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E194u;
    // 0x10e198: 0xae020230  sw          $v0, 0x230($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E3C0u, 0x10E194u, 0x10E19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E19Cu;
}
