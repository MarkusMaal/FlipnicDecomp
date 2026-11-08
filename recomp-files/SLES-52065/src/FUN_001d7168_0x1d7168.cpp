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

// Function: FUN_001d7168
// Address: 0x1d7168 - 0x1d7790
void FUN_001d7168_0x1d7168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d7168_0x1d7168");
#endif

    switch (ctx->pc) {
        case 0x1d7204u: goto label_1d7204;
        case 0x1d7218u: goto label_1d7218;
        case 0x1d7284u: goto label_1d7284;
        case 0x1d7298u: goto label_1d7298;
        case 0x1d72c0u: goto label_1d72c0;
        case 0x1d72dcu: goto label_1d72dc;
        case 0x1d7304u: goto label_1d7304;
        case 0x1d7310u: goto label_1d7310;
        case 0x1d732cu: goto label_1d732c;
        case 0x1d7374u: goto label_1d7374;
        case 0x1d7390u: goto label_1d7390;
        case 0x1d73a0u: goto label_1d73a0;
        case 0x1d73acu: goto label_1d73ac;
        case 0x1d73c8u: goto label_1d73c8;
        case 0x1d73d4u: goto label_1d73d4;
        case 0x1d740cu: goto label_1d740c;
        case 0x1d7420u: goto label_1d7420;
        case 0x1d7454u: goto label_1d7454;
        case 0x1d7468u: goto label_1d7468;
        case 0x1d74b4u: goto label_1d74b4;
        case 0x1d74ecu: goto label_1d74ec;
        case 0x1d7544u: goto label_1d7544;
        case 0x1d7560u: goto label_1d7560;
        case 0x1d7580u: goto label_1d7580;
        case 0x1d7590u: goto label_1d7590;
        case 0x1d75acu: goto label_1d75ac;
        case 0x1d75c8u: goto label_1d75c8;
        case 0x1d75d8u: goto label_1d75d8;
        case 0x1d75e8u: goto label_1d75e8;
        case 0x1d75f8u: goto label_1d75f8;
        case 0x1d7604u: goto label_1d7604;
        case 0x1d7614u: goto label_1d7614;
        case 0x1d7620u: goto label_1d7620;
        case 0x1d762cu: goto label_1d762c;
        case 0x1d7680u: goto label_1d7680;
        case 0x1d768cu: goto label_1d768c;
        case 0x1d7698u: goto label_1d7698;
        case 0x1d76c4u: goto label_1d76c4;
        default: break;
    }

    ctx->pc = 0x1d7168u;

    // 0x1d7168: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d7168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d716c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d716cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d7170: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7174: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d7174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d7178: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d7178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d717c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d717cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d7180: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d7180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d7184: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d7184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1d7188: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1d7188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1d718c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1d718cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1d7190: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1d7190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x1d7194: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1d7194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1d7198: 0x8c47054c  lw          $a3, 0x54C($v0)
    ctx->pc = 0x1d7198u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x37054Cu));
    // 0x1d719c: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x1d719cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d71a0: 0x90e20002  lbu         $v0, 0x2($a3)
    ctx->pc = 0x1d71a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1d71a4: 0x1040015c  beqz        $v0, . + 4 + (0x15C << 2)
    ctx->pc = 0x1D71A4u;
    {
        const bool branch_taken_0x1d71a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D71A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D71A4u;
        // 0x1d71a8: 0x3063000f  andi        $v1, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d71a4) {
            ctx->pc = 0x1D7718u;
            goto label_1d7718;
        }
    }
    ctx->pc = 0x1D71ACu;
    // 0x1d71ac: 0x380c0  sll         $s0, $v1, 3
    ctx->pc = 0x1d71acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d71b0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d71b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d71b4: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x1d71b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1d71b8: 0x24570550  addiu       $s7, $v0, 0x550
    ctx->pc = 0x1d71b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d71bc: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1d71bcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d71c0: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x1d71c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1d71c4: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1d71c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1d71c8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d71c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d71cc: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1d71ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d71d0: 0x8c430548  lw          $v1, 0x548($v0)
    ctx->pc = 0x1d71d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1352)));
    // 0x1d71d4: 0xb08821  addu        $s1, $a1, $s0
    ctx->pc = 0x1d71d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1d71d8: 0x263102a4  addiu       $s1, $s1, 0x2A4
    ctx->pc = 0x1d71d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 676));
    // 0x1d71dc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1d71dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1d71e0: 0x90e20001  lbu         $v0, 0x1($a3)
    ctx->pc = 0x1d71e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x1d71e4: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x1d71e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x1d71e8: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x1d71e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1d71ec: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x1d71ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x1d71f0: 0x90e20003  lbu         $v0, 0x3($a3)
    ctx->pc = 0x1d71f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x1d71f4: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x1d71f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x1d71f8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1d71f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d71fc: 0xc0783d0  jal         func_1E0F40
    ctx->pc = 0x1D71FCu;
    SET_GPR_U32(ctx, 31, 0x1D7204u);
    ctx->pc = 0x1D7200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71FCu;
    // 0x1d7200: 0x90e50003  lbu         $a1, 0x3($a3) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0F40u, 0x1D71FCu, 0x1D7204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7204u;
label_1d7204:
    // 0x1d7204: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x1d7204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1d7208: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x1d7208u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
    // 0x1d720c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1d720cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1d7210: 0xc078422  jal         func_1E1088
    ctx->pc = 0x1D7210u;
    SET_GPR_U32(ctx, 31, 0x1D7218u);
    ctx->pc = 0x1D7214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7210u;
    // 0x1d7214: 0x8e040310  lw          $a0, 0x310($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 784)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1088u, 0x1D7210u, 0x1D7218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7218u;
