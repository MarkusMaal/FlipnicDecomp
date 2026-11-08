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

// Function: FUN_001e4210
// Address: 0x1e4210 - 0x1e4370
void FUN_001e4210_0x1e4210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e4210_0x1e4210");
#endif

    switch (ctx->pc) {
        case 0x1e4210u: goto label_1e4210;
        case 0x1e4214u: goto label_1e4214;
        case 0x1e4218u: goto label_1e4218;
        case 0x1e421cu: goto label_1e421c;
        case 0x1e4220u: goto label_1e4220;
        case 0x1e4224u: goto label_1e4224;
        case 0x1e4228u: goto label_1e4228;
        case 0x1e422cu: goto label_1e422c;
        case 0x1e4230u: goto label_1e4230;
        case 0x1e4234u: goto label_1e4234;
        case 0x1e4238u: goto label_1e4238;
        case 0x1e423cu: goto label_1e423c;
        case 0x1e4240u: goto label_1e4240;
        case 0x1e4244u: goto label_1e4244;
        case 0x1e4248u: goto label_1e4248;
        case 0x1e424cu: goto label_1e424c;
        case 0x1e4250u: goto label_1e4250;
        case 0x1e4254u: goto label_1e4254;
        case 0x1e4258u: goto label_1e4258;
        case 0x1e425cu: goto label_1e425c;
        case 0x1e4260u: goto label_1e4260;
        case 0x1e4264u: goto label_1e4264;
        case 0x1e4268u: goto label_1e4268;
        case 0x1e426cu: goto label_1e426c;
        case 0x1e4270u: goto label_1e4270;
        case 0x1e4274u: goto label_1e4274;
        case 0x1e4278u: goto label_1e4278;
        case 0x1e427cu: goto label_1e427c;
        case 0x1e4280u: goto label_1e4280;
        case 0x1e4284u: goto label_1e4284;
        case 0x1e4288u: goto label_1e4288;
        case 0x1e428cu: goto label_1e428c;
        case 0x1e4290u: goto label_1e4290;
        case 0x1e4294u: goto label_1e4294;
        case 0x1e4298u: goto label_1e4298;
        case 0x1e429cu: goto label_1e429c;
        case 0x1e42a0u: goto label_1e42a0;
        case 0x1e42a4u: goto label_1e42a4;
        case 0x1e42a8u: goto label_1e42a8;
        case 0x1e42acu: goto label_1e42ac;
        case 0x1e42b0u: goto label_1e42b0;
        case 0x1e42b4u: goto label_1e42b4;
        case 0x1e42b8u: goto label_1e42b8;
        case 0x1e42bcu: goto label_1e42bc;
        case 0x1e42c0u: goto label_1e42c0;
        case 0x1e42c4u: goto label_1e42c4;
        case 0x1e42c8u: goto label_1e42c8;
        case 0x1e42ccu: goto label_1e42cc;
        case 0x1e42d0u: goto label_1e42d0;
        case 0x1e42d4u: goto label_1e42d4;
        case 0x1e42d8u: goto label_1e42d8;
        case 0x1e42dcu: goto label_1e42dc;
        case 0x1e42e0u: goto label_1e42e0;
        case 0x1e42e4u: goto label_1e42e4;
        case 0x1e42e8u: goto label_1e42e8;
        case 0x1e42ecu: goto label_1e42ec;
        case 0x1e42f0u: goto label_1e42f0;
        case 0x1e42f4u: goto label_1e42f4;
        case 0x1e42f8u: goto label_1e42f8;
        case 0x1e42fcu: goto label_1e42fc;
        case 0x1e4300u: goto label_1e4300;
        case 0x1e4304u: goto label_1e4304;
        case 0x1e4308u: goto label_1e4308;
        case 0x1e430cu: goto label_1e430c;
        case 0x1e4310u: goto label_1e4310;
        case 0x1e4314u: goto label_1e4314;
        case 0x1e4318u: goto label_1e4318;
        case 0x1e431cu: goto label_1e431c;
        case 0x1e4320u: goto label_1e4320;
        case 0x1e4324u: goto label_1e4324;
        case 0x1e4328u: goto label_1e4328;
        case 0x1e432cu: goto label_1e432c;
        case 0x1e4330u: goto label_1e4330;
        case 0x1e4334u: goto label_1e4334;
        case 0x1e4338u: goto label_1e4338;
        case 0x1e433cu: goto label_1e433c;
        case 0x1e4340u: goto label_1e4340;
        case 0x1e4344u: goto label_1e4344;
        case 0x1e4348u: goto label_1e4348;
        case 0x1e434cu: goto label_1e434c;
        case 0x1e4350u: goto label_1e4350;
        case 0x1e4354u: goto label_1e4354;
        case 0x1e4358u: goto label_1e4358;
        case 0x1e435cu: goto label_1e435c;
        case 0x1e4360u: goto label_1e4360;
        case 0x1e4364u: goto label_1e4364;
        case 0x1e4368u: goto label_1e4368;
        case 0x1e436cu: goto label_1e436c;
        default: break;
    }

    ctx->pc = 0x1e4210u;

