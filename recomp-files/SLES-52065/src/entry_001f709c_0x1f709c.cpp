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

// Function: entry_001f709c
// Address: 0x1f709c - 0x1f70ec
void entry_001f709c_0x1f709c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f709c_0x1f709c");
#endif

    switch (ctx->pc) {
        case 0x1f70b0u: goto label_1f70b0;
        case 0x1f70bcu: goto label_1f70bc;
        case 0x1f70c8u: goto label_1f70c8;
        case 0x1f70d8u: goto label_1f70d8;
        default: break;
    }

    ctx->pc = 0x1f709cu;

    // 0x1f709c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1f709cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1f70a0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1f70a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1f70a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f70a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f70a8: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F70A8u;
    SET_GPR_U32(ctx, 31, 0x1F70B0u);
    ctx->pc = 0x1F70ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F70A8u;
    // 0x1f70ac: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F70A8u, 0x1F70B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F70B0u;
label_1f70b0:
    // 0x1f70b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f70b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f70b4: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F70B4u;
    SET_GPR_U32(ctx, 31, 0x1F70BCu);
    ctx->pc = 0x1F70B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F70B4u;
    // 0x1f70b8: 0xae22bb28  sw          $v0, -0x44D8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294949672), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F70B4u, 0x1F70BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F70BCu;
label_1f70bc:
    // 0x1f70bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f70bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f70c0: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F70C0u;
    SET_GPR_U32(ctx, 31, 0x1F70C8u);
    ctx->pc = 0x1F70C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F70C0u;
    // 0x1f70c4: 0xae02bb2c  sw          $v0, -0x44D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294949676), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F70C0u, 0x1F70C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F70C8u;
label_1f70c8:
    // 0x1f70c8: 0xae42bb30  sw          $v0, -0x44D0($s2)
    ctx->pc = 0x1f70c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294949680), GPR_U32(ctx, 2));
    // 0x1f70cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f70ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f70d0: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F70D0u;
    SET_GPR_U32(ctx, 31, 0x1F70D8u);
    ctx->pc = 0x1F70D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F70D0u;
    // 0x1f70d4: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F70D0u, 0x1F70D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F70D8u;
label_1f70d8:
    // 0x1f70d8: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1f70d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1f70dc: 0xac62bb20  sw          $v0, -0x44E0($v1)
    ctx->pc = 0x1f70dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x21BB20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21BB20u, _value); } while (0);
    // 0x1f70e0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f70e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f70e4: 0xac40bb34  sw          $zero, -0x44CC($v0)
    ctx->pc = 0x1f70e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x21BB34u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21BB34u, _value); } while (0);
    // 0x1f70e8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f70e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->pc = 0x1f70ecu;
}