label_1d7218:
    // 0x1d7218: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x1d7218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1d721c: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x1d721cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
    // 0x1d7220: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d7220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7224: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x1d7224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1d7228: 0x1043014d  beq         $v0, $v1, . + 4 + (0x14D << 2)
    ctx->pc = 0x1D7228u;
    {
        const bool branch_taken_0x1d7228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7228u;
        // 0x1d722c: 0x249502a4  addiu       $s5, $a0, 0x2A4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 676));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7228) {
            ctx->pc = 0x1D7760u;
            goto label_1d7760;
        }
    }
    ctx->pc = 0x1D7230u;
    // 0x1d7230: 0x8eb3006c  lw          $s3, 0x6C($s5)
    ctx->pc = 0x1d7230u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
    // 0x1d7234: 0x5260014b  beql        $s3, $zero, . + 4 + (0x14B << 2)
    ctx->pc = 0x1D7234u;
    {
        const bool branch_taken_0x1d7234 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7234) {
            ctx->pc = 0x1D7238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7234u;
            // 0x1d7238: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7764u;
            goto label_1d7764;
        }
    }
    ctx->pc = 0x1D723Cu;
    // 0x1d723c: 0x8eb60070  lw          $s6, 0x70($s5)
    ctx->pc = 0x1d723cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x1d7240: 0x52c00148  beql        $s6, $zero, . + 4 + (0x148 << 2)
    ctx->pc = 0x1D7240u;
    {
        const bool branch_taken_0x1d7240 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7240) {
            ctx->pc = 0x1D7244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7240u;
            // 0x1d7244: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7764u;
            goto label_1d7764;
        }
    }
    ctx->pc = 0x1D7248u;
    // 0x1d7248: 0x8eb1001c  lw          $s1, 0x1C($s5)
    ctx->pc = 0x1d7248u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1d724c: 0x92630006  lbu         $v1, 0x6($s3)
    ctx->pc = 0x1d724cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x1d7250: 0x711023  subu        $v0, $v1, $s1
    ctx->pc = 0x1d7250u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d7254: 0x5c400143  bgtzl       $v0, . + 4 + (0x143 << 2)
    ctx->pc = 0x1D7254u;
    {
        const bool branch_taken_0x1d7254 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1d7254) {
            ctx->pc = 0x1D7258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7254u;
            // 0x1d7258: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7764u;
            goto label_1d7764;
        }
    }
    ctx->pc = 0x1D725Cu;
    // 0x1d725c: 0x2231023  subu        $v0, $s1, $v1
    ctx->pc = 0x1d725cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d7260: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d7260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d7264: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x1d7264u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1d7268: 0xaeb60070  sw          $s6, 0x70($s5)
    ctx->pc = 0x1d7268u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 112), GPR_U32(ctx, 22));
    // 0x1d726c: 0x92d20000  lbu         $s2, 0x0($s6)
    ctx->pc = 0x1d726cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1d7270: 0x52400005  beql        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7270u;
    {
        const bool branch_taken_0x1d7270 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7270) {
            ctx->pc = 0x1D7274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7270u;
            // 0x1d7274: 0x8ee20000  lw          $v0, 0x0($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7288u;
            goto label_1d7288;
        }
    }
    ctx->pc = 0x1D7278u;
    // 0x1d7278: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1d7278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d727c: 0xc0777ac  jal         func_1DDEB0
    ctx->pc = 0x1D727Cu;
    SET_GPR_U32(ctx, 31, 0x1D7284u);
    ctx->pc = 0x1D7280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D727Cu;
    // 0x1d7280: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDEB0u, 0x1D727Cu, 0x1D7284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7284u;
label_1d7284:
    // 0x1d7284: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1d7284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1d7288:
    // 0x1d7288: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x1d7288u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d728c: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x1d728cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1d7290: 0xc076986  jal         func_1DA618
    ctx->pc = 0x1D7290u;
    SET_GPR_U32(ctx, 31, 0x1D7298u);
    ctx->pc = 0x1D7294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7290u;
    // 0x1d7294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA618u, 0x1D7290u, 0x1D7298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7298u;
label_1d7298:
    // 0x1d7298: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d7298u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d729c: 0x169e0011  bne         $s4, $fp, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D729Cu;
    {
        const bool branch_taken_0x1d729c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 30));
        ctx->pc = 0x1D72A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D729Cu;
        // 0x1d72a0: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d729c) {
            ctx->pc = 0x1D72E4u;
            goto label_1d72e4;
        }
    }
    ctx->pc = 0x1D72A4u;
    // 0x1d72a4: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1d72a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1d72a8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1d72a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d72ac: 0x8ea70040  lw          $a3, 0x40($s5)
    ctx->pc = 0x1d72acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x1d72b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d72b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d72b4: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1d72b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d72b8: 0xc076ede  jal         func_1DBB78
    ctx->pc = 0x1D72B8u;
    SET_GPR_U32(ctx, 31, 0x1D72C0u);
    ctx->pc = 0x1D72BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D72B8u;
    // 0x1d72bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB78u, 0x1D72B8u, 0x1D72C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D72C0u;
label_1d72c0:
    // 0x1d72c0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d72c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d72c4: 0x169e0007  bne         $s4, $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D72C4u;
    {
        const bool branch_taken_0x1d72c4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 30));
        ctx->pc = 0x1D72C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D72C4u;
        // 0x1d72c8: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d72c4) {
            ctx->pc = 0x1D72E4u;
            goto label_1d72e4;
        }
    }
    ctx->pc = 0x1D72CCu;
    // 0x1d72cc: 0x92c60001  lbu         $a2, 0x1($s6)
    ctx->pc = 0x1d72ccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
    // 0x1d72d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d72d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d72d4: 0xc076b92  jal         func_1DAE48
    ctx->pc = 0x1D72D4u;
    SET_GPR_U32(ctx, 31, 0x1D72DCu);
    ctx->pc = 0x1D72D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D72D4u;
    // 0x1d72d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DAE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DAE48u, 0x1D72D4u, 0x1D72DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D72DCu;
