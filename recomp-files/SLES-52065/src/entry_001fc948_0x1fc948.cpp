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

// Function: entry_001fc948
// Address: 0x1fc948 - 0x1fc9c8
void entry_001fc948_0x1fc948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc948_0x1fc948");
#endif

    switch (ctx->pc) {
        case 0x1fc950u: goto label_1fc950;
        case 0x1fc95cu: goto label_1fc95c;
        case 0x1fc968u: goto label_1fc968;
        case 0x1fc984u: goto label_1fc984;
        case 0x1fc99cu: goto label_1fc99c;
        case 0x1fc9a8u: goto label_1fc9a8;
        default: break;
    }

    ctx->pc = 0x1fc948u;

    // 0x1fc948: 0xc0821ba  jal         func_2086E8
    ctx->pc = 0x1FC948u;
    SET_GPR_U32(ctx, 31, 0x1FC950u);
    ctx->pc = 0x1FC94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC948u;
    // 0x1fc94c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2086E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2086E8u, 0x1FC948u, 0x1FC950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC950u;
label_1fc950:
    // 0x1fc950: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fc950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc954: 0xc08218c  jal         func_208630
    ctx->pc = 0x1FC954u;
    SET_GPR_U32(ctx, 31, 0x1FC95Cu);
    ctx->pc = 0x1FC958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC954u;
    // 0x1fc958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1FC954u, 0x1FC95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC95Cu;
label_1fc95c:
    // 0x1fc95c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1fc95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc960: 0xc082014  jal         func_208050
    ctx->pc = 0x1FC960u;
    SET_GPR_U32(ctx, 31, 0x1FC968u);
    ctx->pc = 0x1FC964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC960u;
    // 0x1fc964: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x1FC960u, 0x1FC968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC968u;
label_1fc968:
    // 0x1fc968: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fc968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc96c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fc96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc970: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x1fc970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1fc974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc978: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x1fc978u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fc97c: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1FC97Cu;
    SET_GPR_U32(ctx, 31, 0x1FC984u);
    ctx->pc = 0x1FC980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC97Cu;
    // 0x1fc980: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1FC97Cu, 0x1FC984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC984u;
label_1fc984:
    // 0x1fc984: 0x442027f  bltzl       $v0, . + 4 + (0x27F << 2)
    ctx->pc = 0x1FC984u;
    {
        const bool branch_taken_0x1fc984 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1fc984) {
            ctx->pc = 0x1FC988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC984u;
            // 0x1fc988: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD384u;
            return;
        }
    }
    ctx->pc = 0x1FC98Cu;
    // 0x1fc98c: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x1fc98cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x1fc990: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x1fc990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x1fc994: 0xc082014  jal         func_208050
    ctx->pc = 0x1FC994u;
    SET_GPR_U32(ctx, 31, 0x1FC99Cu);
    ctx->pc = 0x1FC998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC994u;
    // 0x1fc998: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208050u, 0x1FC994u, 0x1FC99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC99Cu;
label_1fc99c:
    // 0x1fc99c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fc99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc9a0: 0xc082178  jal         func_2085E0
    ctx->pc = 0x1FC9A0u;
    SET_GPR_U32(ctx, 31, 0x1FC9A8u);
    ctx->pc = 0x1FC9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC9A0u;
    // 0x1fc9a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E0u, 0x1FC9A0u, 0x1FC9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC9A8u;
label_1fc9a8:
    // 0x1fc9a8: 0x4400098  bltz        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x1FC9A8u;
    {
        const bool branch_taken_0x1fc9a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1FC9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC9A8u;
        // 0x1fc9ac: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc9a8) {
            ctx->pc = 0x1FCC0Cu;
            return;
        }
    }
    ctx->pc = 0x1FC9B0u;
    // 0x1fc9b0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1fc9b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1fc9b4: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x1fc9b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1fc9b8: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1FC9B8u;
    {
        const bool branch_taken_0x1fc9b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc9b8) {
            ctx->pc = 0x1FC920u;
            return;
        }
    }
    ctx->pc = 0x1FC9C0u;
    // 0x1fc9c0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1FC9C0u;
    {
        const bool branch_taken_0x1fc9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC9C0u;
        // 0x1fc9c4: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc9c0) {
            ctx->pc = 0x1FCAC0u;
            return;
        }
    }
    ctx->pc = 0x1FC9C8u;
}
