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

// Function: entry_001df200
// Address: 0x1df200 - 0x1df25c
void entry_001df200_0x1df200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df200_0x1df200");
#endif

    switch (ctx->pc) {
        case 0x1df20cu: goto label_1df20c;
        case 0x1df21cu: goto label_1df21c;
        case 0x1df228u: goto label_1df228;
        default: break;
    }

    ctx->pc = 0x1df200u;

    // 0x1df200: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1df200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df204: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1DF204u;
    SET_GPR_U32(ctx, 31, 0x1DF20Cu);
    ctx->pc = 0x1DF208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF204u;
    // 0x1df208: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1DF204u, 0x1DF20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF20Cu;
label_1df20c:
    // 0x1df20c: 0xde250078  ld          $a1, 0x78($s1)
    ctx->pc = 0x1df20cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1df210: 0xfe220040  sd          $v0, 0x40($s1)
    ctx->pc = 0x1df210u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 2));
    // 0x1df214: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1DF214u;
    SET_GPR_U32(ctx, 31, 0x1DF21Cu);
    ctx->pc = 0x1DF218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF214u;
    // 0x1df218: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1DF214u, 0x1DF21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF21Cu;
label_1df21c:
    // 0x1df21c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1df21cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df220: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1DF220u;
    SET_GPR_U32(ctx, 31, 0x1DF228u);
    ctx->pc = 0x1DF224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF220u;
    // 0x1df224: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1DF220u, 0x1DF228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF228u;
label_1df228:
    // 0x1df228: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x1df228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1df22c: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x1df22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1df230: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1df230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1df234: 0xfe220040  sd          $v0, 0x40($s1)
    ctx->pc = 0x1df234u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 2));
    // 0x1df238: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1df238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df23c: 0xfe220048  sd          $v0, 0x48($s1)
    ctx->pc = 0x1df23cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 2));
    // 0x1df240: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x1df240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
    // 0x1df244: 0xae240018  sw          $a0, 0x18($s1)
    ctx->pc = 0x1df244u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
    // 0x1df248: 0xae250070  sw          $a1, 0x70($s1)
    ctx->pc = 0x1df248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 5));
    // 0x1df24c: 0xae250010  sw          $a1, 0x10($s1)
    ctx->pc = 0x1df24cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 5));
    // 0x1df250: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x1df250u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
    // 0x1df254: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x1df254u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
    // 0x1df258: 0xa2200069  sb          $zero, 0x69($s1)
    ctx->pc = 0x1df258u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1df25cu;
}