label_1d72dc:
    // 0x1d72dc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d72dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d72e0: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1d72e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1d72e4:
    // 0x1d72e4: 0x8ea80040  lw          $t0, 0x40($s5)
    ctx->pc = 0x1d72e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x1d72e8: 0x8c620550  lw          $v0, 0x550($v1)
    ctx->pc = 0x1d72e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1360)));
    // 0x1d72ec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1d72ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d72f0: 0x92c90001  lbu         $t1, 0x1($s6)
    ctx->pc = 0x1d72f0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
    // 0x1d72f4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d72f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d72f8: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1d72f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d72fc: 0xc07735c  jal         func_1DCD70
    ctx->pc = 0x1D72FCu;
    SET_GPR_U32(ctx, 31, 0x1D7304u);
    ctx->pc = 0x1D7300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D72FCu;
    // 0x1d7300: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCD70u, 0x1D72FCu, 0x1D7304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7304u;
label_1d7304:
    // 0x1d7304: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d7304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7308: 0xc0773ae  jal         func_1DCEB8
    ctx->pc = 0x1D7308u;
    SET_GPR_U32(ctx, 31, 0x1D7310u);
    ctx->pc = 0x1D730Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7308u;
    // 0x1d730c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCEB8u, 0x1D7308u, 0x1D7310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7310u;
label_1d7310:
    // 0x1d7310: 0x92c3000f  lbu         $v1, 0xF($s6)
    ctx->pc = 0x1d7310u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 15)));
    // 0x1d7314: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1d7314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1d7318: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d7318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d731c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D731Cu;
    {
        const bool branch_taken_0x1d731c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d731c) {
            ctx->pc = 0x1D7320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D731Cu;
            // 0x1d7320: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7334u;
            goto label_1d7334;
        }
    }
    ctx->pc = 0x1D7324u;
    // 0x1d7324: 0xc07752e  jal         func_1DD4B8
    ctx->pc = 0x1D7324u;
    SET_GPR_U32(ctx, 31, 0x1D732Cu);
    ctx->pc = 0x1D7328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7324u;
    // 0x1d7328: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD4B8u, 0x1D7324u, 0x1D732Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D732Cu;
label_1d732c:
    // 0x1d732c: 0x92c3000f  lbu         $v1, 0xF($s6)
    ctx->pc = 0x1d732cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 15)));
    // 0x1d7330: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x1d7330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_1d7334:
    // 0x1d7334: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7334u;
    {
        const bool branch_taken_0x1d7334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7334) {
            ctx->pc = 0x1D7338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7334u;
            // 0x1d7338: 0x92650005  lbu         $a1, 0x5($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7340u;
            goto label_1d7340;
        }
    }
    ctx->pc = 0x1D733Cu;
    // 0x1d733c: 0x92c5000e  lbu         $a1, 0xE($s6)
    ctx->pc = 0x1d733cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 14)));
label_1d7340:
    // 0x1d7340: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d7340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d7344: 0x8c440550  lw          $a0, 0x550($v0)
    ctx->pc = 0x1d7344u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x370550u));
    // 0x1d7348: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x1d7348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1d734c: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D734Cu;
    {
        const bool branch_taken_0x1d734c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D7350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D734Cu;
        // 0x1d7350: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d734c) {
            ctx->pc = 0x1D737Cu;
            goto label_1d737c;
        }
    }
    ctx->pc = 0x1D7354u;
    // 0x1d7354: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x1d7354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1d7358: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1d7358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1d735c: 0x8c86004c  lw          $a2, 0x4C($a0)
    ctx->pc = 0x1d735cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1d7360: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d7360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7364: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d7364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d7368: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x1d7368u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d736c: 0xc077546  jal         func_1DD518
    ctx->pc = 0x1D736Cu;
    SET_GPR_U32(ctx, 31, 0x1D7374u);
    ctx->pc = 0x1D7370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D736Cu;
    // 0x1d7370: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD518u, 0x1D736Cu, 0x1D7374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7374u;
label_1d7374:
    // 0x1d7374: 0x92c3000f  lbu         $v1, 0xF($s6)
    ctx->pc = 0x1d7374u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 15)));
    // 0x1d7378: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1d7378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_1d737c:
    // 0x1d737c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D737Cu;
    {
        const bool branch_taken_0x1d737c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d737c) {
            ctx->pc = 0x1D7380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D737Cu;
            // 0x1d7380: 0x92c5000d  lbu         $a1, 0xD($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 13)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7398u;
            goto label_1d7398;
        }
    }
    ctx->pc = 0x1D7384u;
    // 0x1d7384: 0x92650004  lbu         $a1, 0x4($s3)
    ctx->pc = 0x1d7384u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1d7388: 0xc077488  jal         func_1DD220
    ctx->pc = 0x1D7388u;
    SET_GPR_U32(ctx, 31, 0x1D7390u);
    ctx->pc = 0x1D738Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7388u;
    // 0x1d738c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD220u, 0x1D7388u, 0x1D7390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7390u;
label_1d7390:
    // 0x1d7390: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D7390u;
    {
        const bool branch_taken_0x1d7390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7390u;
        // 0x1d7394: 0x8ea50034  lw          $a1, 0x34($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7390) {
            ctx->pc = 0x1D73A4u;
            goto label_1d73a4;
        }
    }
    ctx->pc = 0x1D7398u;
