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

// Function: entry_00170ed4
// Address: 0x170ed4 - 0x170f30
void entry_00170ed4_0x170ed4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170ed4_0x170ed4");
#endif

    switch (ctx->pc) {
        case 0x170f28u: goto label_170f28;
        default: break;
    }

    ctx->pc = 0x170ed4u;

label_170ed4:
    // 0x170ed4: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_170ed8:
    if (ctx->pc == 0x170ED8u) {
        ctx->pc = 0x170EDCu;
        goto label_170edc;
    }
    ctx->pc = 0x170ED4u;
    {
        const bool branch_taken_0x170ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x170ed4) {
            ctx->pc = 0x170F30u;
            return;
        }
    }
    ctx->pc = 0x170EDCu;
label_170edc:
    // 0x170edc: 0xae000230  sw          $zero, 0x230($s0)
    ctx->pc = 0x170edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 0));
label_170ee0:
    // 0x170ee0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x170ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170ee4:
    // 0x170ee4: 0xae050228  sw          $a1, 0x228($s0)
    ctx->pc = 0x170ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 5));
label_170ee8:
    // 0x170ee8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x170ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_170eec:
    // 0x170eec: 0xae00022c  sw          $zero, 0x22C($s0)
    ctx->pc = 0x170eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 0));
label_170ef0:
    // 0x170ef0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x170ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_170ef4:
    // 0x170ef4: 0xc600025c  lwc1        $f0, 0x25C($s0)
    ctx->pc = 0x170ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_170ef8:
    // 0x170ef8: 0xae020270  sw          $v0, 0x270($s0)
    ctx->pc = 0x170ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 2));
label_170efc:
    // 0x170efc: 0xe6000274  swc1        $f0, 0x274($s0)
    ctx->pc = 0x170efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
label_170f00:
    // 0x170f00: 0xae000278  sw          $zero, 0x278($s0)
    ctx->pc = 0x170f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 0));
label_170f04:
    // 0x170f04: 0xac207508  sw          $zero, 0x7508($at)
    ctx->pc = 0x170f04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29960), GPR_U32(ctx, 0));
label_170f08:
    // 0x170f08: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x170f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_170f0c:
    // 0x170f0c: 0xac207500  sw          $zero, 0x7500($at)
    ctx->pc = 0x170f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29952), GPR_U32(ctx, 0));
label_170f10:
    // 0x170f10: 0xa2000261  sb          $zero, 0x261($s0)
    ctx->pc = 0x170f10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 609), (uint8_t)GPR_U32(ctx, 0));
label_170f14:
    // 0x170f14: 0xa2000260  sb          $zero, 0x260($s0)
    ctx->pc = 0x170f14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 608), (uint8_t)GPR_U32(ctx, 0));
label_170f18:
    // 0x170f18: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x170f18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_170f1c:
    // 0x170f1c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x170f1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_170f20:
    // 0x170f20: 0x320f809  jalr        $t9
label_170f24:
    if (ctx->pc == 0x170F24u) {
        ctx->pc = 0x170F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F20u;
        // 0x170f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170F28u;
        goto label_170f28;
    }
    ctx->pc = 0x170F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x170F28u);
        ctx->pc = 0x170F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F20u;
        // 0x170f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170F20u, 0x170F28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x170F28u;
label_170f28:
    // 0x170f28: 0x1000001b  b           . + 4 + (0x1B << 2)
label_170f2c:
    if (ctx->pc == 0x170F2Cu) {
        ctx->pc = 0x170F30u;
        goto label_fallthrough_0x170f28;
    }
    ctx->pc = 0x170F28u;
    {
        const bool branch_taken_0x170f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170f28) {
            ctx->pc = 0x170F98u;
            return;
        }
    }
label_fallthrough_0x170f28:
    ctx->pc = 0x170F30u;
}
