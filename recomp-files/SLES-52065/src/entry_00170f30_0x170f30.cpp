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

// Function: entry_00170f30
// Address: 0x170f30 - 0x170f90
void entry_00170f30_0x170f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170f30_0x170f30");
#endif

    switch (ctx->pc) {
        case 0x170f88u: goto label_170f88;
        default: break;
    }

    ctx->pc = 0x170f30u;

label_170f30:
    // 0x170f30: 0x92020261  lbu         $v0, 0x261($s0)
    ctx->pc = 0x170f30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 609)));
label_170f34:
    // 0x170f34: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_170f38:
    if (ctx->pc == 0x170F38u) {
        ctx->pc = 0x170F3Cu;
        goto label_170f3c;
    }
    ctx->pc = 0x170F34u;
    {
        const bool branch_taken_0x170f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x170f34) {
            ctx->pc = 0x170F90u;
            return;
        }
    }
    ctx->pc = 0x170F3Cu;
label_170f3c:
    // 0x170f3c: 0xae000230  sw          $zero, 0x230($s0)
    ctx->pc = 0x170f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 0));
label_170f40:
    // 0x170f40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x170f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_170f44:
    // 0x170f44: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x170f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
label_170f48:
    // 0x170f48: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x170f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_170f4c:
    // 0x170f4c: 0xae05022c  sw          $a1, 0x22C($s0)
    ctx->pc = 0x170f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 5));
label_170f50:
    // 0x170f50: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x170f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_170f54:
    // 0x170f54: 0xc600025c  lwc1        $f0, 0x25C($s0)
    ctx->pc = 0x170f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_170f58:
    // 0x170f58: 0xae020270  sw          $v0, 0x270($s0)
    ctx->pc = 0x170f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 2));
label_170f5c:
    // 0x170f5c: 0xe6000274  swc1        $f0, 0x274($s0)
    ctx->pc = 0x170f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
label_170f60:
    // 0x170f60: 0xae000278  sw          $zero, 0x278($s0)
    ctx->pc = 0x170f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 0));
label_170f64:
    // 0x170f64: 0xac207508  sw          $zero, 0x7508($at)
    ctx->pc = 0x170f64u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29960), GPR_U32(ctx, 0));
label_170f68:
    // 0x170f68: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x170f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_170f6c:
    // 0x170f6c: 0xac207500  sw          $zero, 0x7500($at)
    ctx->pc = 0x170f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29952), GPR_U32(ctx, 0));
label_170f70:
    // 0x170f70: 0xa2000261  sb          $zero, 0x261($s0)
    ctx->pc = 0x170f70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 609), (uint8_t)GPR_U32(ctx, 0));
label_170f74:
    // 0x170f74: 0xa2000260  sb          $zero, 0x260($s0)
    ctx->pc = 0x170f74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 608), (uint8_t)GPR_U32(ctx, 0));
label_170f78:
    // 0x170f78: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x170f78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_170f7c:
    // 0x170f7c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x170f7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_170f80:
    // 0x170f80: 0x320f809  jalr        $t9
label_170f84:
    if (ctx->pc == 0x170F84u) {
        ctx->pc = 0x170F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F80u;
        // 0x170f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x170F88u;
        goto label_170f88;
    }
    ctx->pc = 0x170F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x170F88u);
        ctx->pc = 0x170F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F80u;
        // 0x170f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170F80u, 0x170F88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x170F88u;
label_170f88:
    // 0x170f88: 0x10000003  b           . + 4 + (0x3 << 2)
label_170f8c:
    if (ctx->pc == 0x170F8Cu) {
        ctx->pc = 0x170F90u;
        goto label_fallthrough_0x170f88;
    }
    ctx->pc = 0x170F88u;
    {
        const bool branch_taken_0x170f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170f88) {
            ctx->pc = 0x170F98u;
            return;
        }
    }
label_fallthrough_0x170f88:
    ctx->pc = 0x170F90u;
}