label_1d7398:
    // 0x1d7398: 0xc077488  jal         func_1DD220
    ctx->pc = 0x1D7398u;
    SET_GPR_U32(ctx, 31, 0x1D73A0u);
    ctx->pc = 0x1D739Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7398u;
    // 0x1d739c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD220u, 0x1D7398u, 0x1D73A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D73A0u;
label_1d73a0:
    // 0x1d73a0: 0x8ea50034  lw          $a1, 0x34($s5)
    ctx->pc = 0x1d73a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
label_1d73a4:
    // 0x1d73a4: 0xc077492  jal         func_1DD248
    ctx->pc = 0x1D73A4u;
    SET_GPR_U32(ctx, 31, 0x1D73ACu);
    ctx->pc = 0x1D73A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D73A4u;
    // 0x1d73a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD248u, 0x1D73A4u, 0x1D73ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D73ACu;
label_1d73ac:
    // 0x1d73ac: 0x92c3000f  lbu         $v1, 0xF($s6)
    ctx->pc = 0x1d73acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 15)));
    // 0x1d73b0: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1d73b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1d73b4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D73B4u;
    {
        const bool branch_taken_0x1d73b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d73b4) {
            ctx->pc = 0x1D73B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D73B4u;
            // 0x1d73b8: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D73DCu;
            goto label_1d73dc;
        }
    }
    ctx->pc = 0x1D73BCu;
    // 0x1d73bc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1d73bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d73c0: 0xc07755a  jal         func_1DD568
    ctx->pc = 0x1D73C0u;
    SET_GPR_U32(ctx, 31, 0x1D73C8u);
    ctx->pc = 0x1D73C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D73C0u;
    // 0x1d73c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD568u, 0x1D73C0u, 0x1D73C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D73C8u;
label_1d73c8:
    // 0x1d73c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d73c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d73cc: 0xc07758e  jal         func_1DD638
    ctx->pc = 0x1D73CCu;
    SET_GPR_U32(ctx, 31, 0x1D73D4u);
    ctx->pc = 0x1D73D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D73CCu;
    // 0x1d73d0: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD638u, 0x1D73CCu, 0x1D73D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D73D4u;
label_1d73d4:
    // 0x1d73d4: 0x92c3000f  lbu         $v1, 0xF($s6)
    ctx->pc = 0x1d73d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 15)));
    // 0x1d73d8: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1d73d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1d73dc:
    // 0x1d73dc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D73DCu;
    {
        const bool branch_taken_0x1d73dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D73E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73DCu;
        // 0x1d73e0: 0x2a970018  slti        $s7, $s4, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d73dc) {
            ctx->pc = 0x1D7428u;
            goto label_1d7428;
        }
    }
    ctx->pc = 0x1D73E4u;
    // 0x1d73e4: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D73E4u;
    {
        const bool branch_taken_0x1d73e4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D73E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73E4u;
        // 0x1d73e8: 0x3ae40001  xori        $a0, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d73e4) {
            ctx->pc = 0x1D73F8u;
            goto label_1d73f8;
        }
    }
    ctx->pc = 0x1D73ECu;
    // 0x1d73ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d73ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d73f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D73F0u;
    {
        const bool branch_taken_0x1d73f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D73F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73F0u;
        // 0x1d73f4: 0x2822804  sllv        $a1, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d73f0) {
            ctx->pc = 0x1D7404u;
            goto label_1d7404;
        }
    }
    ctx->pc = 0x1D73F8u;
label_1d73f8:
    // 0x1d73f8: 0x2683ffe8  addiu       $v1, $s4, -0x18
    ctx->pc = 0x1d73f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967272));
    // 0x1d73fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d73fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7400: 0x622804  sllv        $a1, $v0, $v1
    ctx->pc = 0x1d7400u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_1d7404:
    // 0x1d7404: 0xc077868  jal         func_1DE1A0
    ctx->pc = 0x1D7404u;
    SET_GPR_U32(ctx, 31, 0x1D740Cu);
    ctx->pc = 0x1DE1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE1A0u, 0x1D7404u, 0x1D740Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D740Cu;
label_1d740c:
    // 0x1d740c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1d740cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d7410: 0x92c70002  lbu         $a3, 0x2($s6)
    ctx->pc = 0x1d7410u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x1d7414: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7418: 0xc0762f0  jal         func_1D8BC0
    ctx->pc = 0x1D7418u;
    SET_GPR_U32(ctx, 31, 0x1D7420u);
    ctx->pc = 0x1D741Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7418u;
    // 0x1d741c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BC0u, 0x1D7418u, 0x1D7420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7420u;
label_1d7420:
    // 0x1d7420: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D7420u;
    {
        const bool branch_taken_0x1d7420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7420u;
        // 0x1d7424: 0x8ea20030  lw          $v0, 0x30($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7420) {
            ctx->pc = 0x1D7458u;
            goto label_1d7458;
        }
    }
    ctx->pc = 0x1D7428u;
label_1d7428:
    // 0x1d7428: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7428u;
    {
        const bool branch_taken_0x1d7428 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7428u;
        // 0x1d742c: 0x3ae40001  xori        $a0, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7428) {
            ctx->pc = 0x1D7440u;
            goto label_1d7440;
        }
    }
    ctx->pc = 0x1D7430u;
    // 0x1d7430: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d7430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7434: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7434u;
    {
        const bool branch_taken_0x1d7434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7434u;
        // 0x1d7438: 0x2822804  sllv        $a1, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7434) {
            ctx->pc = 0x1D744Cu;
            goto label_1d744c;
        }
    }
    ctx->pc = 0x1D743Cu;
    // 0x1d743c: 0x0  nop
    ctx->pc = 0x1d743cu;
    // NOP