label_1e4210:
    // 0x1e4210: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e4210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1e4214:
    // 0x1e4214: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e4214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_1e4218:
    // 0x1e4218: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e4218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1e421c:
    // 0x1e421c: 0x2442c1f0  addiu       $v0, $v0, -0x3E10
    ctx->pc = 0x1e421cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951408));
label_1e4220:
    // 0x1e4220: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1e4220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_1e4224:
    // 0x1e4224: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e4224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e4228:
    // 0x1e4228: 0x3a0f021  addu        $fp, $sp, $zero
    ctx->pc = 0x1e4228u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 0)));
label_1e422c:
    // 0x1e422c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e422cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e4230:
    // 0x1e4230: 0xafc4004c  sw          $a0, 0x4C($fp)
    ctx->pc = 0x1e4230u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 76), GPR_U32(ctx, 4));
label_1e4234:
    // 0x1e4234: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e4234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e4238:
    // 0x1e4238: 0x8fd1004c  lw          $s1, 0x4C($fp)
    ctx->pc = 0x1e4238u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
label_1e423c:
    // 0x1e423c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e423cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e4240:
    // 0x1e4240: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1e4240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1e4244:
    // 0x1e4244: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1e4244u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1e4248:
    // 0x1e4248: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1e4248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1e424c:
    // 0x1e424c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1e424cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_1e4250:
    // 0x1e4250: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1e4250u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_1e4254:
    // 0x1e4254: 0xc07a284  jal         func_1E8A10
label_1e4258:
    if (ctx->pc == 0x1E4258u) {
        ctx->pc = 0x1E4258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4254u;
        // 0x1e4258: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E425Cu;
        goto label_1e425c;
    }
    ctx->pc = 0x1E4254u;
    SET_GPR_U32(ctx, 31, 0x1E425Cu);
    ctx->pc = 0x1E4258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4254u;
    // 0x1e4258: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8A10u, 0x1E4254u, 0x1E425Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E425Cu;
label_1e425c:
    // 0x1e425c: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x1e425cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_1e4260:
    // 0x1e4260: 0xc04814c  jal         func_120530
label_1e4264:
    if (ctx->pc == 0x1E4264u) {
        ctx->pc = 0x1E4264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4260u;
        // 0x1e4264: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4268u;
        goto label_1e4268;
    }
    ctx->pc = 0x1E4260u;
    SET_GPR_U32(ctx, 31, 0x1E4268u);
    ctx->pc = 0x1E4264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4260u;
    // 0x1e4264: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120530u, 0x1E4260u, 0x1E4268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4268u;
label_1e4268:
    // 0x1e4268: 0x8fc2004c  lw          $v0, 0x4C($fp)
    ctx->pc = 0x1e4268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
label_1e426c:
    // 0x1e426c: 0x3c050023  lui         $a1, 0x23
    ctx->pc = 0x1e426cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
label_1e4270:
    // 0x1e4270: 0x24a5c230  addiu       $a1, $a1, -0x3DD0
    ctx->pc = 0x1e4270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951472));
label_1e4274:
    // 0x1e4274: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e4274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4278:
    // 0x1e4278: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1e4278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_1e427c:
    // 0x1e427c: 0x8fc2004c  lw          $v0, 0x4C($fp)
    ctx->pc = 0x1e427cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
label_1e4280:
    // 0x1e4280: 0xac500024  sw          $s0, 0x24($v0)
    ctx->pc = 0x1e4280u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 16));
label_1e4284:
    // 0x1e4284: 0x8fc2004c  lw          $v0, 0x4C($fp)
    ctx->pc = 0x1e4284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
label_1e4288:
    // 0x1e4288: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1e4288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_1e428c:
    // 0x1e428c: 0x8fc2004c  lw          $v0, 0x4C($fp)
    ctx->pc = 0x1e428cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
label_1e4290:
    // 0x1e4290: 0xa0400040  sb          $zero, 0x40($v0)
    ctx->pc = 0x1e4290u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 64), (uint8_t)GPR_U32(ctx, 0));
label_1e4294:
    // 0x1e4294: 0x8fc2004c  lw          $v0, 0x4C($fp)
    ctx->pc = 0x1e4294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
label_1e4298:
    // 0x1e4298: 0xa0430042  sb          $v1, 0x42($v0)
    ctx->pc = 0x1e4298u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 66), (uint8_t)GPR_U32(ctx, 3));
