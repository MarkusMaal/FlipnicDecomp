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

// Function: FUN_0016bbb0
// Address: 0x16bbb0 - 0x16bc04
void FUN_0016bbb0_0x16bbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016bbb0_0x16bbb0");
#endif

    switch (ctx->pc) {
        case 0x16bbc4u: goto label_16bbc4;
        default: break;
    }

    ctx->pc = 0x16bbb0u;

    // 0x16bbb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16bbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16bbb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16bbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16bbb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16bbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16bbbc: 0xc0563c0  jal         func_158F00
    ctx->pc = 0x16BBBCu;
    SET_GPR_U32(ctx, 31, 0x16BBC4u);
    ctx->pc = 0x16BBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BBBCu;
    // 0x16bbc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F00u, 0x16BBBCu, 0x16BBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BBC4u;
label_16bbc4:
    // 0x16bbc4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x16bbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16bbc8: 0x3c033e49  lui         $v1, 0x3E49
    ctx->pc = 0x16bbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15945 << 16));
    // 0x16bbcc: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x16bbccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x16bbd0: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x16bbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x16bbd4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x16bbd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x16bbd8: 0xc4a00058  lwc1        $f0, 0x58($a1)
    ctx->pc = 0x16bbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16bbdc: 0xe6000210  swc1        $f0, 0x210($s0)
    ctx->pc = 0x16bbdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 528), bits); }
    // 0x16bbe0: 0xae040228  sw          $a0, 0x228($s0)
    ctx->pc = 0x16bbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 4));
    // 0x16bbe4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16bbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16bbe8: 0x80840024  lb          $a0, 0x24($a0)
    ctx->pc = 0x16bbe8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x16bbec: 0xa6040222  sh          $a0, 0x222($s0)
    ctx->pc = 0x16bbecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 546), (uint16_t)GPR_U32(ctx, 4));
    // 0x16bbf0: 0xae030228  sw          $v1, 0x228($s0)
    ctx->pc = 0x16bbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 3));
    // 0x16bbf4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16bbf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bbf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16bbf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bbfc: 0x3e00008  jr          $ra
    ctx->pc = 0x16BBFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BBFCu;
        // 0x16bc00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BBFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BC04u;
}