label_1d7440:
    // 0x1d7440: 0x2683ffe8  addiu       $v1, $s4, -0x18
    ctx->pc = 0x1d7440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967272));
    // 0x1d7444: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d7444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7448: 0x622804  sllv        $a1, $v0, $v1
    ctx->pc = 0x1d7448u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_1d744c:
    // 0x1d744c: 0xc077882  jal         func_1DE208
    ctx->pc = 0x1D744Cu;
    SET_GPR_U32(ctx, 31, 0x1D7454u);
    ctx->pc = 0x1DE208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE208u, 0x1D744Cu, 0x1D7454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7454u;
label_1d7454:
    // 0x1d7454: 0x8ea20030  lw          $v0, 0x30($s5)
    ctx->pc = 0x1d7454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_1d7458:
    // 0x1d7458: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D7458u;
    {
        const bool branch_taken_0x1d7458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7458) {
            ctx->pc = 0x1D745Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7458u;
            // 0x1d745c: 0x8ea30024  lw          $v1, 0x24($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D746Cu;
            goto label_1d746c;
        }
    }
    ctx->pc = 0x1D7460u;
    // 0x1d7460: 0xc07753a  jal         func_1DD4E8
    ctx->pc = 0x1D7460u;
    SET_GPR_U32(ctx, 31, 0x1D7468u);
    ctx->pc = 0x1D7464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7460u;
    // 0x1d7464: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD4E8u, 0x1D7460u, 0x1D7468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7468u;
label_1d7468:
    // 0x1d7468: 0x8ea30024  lw          $v1, 0x24($s5)
    ctx->pc = 0x1d7468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_1d746c:
    // 0x1d746c: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x1d746cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1d7470: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7470u;
    {
        const bool branch_taken_0x1d7470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d7470) {
            ctx->pc = 0x1D7488u;
            goto label_1d7488;
        }
    }
    ctx->pc = 0x1D7478u;
    // 0x1d7478: 0x92c2000f  lbu         $v0, 0xF($s6)
    ctx->pc = 0x1d7478u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 15)));
    // 0x1d747c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1d747cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1d7480: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D7480u;
    {
        const bool branch_taken_0x1d7480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7480) {
            ctx->pc = 0x1D74C0u;
            goto label_1d74c0;
        }
    }
    ctx->pc = 0x1D7488u;
label_1d7488:
    // 0x1d7488: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7488u;
    {
        const bool branch_taken_0x1d7488 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D748Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7488u;
        // 0x1d748c: 0x3ae40001  xori        $a0, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7488) {
            ctx->pc = 0x1D74A0u;
            goto label_1d74a0;
        }
    }
    ctx->pc = 0x1D7490u;
    // 0x1d7490: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d7490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7494: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7494u;
    {
        const bool branch_taken_0x1d7494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7494u;
        // 0x1d7498: 0x2822804  sllv        $a1, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7494) {
            ctx->pc = 0x1D74ACu;
            goto label_1d74ac;
        }
    }
    ctx->pc = 0x1D749Cu;
    // 0x1d749c: 0x0  nop
    ctx->pc = 0x1d749cu;
    // NOP
label_1d74a0:
    // 0x1d74a0: 0x2683ffe8  addiu       $v1, $s4, -0x18
    ctx->pc = 0x1d74a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967272));
    // 0x1d74a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d74a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d74a8: 0x622804  sllv        $a1, $v0, $v1
    ctx->pc = 0x1d74a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_1d74ac:
    // 0x1d74ac: 0xc077832  jal         func_1DE0C8
    ctx->pc = 0x1D74ACu;
    SET_GPR_U32(ctx, 31, 0x1D74B4u);
    ctx->pc = 0x1DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE0C8u, 0x1D74ACu, 0x1D74B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D74B4u;
label_1d74b4:
    // 0x1d74b4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1D74B4u;
    {
        const bool branch_taken_0x1d74b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D74B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D74B4u;
        // 0x1d74b8: 0x96a30060  lhu         $v1, 0x60($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d74b4) {
            ctx->pc = 0x1D74F0u;
            goto label_1d74f0;
        }
    }
    ctx->pc = 0x1D74BCu;
    // 0x1d74bc: 0x0  nop
    ctx->pc = 0x1d74bcu;
    // NOP
label_1d74c0:
    // 0x1d74c0: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D74C0u;
    {
        const bool branch_taken_0x1d74c0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D74C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D74C0u;
        // 0x1d74c4: 0x3ae40001  xori        $a0, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d74c0) {
            ctx->pc = 0x1D74D8u;
            goto label_1d74d8;
        }
    }
    ctx->pc = 0x1D74C8u;
    // 0x1d74c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d74c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d74cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D74CCu;
    {
        const bool branch_taken_0x1d74cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D74D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D74CCu;
        // 0x1d74d0: 0x2822804  sllv        $a1, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d74cc) {
            ctx->pc = 0x1D74E4u;
            goto label_1d74e4;
        }
    }
    ctx->pc = 0x1D74D4u;
    // 0x1d74d4: 0x0  nop
    ctx->pc = 0x1d74d4u;
    // NOP
label_1d74d8:
    // 0x1d74d8: 0x2683ffe8  addiu       $v1, $s4, -0x18
    ctx->pc = 0x1d74d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967272));
    // 0x1d74dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d74dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d74e0: 0x622804  sllv        $a1, $v0, $v1
    ctx->pc = 0x1d74e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_1d74e4:
    // 0x1d74e4: 0xc07784c  jal         func_1DE130
    ctx->pc = 0x1D74E4u;
    SET_GPR_U32(ctx, 31, 0x1D74ECu);
    ctx->pc = 0x1DE130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE130u, 0x1D74E4u, 0x1D74ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D74ECu;