label_1e429c:
    // 0x1e429c: 0x8fc5004c  lw          $a1, 0x4C($fp)
    ctx->pc = 0x1e429cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
label_1e42a0:
    // 0x1e42a0: 0xc078d04  jal         func_1E3410
label_1e42a4:
    if (ctx->pc == 0x1E42A4u) {
        ctx->pc = 0x1E42A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E42A0u;
        // 0x1e42a4: 0x27c40070  addiu       $a0, $fp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E42A8u;
        goto label_1e42a8;
    }
    ctx->pc = 0x1E42A0u;
    SET_GPR_U32(ctx, 31, 0x1E42A8u);
    ctx->pc = 0x1E42A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E42A0u;
    // 0x1e42a4: 0x27c40070  addiu       $a0, $fp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3410u, 0x1E42A0u, 0x1E42A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E42A8u;
label_1e42a8:
    // 0x1e42a8: 0x9382874c  lbu         $v0, -0x78B4($gp)
    ctx->pc = 0x1e42a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936396)));
label_1e42ac:
    // 0x1e42ac: 0x27c3007c  addiu       $v1, $fp, 0x7C
    ctx->pc = 0x1e42acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 124));
label_1e42b0:
    // 0x1e42b0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1e42b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1e42b4:
    // 0x1e42b4: 0x83c5007c  lb          $a1, 0x7C($fp)
    ctx->pc = 0x1e42b4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 124)));
label_1e42b8:
    // 0x1e42b8: 0xc079788  jal         func_1E5E20
label_1e42bc:
    if (ctx->pc == 0x1E42BCu) {
        ctx->pc = 0x1E42BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E42B8u;
        // 0x1e42bc: 0x27c40070  addiu       $a0, $fp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E42C0u;
        goto label_1e42c0;
    }
    ctx->pc = 0x1E42B8u;
    SET_GPR_U32(ctx, 31, 0x1E42C0u);
    ctx->pc = 0x1E42BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E42B8u;
    // 0x1e42bc: 0x27c40070  addiu       $a0, $fp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5E20u, 0x1E42B8u, 0x1E42C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E42C0u;
label_1e42c0:
    // 0x1e42c0: 0x8fc3004c  lw          $v1, 0x4C($fp)
    ctx->pc = 0x1e42c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
label_1e42c4:
    // 0x1e42c4: 0x27d00074  addiu       $s0, $fp, 0x74
    ctx->pc = 0x1e42c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 116));
label_1e42c8:
    // 0x1e42c8: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x1e42c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_1e42cc:
    // 0x1e42cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e42ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e42d0:
    // 0x1e42d0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1e42d4:
    if (ctx->pc == 0x1E42D4u) {
        ctx->pc = 0x1E42D8u;
        goto label_1e42d8;
    }
    ctx->pc = 0x1E42D0u;
    {
        const bool branch_taken_0x1e42d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e42d0) {
            ctx->pc = 0x1E42FCu;
            goto label_1e42fc;
        }
    }
    ctx->pc = 0x1E42D8u;
label_1e42d8:
    // 0x1e42d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e42d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e42dc:
    // 0x1e42dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e42dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e42e0:
    // 0x1e42e0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1e42e4:
    if (ctx->pc == 0x1E42E4u) {
        ctx->pc = 0x1E42E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E42E0u;
        // 0x1e42e4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E42E8u;
        goto label_1e42e8;
    }
    ctx->pc = 0x1E42E0u;
    {
        const bool branch_taken_0x1e42e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E42E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E42E0u;
        // 0x1e42e4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e42e0) {
            ctx->pc = 0x1E42FCu;
            goto label_1e42fc;
        }
    }
    ctx->pc = 0x1E42E8u;
label_1e42e8:
    // 0x1e42e8: 0x8fc40070  lw          $a0, 0x70($fp)
    ctx->pc = 0x1e42e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 112)));
label_1e42ec:
    // 0x1e42ec: 0xc0483d8  jal         func_120F60
label_1e42f0:
    if (ctx->pc == 0x1E42F0u) {
        ctx->pc = 0x1E42F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E42ECu;
        // 0x1e42f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E42F4u;
        goto label_1e42f4;
    }
    ctx->pc = 0x1E42ECu;
    SET_GPR_U32(ctx, 31, 0x1E42F4u);
    ctx->pc = 0x1E42F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E42ECu;
    // 0x1e42f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120F60u, 0x1E42ECu, 0x1E42F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E42F4u;
label_1e42f4:
    // 0x1e42f4: 0xc0401a4  jal         func_100690
label_1e42f8:
    if (ctx->pc == 0x1E42F8u) {
        ctx->pc = 0x1E42F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E42F4u;
        // 0x1e42f8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E42FCu;
        goto label_1e42fc;
    }
    ctx->pc = 0x1E42F4u;
    SET_GPR_U32(ctx, 31, 0x1E42FCu);
    ctx->pc = 0x1E42F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E42F4u;
    // 0x1e42f8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1E42F4u, 0x1E42FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E42FCu;
