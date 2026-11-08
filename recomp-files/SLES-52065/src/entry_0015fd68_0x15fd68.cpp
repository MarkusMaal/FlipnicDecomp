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

// Function: entry_0015fd68
// Address: 0x15fd68 - 0x15fdb0
void entry_0015fd68_0x15fd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015fd68_0x15fd68");
#endif

    switch (ctx->pc) {
        case 0x15fd98u: goto label_15fd98;
        case 0x15fdacu: goto label_15fdac;
        default: break;
    }

    ctx->pc = 0x15fd68u;

    // 0x15fd68: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x15fd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15fd6c: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x15fd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x15fd70: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x15fd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15fd74: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x15fd74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x15fd78: 0xc64e0008  lwc1        $f14, 0x8($s2)
    ctx->pc = 0x15fd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x15fd7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15fd80: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x15fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x15fd84: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15fd84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15fd88: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x15fd88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15fd8c: 0x26530040  addiu       $s3, $s2, 0x40
    ctx->pc = 0x15fd8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x15fd90: 0xc056270  jal         func_1589C0
    ctx->pc = 0x15FD90u;
    SET_GPR_U32(ctx, 31, 0x15FD98u);
    ctx->pc = 0x15FD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FD90u;
    // 0x15fd94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1589C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1589C0u, 0x15FD90u, 0x15FD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FD98u;
label_15fd98:
    // 0x15fd98: 0x26042c00  addiu       $a0, $s0, 0x2C00
    ctx->pc = 0x15fd98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 11264));
    // 0x15fd9c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15fd9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fda0: 0x26470310  addiu       $a3, $s2, 0x310
    ctx->pc = 0x15fda0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 784));
    // 0x15fda4: 0xc058138  jal         func_1604E0
    ctx->pc = 0x15FDA4u;
    SET_GPR_U32(ctx, 31, 0x15FDACu);
    ctx->pc = 0x15FDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FDA4u;
    // 0x15fda8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1604E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1604E0u, 0x15FDA4u, 0x15FDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FDACu;
label_15fdac:
    // 0x15fdac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x15fdacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15fdb0u;
}