label_1d74ec:
    // 0x1d74ec: 0x96a30060  lhu         $v1, 0x60($s5)
    ctx->pc = 0x1d74ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 96)));
label_1d74f0:
    // 0x1d74f0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D74F0u;
    {
        const bool branch_taken_0x1d74f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D74F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D74F0u;
        // 0x1d74f4: 0x96c50006  lhu         $a1, 0x6($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d74f0) {
            ctx->pc = 0x1D7500u;
            goto label_1d7500;
        }
    }
    ctx->pc = 0x1D74F8u;
    // 0x1d74f8: 0x30a280ff  andi        $v0, $a1, 0x80FF
    ctx->pc = 0x1d74f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)33023);
    // 0x1d74fc: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x1d74fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1d7500:
    // 0x1d7500: 0x96a30062  lhu         $v1, 0x62($s5)
    ctx->pc = 0x1d7500u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 98)));
    // 0x1d7504: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7504u;
    {
        const bool branch_taken_0x1d7504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7504u;
        // 0x1d7508: 0x30a2ff0f  andi        $v0, $a1, 0xFF0F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65295);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7504) {
            ctx->pc = 0x1D7510u;
            goto label_1d7510;
        }
    }
    ctx->pc = 0x1D750Cu;
    // 0x1d750c: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x1d750cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1d7510:
    // 0x1d7510: 0x96a30064  lhu         $v1, 0x64($s5)
    ctx->pc = 0x1d7510u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 100)));
    // 0x1d7514: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7514u;
    {
        const bool branch_taken_0x1d7514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7514u;
        // 0x1d7518: 0x96c60008  lhu         $a2, 0x8($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7514) {
            ctx->pc = 0x1D7524u;
            goto label_1d7524;
        }
    }
    ctx->pc = 0x1D751Cu;
    // 0x1d751c: 0x30c2803f  andi        $v0, $a2, 0x803F
    ctx->pc = 0x1d751cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32831);
    // 0x1d7520: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1d7520u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1d7524:
    // 0x1d7524: 0x96a30066  lhu         $v1, 0x66($s5)
    ctx->pc = 0x1d7524u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 102)));
    // 0x1d7528: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7528u;
    {
        const bool branch_taken_0x1d7528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7528u;
        // 0x1d752c: 0x30c2ffe0  andi        $v0, $a2, 0xFFE0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65504);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7528) {
            ctx->pc = 0x1D7534u;
            goto label_1d7534;
        }
    }
    ctx->pc = 0x1D7530u;
    // 0x1d7530: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1d7530u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1d7534:
    // 0x1d7534: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1d7534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1d7538: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d7538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d753c: 0xc077506  jal         func_1DD418
    ctx->pc = 0x1D753Cu;
    SET_GPR_U32(ctx, 31, 0x1D7544u);
    ctx->pc = 0x1D7540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D753Cu;
    // 0x1d7540: 0x24710550  addiu       $s1, $v1, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD418u, 0x1D753Cu, 0x1D7544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7544u;
label_1d7544:
    // 0x1d7544: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d7544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d7548: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d7548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d754c: 0x2413007f  addiu       $s3, $zero, 0x7F
    ctx->pc = 0x1d754cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1d7550: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d7550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7554: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x1d7554u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1d7558: 0xc0774f8  jal         func_1DD3E0
    ctx->pc = 0x1D7558u;
    SET_GPR_U32(ctx, 31, 0x1D7560u);
    ctx->pc = 0x1D755Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7558u;
    // 0x1d755c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD3E0u, 0x1D7558u, 0x1D7560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7560u;
label_1d7560:
    // 0x1d7560: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d7560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d7564: 0x92c70002  lbu         $a3, 0x2($s6)
    ctx->pc = 0x1d7564u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x1d7568: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d7568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d756c: 0x82c80003  lb          $t0, 0x3($s6)
    ctx->pc = 0x1d756cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 3)));
    // 0x1d7570: 0x8ea9004c  lw          $t1, 0x4C($s5)
    ctx->pc = 0x1d7570u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x1d7574: 0x8c660034  lw          $a2, 0x34($v1)
    ctx->pc = 0x1d7574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1d7578: 0xc0774a0  jal         func_1DD280
    ctx->pc = 0x1D7578u;
    SET_GPR_U32(ctx, 31, 0x1D7580u);
    ctx->pc = 0x1D757Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7578u;
    // 0x1d757c: 0x8ea5001c  lw          $a1, 0x1C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD280u, 0x1D7578u, 0x1D7580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7580u;
label_1d7580:
    // 0x1d7580: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d7580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d7584: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d7584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7588: 0xc07744e  jal         func_1DD138
    ctx->pc = 0x1D7588u;
    SET_GPR_U32(ctx, 31, 0x1D7590u);
    ctx->pc = 0x1D758Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7588u;
    // 0x1d758c: 0x8c450030  lw          $a1, 0x30($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD138u, 0x1D7588u, 0x1D7590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7590u;
label_1d7590:
    // 0x1d7590: 0x8ea5000c  lw          $a1, 0xC($s5)
    ctx->pc = 0x1d7590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1d7594: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d7594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7598: 0x28a20080  slti        $v0, $a1, 0x80
    ctx->pc = 0x1d7598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1d759c: 0x262280a  movz        $a1, $s3, $v0
    ctx->pc = 0x1d759cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 19));
    // 0x1d75a0: 0x205182a  slt         $v1, $s0, $a1
    ctx->pc = 0x1d75a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d75a4: 0xc077464  jal         func_1DD190
    ctx->pc = 0x1D75A4u;
    SET_GPR_U32(ctx, 31, 0x1D75ACu);
    ctx->pc = 0x1D75A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D75A4u;
    // 0x1d75a8: 0x243280a  movz        $a1, $s2, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD190u, 0x1D75A4u, 0x1D75ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D75ACu;