label_1e42fc:
    // 0x1e42fc: 0x8fc2004c  lw          $v0, 0x4C($fp)
    ctx->pc = 0x1e42fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
label_1e4300:
    // 0x1e4300: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x1e4300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1e4304:
    // 0x1e4304: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e4304u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e4308:
    // 0x1e4308: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1e4308u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1e430c:
    // 0x1e430c: 0x320f809  jalr        $t9
label_1e4310:
    if (ctx->pc == 0x1E4310u) {
        ctx->pc = 0x1E4314u;
        goto label_1e4314;
    }
    ctx->pc = 0x1E430Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E4314u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E430Cu, 0x1E4314u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E4314u;
label_1e4314:
    // 0x1e4314: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e4318:
    if (ctx->pc == 0x1E4318u) {
        ctx->pc = 0x1E4318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4314u;
        // 0x1e4318: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E431Cu;
        goto label_1e431c;
    }
    ctx->pc = 0x1E4314u;
    {
        const bool branch_taken_0x1e4314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4314u;
        // 0x1e4318: 0x304300ff  andi        $v1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4314) {
            ctx->pc = 0x1E4344u;
            goto label_1e4344;
        }
    }
    ctx->pc = 0x1E431Cu;
label_1e431c:
    // 0x1e431c: 0xc07a704  jal         func_1E9C10
label_1e4320:
    if (ctx->pc == 0x1E4320u) {
        ctx->pc = 0x1E4320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E431Cu;
        // 0x1e4320: 0x27c40050  addiu       $a0, $fp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4324u;
        goto label_1e4324;
    }
    ctx->pc = 0x1E431Cu;
    SET_GPR_U32(ctx, 31, 0x1E4324u);
    ctx->pc = 0x1E4320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E431Cu;
    // 0x1e4320: 0x27c40050  addiu       $a0, $fp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9C10u, 0x1E431Cu, 0x1E4324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4324u;
label_1e4324:
    // 0x1e4324: 0x0  nop
    ctx->pc = 0x1e4324u;
    // NOP
label_1e4328:
    // 0x1e4328: 0x0  nop
    ctx->pc = 0x1e4328u;
    // NOP
label_1e432c:
    // 0x1e432c: 0x0  nop
    ctx->pc = 0x1e432cu;
    // NOP
label_1e4330:
    // 0x1e4330: 0x0  nop
    ctx->pc = 0x1e4330u;
    // NOP
label_1e4334:
    // 0x1e4334: 0x0  nop
    ctx->pc = 0x1e4334u;
    // NOP
label_1e4338:
    // 0x1e4338: 0x0  nop
    ctx->pc = 0x1e4338u;
    // NOP
label_1e433c:
    // 0x1e433c: 0x1000fff9  b           . + 4 + (-0x7 << 2)
label_1e4340:
    if (ctx->pc == 0x1E4340u) {
        ctx->pc = 0x1E4344u;
        goto label_1e4344;
    }
    ctx->pc = 0x1E433Cu;
    {
        const bool branch_taken_0x1e433c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e433c) {
            ctx->pc = 0x1E4324u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4324;
        }
    }
    ctx->pc = 0x1E4344u;
label_1e4344:
    // 0x1e4344: 0x0  nop
    ctx->pc = 0x1e4344u;
    // NOP
label_1e4348:
    // 0x1e4348: 0x8fc2004c  lw          $v0, 0x4C($fp)
    ctx->pc = 0x1e4348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
label_1e434c:
    // 0x1e434c: 0xa0430041  sb          $v1, 0x41($v0)
    ctx->pc = 0x1e434cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 65), (uint8_t)GPR_U32(ctx, 3));
label_1e4350:
    // 0x1e4350: 0x8fc2004c  lw          $v0, 0x4C($fp)
    ctx->pc = 0x1e4350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 76)));
label_1e4354:
    // 0x1e4354: 0x3c0e821  addu        $sp, $fp, $zero
    ctx->pc = 0x1e4354u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
label_1e4358:
    // 0x1e4358: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e4358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e435c:
    // 0x1e435c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e435cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4360:
    // 0x1e4360: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4364:
    // 0x1e4364: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1e4364u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e4368:
    // 0x1e4368: 0x3e00008  jr          $ra
label_1e436c:
    if (ctx->pc == 0x1E436Cu) {
        ctx->pc = 0x1E436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4368u;
        // 0x1e436c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4370u;
        goto label_fallthrough_0x1e4368;
    }
    ctx->pc = 0x1E4368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4368u;
        // 0x1e436c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e4368:
    ctx->pc = 0x1E4370u;
}
