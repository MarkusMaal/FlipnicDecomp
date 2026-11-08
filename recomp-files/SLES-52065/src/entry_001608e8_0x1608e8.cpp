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

// Function: entry_001608e8
// Address: 0x1608e8 - 0x16097c
void entry_001608e8_0x1608e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001608e8_0x1608e8");
#endif

    switch (ctx->pc) {
        case 0x160908u: goto label_160908;
        case 0x160930u: goto label_160930;
        case 0x160950u: goto label_160950;
        case 0x160968u: goto label_160968;
        default: break;
    }

    ctx->pc = 0x1608e8u;

label_1608e8:
    // 0x1608e8: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x1608e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1608ec: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1608ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1608f0: 0x2484f3f0  addiu       $a0, $a0, -0xC10
    ctx->pc = 0x1608f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964208));
    // 0x1608f4: 0x529821  addu        $s3, $v0, $s2
    ctx->pc = 0x1608f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1608f8: 0x8662000e  lh          $v0, 0xE($s3)
    ctx->pc = 0x1608f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x1608fc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1608fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x160900: 0xc080748  jal         func_201D20
    ctx->pc = 0x160900u;
    SET_GPR_U32(ctx, 31, 0x160908u);
    ctx->pc = 0x160904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160900u;
    // 0x160904: 0x2c28821  addu        $s1, $s6, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x160900u, 0x160908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160908u;
label_160908:
    // 0x160908: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x160908u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x16090c: 0x27b700ad  addiu       $s7, $sp, 0xAD
    ctx->pc = 0x16090cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 173));
    // 0x160910: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x160910u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x160914: 0x27be00ae  addiu       $fp, $sp, 0xAE
    ctx->pc = 0x160914u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 174));
    // 0x160918: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x160918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x16091c: 0xa3a200ac  sb          $v0, 0xAC($sp)
    ctx->pc = 0x16091cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 172), (uint8_t)GPR_U32(ctx, 2));
    // 0x160920: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x160920u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x160924: 0xa2e20000  sb          $v0, 0x0($s7)
    ctx->pc = 0x160924u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x160928: 0xc07efa0  jal         func_1FBE80
    ctx->pc = 0x160928u;
    SET_GPR_U32(ctx, 31, 0x160930u);
    ctx->pc = 0x16092Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160928u;
    // 0x16092c: 0xa3c00000  sb          $zero, 0x0($fp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE80u, 0x160928u, 0x160930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160930u;
label_160930:
    // 0x160930: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x160930u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x160934: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x160934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x160938: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x160938u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x16093c: 0xa3a200ac  sb          $v0, 0xAC($sp)
    ctx->pc = 0x16093cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 172), (uint8_t)GPR_U32(ctx, 2));
    // 0x160940: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x160940u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x160944: 0xa2e20000  sb          $v0, 0x0($s7)
    ctx->pc = 0x160944u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x160948: 0xc07efa0  jal         func_1FBE80
    ctx->pc = 0x160948u;
    SET_GPR_U32(ctx, 31, 0x160950u);
    ctx->pc = 0x16094Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160948u;
    // 0x16094c: 0xa3c00000  sb          $zero, 0x0($fp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 30), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE80u, 0x160948u, 0x160950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160950u;
label_160950:
    // 0x160950: 0xa6620002  sh          $v0, 0x2($s3)
    ctx->pc = 0x160950u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x160954: 0x27a400ac  addiu       $a0, $sp, 0xAC
    ctx->pc = 0x160954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x160958: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x160958u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16095c: 0xa3a200ac  sb          $v0, 0xAC($sp)
    ctx->pc = 0x16095cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 172), (uint8_t)GPR_U32(ctx, 2));
    // 0x160960: 0xc07efa0  jal         func_1FBE80
    ctx->pc = 0x160960u;
    SET_GPR_U32(ctx, 31, 0x160968u);
    ctx->pc = 0x160964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160960u;
    // 0x160964: 0xa2e00000  sb          $zero, 0x0($s7) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE80u, 0x160960u, 0x160968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160968u;
label_160968:
    // 0x160968: 0xa6620004  sh          $v0, 0x4($s3)
    ctx->pc = 0x160968u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x16096c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16096cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x160970: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x160970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x160974: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x160974u;
    {
        const bool branch_taken_0x160974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160974u;
        // 0x160978: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160974) {
            ctx->pc = 0x1608E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1608e8;
        }
    }
    ctx->pc = 0x16097Cu;
}
