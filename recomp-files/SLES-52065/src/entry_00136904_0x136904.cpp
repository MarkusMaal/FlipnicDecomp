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

// Function: entry_00136904
// Address: 0x136904 - 0x136980
void entry_00136904_0x136904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136904_0x136904");
#endif

    switch (ctx->pc) {
        case 0x13690cu: goto label_13690c;
        case 0x136914u: goto label_136914;
        case 0x13691cu: goto label_13691c;
        case 0x136924u: goto label_136924;
        case 0x136930u: goto label_136930;
        case 0x136938u: goto label_136938;
        case 0x136940u: goto label_136940;
        case 0x136948u: goto label_136948;
        case 0x136954u: goto label_136954;
        case 0x13695cu: goto label_13695c;
        case 0x136978u: goto label_136978;
        default: break;
    }

    ctx->pc = 0x136904u;

    // 0x136904: 0xc04fbe0  jal         func_13EF80
    ctx->pc = 0x136904u;
    SET_GPR_U32(ctx, 31, 0x13690Cu);
    ctx->pc = 0x13EF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF80u, 0x136904u, 0x13690Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13690Cu;
label_13690c:
    // 0x13690c: 0xc04e900  jal         func_13A400
    ctx->pc = 0x13690Cu;
    SET_GPR_U32(ctx, 31, 0x136914u);
    ctx->pc = 0x13A400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A400u, 0x13690Cu, 0x136914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136914u;
label_136914:
    // 0x136914: 0xc04e904  jal         func_13A410
    ctx->pc = 0x136914u;
    SET_GPR_U32(ctx, 31, 0x13691Cu);
    ctx->pc = 0x13A410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A410u, 0x136914u, 0x13691Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13691Cu;
label_13691c:
    // 0x13691c: 0xc04d760  jal         func_135D80
    ctx->pc = 0x13691Cu;
    SET_GPR_U32(ctx, 31, 0x136924u);
    ctx->pc = 0x135D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135D80u, 0x13691Cu, 0x136924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136924u;
label_136924:
    // 0x136924: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x136924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136928: 0xc0512c8  jal         func_144B20
    ctx->pc = 0x136928u;
    SET_GPR_U32(ctx, 31, 0x136930u);
    ctx->pc = 0x13692Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136928u;
    // 0x13692c: 0xe6200068  swc1        $f0, 0x68($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x144B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B20u, 0x136928u, 0x136930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136930u;
label_136930:
    // 0x136930: 0xc0513f4  jal         func_144FD0
    ctx->pc = 0x136930u;
    SET_GPR_U32(ctx, 31, 0x136938u);
    ctx->pc = 0x136934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136930u;
    // 0x136934: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144FD0u, 0x136930u, 0x136938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136938u;
label_136938:
    // 0x136938: 0xc061da8  jal         func_1876A0
    ctx->pc = 0x136938u;
    SET_GPR_U32(ctx, 31, 0x136940u);
    ctx->pc = 0x1876A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1876A0u, 0x136938u, 0x136940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136940u;
label_136940:
    // 0x136940: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x136940u;
    SET_GPR_U32(ctx, 31, 0x136948u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x136940u, 0x136948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136948u;
label_136948:
    // 0x136948: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x136948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13694c: 0xc049e48  jal         func_127920
    ctx->pc = 0x13694Cu;
    SET_GPR_U32(ctx, 31, 0x136954u);
    ctx->pc = 0x136950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13694Cu;
    // 0x136950: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127920u, 0x13694Cu, 0x136954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136954u;
label_136954:
    // 0x136954: 0xc04e7e8  jal         func_139FA0
    ctx->pc = 0x136954u;
    SET_GPR_U32(ctx, 31, 0x13695Cu);
    ctx->pc = 0x139FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139FA0u, 0x136954u, 0x13695Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13695Cu;
label_13695c:
    // 0x13695c: 0x8f8285d8  lw          $v0, -0x7A28($gp)
    ctx->pc = 0x13695cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936024)));
    // 0x136960: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x136960u;
    {
        const bool branch_taken_0x136960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136960u;
        // 0x136964: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136960) {
            ctx->pc = 0x136980u;
            return;
        }
    }
    ctx->pc = 0x136968u;
    // 0x136968: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x136968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x13696c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13696cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x136970: 0xc07d392  jal         func_1F4E48
    ctx->pc = 0x136970u;
    SET_GPR_U32(ctx, 31, 0x136978u);
    ctx->pc = 0x136974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136970u;
    // 0x136974: 0x24a571e0  addiu       $a1, $a1, 0x71E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x136970u, 0x136978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136978u;
label_136978:
    // 0x136978: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x136978u;
    {
        const bool branch_taken_0x136978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136978) {
            ctx->pc = 0x136988u;
            return;
        }
    }
    ctx->pc = 0x136980u;
}