label_1d75ac:
    // 0x1d75ac: 0x92c5000c  lbu         $a1, 0xC($s6)
    ctx->pc = 0x1d75acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x1d75b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d75b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d75b4: 0x28a20080  slti        $v0, $a1, 0x80
    ctx->pc = 0x1d75b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1d75b8: 0x262280a  movz        $a1, $s3, $v0
    ctx->pc = 0x1d75b8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 19));
    // 0x1d75bc: 0x205802a  slt         $s0, $s0, $a1
    ctx->pc = 0x1d75bcu;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d75c0: 0xc07747a  jal         func_1DD1E8
    ctx->pc = 0x1D75C0u;
    SET_GPR_U32(ctx, 31, 0x1D75C8u);
    ctx->pc = 0x1D75C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D75C0u;
    // 0x1d75c4: 0x250280a  movz        $a1, $s2, $s0 (Delay Slot)
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD1E8u, 0x1D75C0u, 0x1D75C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D75C8u;
label_1d75c8:
    // 0x1d75c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d75c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d75cc: 0x8ea60048  lw          $a2, 0x48($s5)
    ctx->pc = 0x1d75ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
    // 0x1d75d0: 0xc07751c  jal         func_1DD470
    ctx->pc = 0x1D75D0u;
    SET_GPR_U32(ctx, 31, 0x1D75D8u);
    ctx->pc = 0x1D75D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D75D0u;
    // 0x1d75d4: 0x8ea50044  lw          $a1, 0x44($s5) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD470u, 0x1D75D0u, 0x1D75D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D75D8u;
label_1d75d8:
    // 0x1d75d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d75d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d75dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d75dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d75e0: 0xc0773e0  jal         func_1DCF80
    ctx->pc = 0x1D75E0u;
    SET_GPR_U32(ctx, 31, 0x1D75E8u);
    ctx->pc = 0x1D75E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D75E0u;
    // 0x1d75e4: 0x8c45002c  lw          $a1, 0x2C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCF80u, 0x1D75E0u, 0x1D75E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D75E8u;
label_1d75e8:
    // 0x1d75e8: 0x8ea2006c  lw          $v0, 0x6C($s5)
    ctx->pc = 0x1d75e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 108)));
    // 0x1d75ec: 0x92c5000b  lbu         $a1, 0xB($s6)
    ctx->pc = 0x1d75ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 11)));
    // 0x1d75f0: 0xc081c20  jal         func_207080
    ctx->pc = 0x1D75F0u;
    SET_GPR_U32(ctx, 31, 0x1D75F8u);
    ctx->pc = 0x1D75F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D75F0u;
    // 0x1d75f4: 0x90440001  lbu         $a0, 0x1($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207080u, 0x1D75F0u, 0x1D75F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D75F8u;
label_1d75f8:
    // 0x1d75f8: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x1d75f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1d75fc: 0xc081c38  jal         func_2070E0
    ctx->pc = 0x1D75FCu;
    SET_GPR_U32(ctx, 31, 0x1D7604u);
    ctx->pc = 0x1D7600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D75FCu;
    // 0x1d7600: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2070E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2070E0u, 0x1D75FCu, 0x1D7604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7604u;
label_1d7604:
    // 0x1d7604: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1d7604u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d7608: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1d7608u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1d760c: 0xc07740e  jal         func_1DD038
    ctx->pc = 0x1D760Cu;
    SET_GPR_U32(ctx, 31, 0x1D7614u);
    ctx->pc = 0x1D7610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D760Cu;
    // 0x1d7610: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD038u, 0x1D760Cu, 0x1D7614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7614u;
label_1d7614:
    // 0x1d7614: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d7614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d7618: 0xc078454  jal         func_1E1150
    ctx->pc = 0x1D7618u;
    SET_GPR_U32(ctx, 31, 0x1D7620u);
    ctx->pc = 0x1D761Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7618u;
    // 0x1d761c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1150u, 0x1D7618u, 0x1D7620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7620u;
label_1d7620:
    // 0x1d7620: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d7620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7624: 0xc0773f6  jal         func_1DCFD8
    ctx->pc = 0x1D7624u;
    SET_GPR_U32(ctx, 31, 0x1D762Cu);
    ctx->pc = 0x1D7628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7624u;
    // 0x1d7628: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCFD8u, 0x1D7624u, 0x1D762Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D762Cu;
label_1d762c:
    // 0x1d762c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1d762cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1d7630: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1d7630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d7634: 0x240309e4  addiu       $v1, $zero, 0x9E4
    ctx->pc = 0x1d7634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d7638: 0x24850558  addiu       $a1, $a0, 0x558
    ctx->pc = 0x1d7638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1368));
    // 0x1d763c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1d763cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d7640: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1d7640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1d7644: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1d7644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d7648: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d7648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d764c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D764Cu;
    {
        const bool branch_taken_0x1d764c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d764c) {
            ctx->pc = 0x1D7650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D764Cu;
            // 0x1d7650: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7660u;
            goto label_1d7660;
        }
    }
    ctx->pc = 0x1D7654u;
    // 0x1d7654: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D7654u;
    {
        const bool branch_taken_0x1d7654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7654u;
        // 0x1d7658: 0x8ea20018  lw          $v0, 0x18($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7654) {
            ctx->pc = 0x1D7670u;
            goto label_1d7670;
        }
    }
    ctx->pc = 0x1D765Cu;
    // 0x1d765c: 0x0  nop
    ctx->pc = 0x1d765cu;
    // NOP
