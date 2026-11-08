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

// Function: entry_00187318
// Address: 0x187318 - 0x187388
void entry_00187318_0x187318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187318_0x187318");
#endif

    switch (ctx->pc) {
        case 0x187338u: goto label_187338;
        case 0x18734cu: goto label_18734c;
        case 0x187384u: goto label_187384;
        default: break;
    }

    ctx->pc = 0x187318u;

    // 0x187318: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x187318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x18731c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x18731cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x187320: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x187320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x187324: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x187324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x187328: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x187328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x18732c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x18732cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x187330: 0xc07d370  jal         func_1F4DC0
    ctx->pc = 0x187330u;
    SET_GPR_U32(ctx, 31, 0x187338u);
    ctx->pc = 0x187334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187330u;
    // 0x187334: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DC0u, 0x187330u, 0x187338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187338u;
label_187338:
    // 0x187338: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x187338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18733c: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x18733cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
    // 0x187340: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x187340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187344: 0xc07d308  jal         func_1F4C20
    ctx->pc = 0x187344u;
    SET_GPR_U32(ctx, 31, 0x18734Cu);
    ctx->pc = 0x187348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187344u;
    // 0x187348: 0xafa00134  sw          $zero, 0x134($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4C20u, 0x187344u, 0x18734Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18734Cu;
label_18734c:
    // 0x18734c: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x18734cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x187350: 0x27a40158  addiu       $a0, $sp, 0x158
    ctx->pc = 0x187350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x187354: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x187354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x187358: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x187358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x18735c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x18735cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x187360: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x187360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x187364: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x187364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x187368: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x187368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x18736c: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x18736cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
    // 0x187370: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x187370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x187374: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x187374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x187378: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x187378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x18737c: 0xc061e24  jal         func_187890
    ctx->pc = 0x18737Cu;
    SET_GPR_U32(ctx, 31, 0x187384u);
    ctx->pc = 0x187380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18737Cu;
    // 0x187380: 0xafa20144  sw          $v0, 0x144($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187890u, 0x18737Cu, 0x187384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187384u;
label_187384:
    // 0x187384: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x187384u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x187388u;
}