label_1d7660:
    // 0x1d7660: 0x8ea40018  lw          $a0, 0x18($s5)
    ctx->pc = 0x1d7660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x1d7664: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1d7664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d7668: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d7668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d766c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1d766cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1d7670:
    // 0x1d7670: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1d7670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d7674: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1d7674u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1d7678: 0xc077440  jal         func_1DD100
    ctx->pc = 0x1D7678u;
    SET_GPR_U32(ctx, 31, 0x1D7680u);
    ctx->pc = 0x1D767Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7678u;
    // 0x1d767c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD100u, 0x1D7678u, 0x1D7680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7680u;
label_1d7680:
    // 0x1d7680: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d7680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7684: 0xc077424  jal         func_1DD090
    ctx->pc = 0x1D7684u;
    SET_GPR_U32(ctx, 31, 0x1D768Cu);
    ctx->pc = 0x1D7688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7684u;
    // 0x1d7688: 0x8ea50014  lw          $a1, 0x14($s5) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD090u, 0x1D7684u, 0x1D768Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D768Cu;
label_1d768c:
    // 0x1d768c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d768cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7690: 0xc077432  jal         func_1DD0C8
    ctx->pc = 0x1D7690u;
    SET_GPR_U32(ctx, 31, 0x1D7698u);
    ctx->pc = 0x1D7694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7690u;
    // 0x1d7694: 0x8ea50020  lw          $a1, 0x20($s5) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD0C8u, 0x1D7690u, 0x1D7698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7698u;
label_1d7698:
    // 0x1d7698: 0x96c50004  lhu         $a1, 0x4($s6)
    ctx->pc = 0x1d7698u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x1d769c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1d769cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1d76a0: 0x8c620550  lw          $v0, 0x550($v1)
    ctx->pc = 0x1d76a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x370550u));
    // 0x1d76a4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1d76a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d76a8: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x1d76a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1d76ac: 0x652804  sllv        $a1, $a1, $v1
    ctx->pc = 0x1d76acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x1d76b0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1d76b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1d76b4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1d76b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1d76b8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1d76b8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1d76bc: 0xc07739a  jal         func_1DCE68
    ctx->pc = 0x1D76BCu;
    SET_GPR_U32(ctx, 31, 0x1D76C4u);
    ctx->pc = 0x1D76C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D76BCu;
    // 0x1d76c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCE68u, 0x1D76BCu, 0x1D76C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D76C4u;
label_1d76c4:
    // 0x1d76c4: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D76C4u;
    {
        const bool branch_taken_0x1d76c4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D76C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D76C4u;
        // 0x1d76c8: 0x3ae40001  xori        $a0, $s7, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d76c4) {
            ctx->pc = 0x1D76D8u;
            goto label_1d76d8;
        }
    }
    ctx->pc = 0x1D76CCu;
    // 0x1d76cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d76ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d76d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D76D0u;
    {
        const bool branch_taken_0x1d76d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D76D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D76D0u;
        // 0x1d76d4: 0x2822804  sllv        $a1, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 20) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d76d0) {
            ctx->pc = 0x1D76E4u;
            goto label_1d76e4;
        }
    }
    ctx->pc = 0x1D76D8u;
label_1d76d8:
    // 0x1d76d8: 0x2683ffe8  addiu       $v1, $s4, -0x18
    ctx->pc = 0x1d76d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967272));
    // 0x1d76dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d76dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d76e0: 0x622804  sllv        $a1, $v0, $v1
    ctx->pc = 0x1d76e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_1d76e4:
    // 0x1d76e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d76e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d76e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d76e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d76ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d76ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d76f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d76f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d76f4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d76f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d76f8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d76f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d76fc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1d76fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d7700: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1d7700u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d7704: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1d7704u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d7708: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1d7708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d770c: 0x80777fe  j           func_1DDFF8
    ctx->pc = 0x1D770Cu;
    ctx->pc = 0x1D7710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D770Cu;
    // 0x1d7710: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDFF8u;
    FUN_001ddff8_0x1ddff8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7714u;
    // 0x1d7714: 0x0  nop
    ctx->pc = 0x1d7714u;
    // NOP
label_1d7718:
    // 0x1d7718: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d7718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d771c: 0x90e60001  lbu         $a2, 0x1($a3)
    ctx->pc = 0x1d771cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x1d7720: 0x8c430550  lw          $v1, 0x550($v0)
    ctx->pc = 0x1d7720u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x370550u));
    // 0x1d7724: 0x90e50003  lbu         $a1, 0x3($a3)
    ctx->pc = 0x1d7724u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x1d7728: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d7728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d772c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d772cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7730: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d7730u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7734: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d7734u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7738: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d7738u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d773c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d773cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7740: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d7740u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d7744: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1d7744u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d7748: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1d7748u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d774c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1d774cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d7750: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1d7750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d7754: 0x8077768  j           func_1DDDA0
    ctx->pc = 0x1D7754u;
    ctx->pc = 0x1D7758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7754u;
    // 0x1d7758: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDDA0u;
    FUN_001ddda0_0x1ddda0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D775Cu;
    // 0x1d775c: 0x0  nop
    ctx->pc = 0x1d775cu;
    // NOP
label_1d7760:
    // 0x1d7760: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d7764:
    // 0x1d7764: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d7764u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7768: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d7768u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d776c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d776cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d7770: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d7770u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7774: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d7774u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d7778: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1d7778u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d777c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1d777cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d7780: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1d7780u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d7784: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1d7784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d7788: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7788u;
        // 0x1d778c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7790u;
}
